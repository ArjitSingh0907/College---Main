const express = require("express");
const mysql = require("mysql2/promise");
const cors = require("cors");
const path = require("path");

const app = express();
app.use(cors());
app.use(express.json());
app.use(express.static(__dirname));

const RESTRICTED_DOMAINS = [
    "gmail.com", "yahoo.com", "yahoo.co.in", "outlook.com", "hotmail.com", 
    "icloud.com", "mail.com", "protonmail.com", "proton.me", "aol.com", 
    "zoho.com", "yandex.com", "gmx.com", "live.com"
];

const dbPool = mysql.createPool({
    host: process.env.DB_HOST || "localhost",
    user: process.env.DB_USER || "root",
    password: process.env.DB_PASSWORD || "",
    database: process.env.DB_NAME || "origin_2026_db",
    waitForConnections: true,
    connectionLimit: 10,
    queueLimit: 0
});

app.get("/", (req, res) => {
    res.sendFile(path.join(__dirname, "index.html"));
});

app.get("/post-ps", (req, res) => {
    res.sendFile(path.join(__dirname, "post-ps.html"));
});

app.post("/api/submit-ps", async (req, res) => {
    try {
        const { full_name, designation, corp_email, ps_1, ps_2, ps_3, ps_4, ps_5, concerns } = req.body;

        if (!full_name || !designation || !corp_email || !ps_1) {
            return res.status(400).json({ message: "Required fields missing." });
        }

        const domain = corp_email.trim().split("@")[1]?.toLowerCase();
        if (!domain || RESTRICTED_DOMAINS.includes(domain)) {
            return res.status(400).json({ message: "Generic email domains are prohibited. Submit with your company email." });
        }

        const insertQuery = `
            INSERT INTO problem_statements 
            (full_name, designation, corp_email, ps_1, ps_2, ps_3, ps_4, ps_5, concerns)
            VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)
        `;

        const [result] = await dbPool.execute(insertQuery, [
            full_name,
            designation,
            corp_email,
            ps_1,
            ps_2 || null,
            ps_3 || null,
            ps_4 || null,
            ps_5 || null,
            concerns || null
        ]);

        return res.status(201).json({ 
            success: true, 
            submission_id: result.insertId,
            message: "Problem statements successfully recorded." 
        });

    } catch (error) {
        console.error("Database ingestion error:", error);
        return res.status(500).json({ message: "Internal server error." });
    }
});

const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
    console.log(`ORIGIN '26 Ingestion Server active on port ${PORT}`);
});