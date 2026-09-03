const SITE_DATA = {
    hero: {
        title: "ORIGIN '26",
        tagline: "</ THE BEGINNING OF THE NEXT BIG THING >",
        date: "Dates Announcing Soon",
        venue: "Amity University Haryana"
    },
    about: {
        hackathon: {
            title: "About ORIGIN '26",
            badge: "THE HACKATHON",
            mainText: "ORIGIN '26 is an intense 36-hour innovation sprint connecting student engineers with critical industry challenges to build production-ready solutions.",
            pillars: [
                {
                    icon: "⚡",
                    title: "36-Hour Sprint",
                    desc: "An intense build marathon turning concepts into working hardware and software."
                },
                {
                    icon: "🤝",
                    title: "Industry Mentorship",
                    desc: "Collaborate directly with domain leaders and jury members during development."
                },
                {
                    icon: "🏆",
                    title: "Prize & Career Pool",
                    desc: "Access hiring tracks, cloud credits, grants, and direct incubation pathways."
                }
            ]
        },
        motive: {
            title: "Solutions > Ideas",
            badge: "THE MOTIVE",
            mainText: "Enterprise partners require functional, deployable engineering rather than hypothetical pitch decks.",
            pillars: [
                {
                    icon: "🎯",
                    title: "Real Problems",
                    desc: "Direct corporate challenges curated by enterprise partners."
                },
                {
                    icon: "🛠️",
                    title: "Production Focus",
                    desc: "Emphasis on stable architecture, clean code, and working builds."
                },
                {
                    icon: "🌐",
                    title: "Ecosystem",
                    desc: "Powered by Techniki and Amity School of Engineering & Technology."
                }
            ]
        }
    },
    verticals: [
        {
            title: "Artificial Intelligence & ML",
            icon: "🧠",
            badge: "Intelligent Systems",
            problems: [
                "Real-time edge video analytics for industrial hazard detection.",
                "Autonomous multimodal diagnostic assistant for triage analysis.",
                "Predictive anomaly detection across distributed cloud infrastructure."
            ]
        },
        {
            title: "Internet of Things (IoT)",
            icon: "📡",
            badge: "Connected Hardware",
            problems: [
                "Sub-GHz mesh sensor telemetry network for field environments.",
                "Ultra-low-power asset tracking and tamper-detection units.",
                "Smart energy metering with automated load prediction models."
            ]
        },
        {
            title: "Robotics & Automation",
            icon: "🤖",
            badge: "Autonomous Units",
            problems: [
                "Vision-guided SLAM navigation for indoor transport rovers.",
                "Kinematic sorting routines for automated robotic arms.",
                "Multi-agent swarm coordination for field operations."
            ]
        },
        {
            title: "Cybersecurity & Defence",
            icon: "🛡️",
            badge: "Security & Trust",
            problems: [
                "Zero-trust network micro-segmentation based on telemetry.",
                "Automated honeypot infrastructure with machine-learning analysis.",
                "Quantum-resistant cryptographic data envelopes for storage."
            ]
        },
        {
            title: "Cloud & DevOps",
            icon: "☁️",
            badge: "Infrastructure",
            problems: [
                "Automated developer environment provisioning with dynamic cost caps.",
                "Canary deployment orchestrator with automated rollback triggers.",
                "Workload autoscaler optimizing multi-cluster GPU compute."
            ]
        },
        {
            title: "Aerospace & Defence",
            icon: "🚀",
            badge: "Aero Innovation",
            problems: [
                "Autonomous return-to-home flight routines in GPS-denied zones.",
                "Real-time aerodynamic telemetry visualizer with physics models.",
                "Airframe structural health monitoring using edge DSP analysis."
            ]
        }
    ],
    pathways: {
        software: {
            title: "Software Solutions",
            badge: "DIGITAL ARCHITECTURE",
            icon: "💻",
            description: "Engineer scalable, high-throughput digital systems addressing modern industry challenges with code clarity, resilience, and modular architecture.",
            specs: [
                { icon: "🤖", title: "Autonomous AI Pipelines", desc: "Edge inference, specialized LLM agents & vision models." },
                { icon: "🌐", title: "Full-Stack Platforms", desc: "Reactive web and mobile systems with reliable data sync." },
                { icon: "⚡", title: "Distributed Engines", desc: "Event-driven services, fast APIs & stream handling." },
                { icon: "📊", title: "Telemetry & Analytics", desc: "Real-time dashboards offering operational visibility." }
            ]
        },
        hardware: {
            title: "Hardware Solutions",
            badge: "PHYSICAL ENGINEERING",
            icon: "⚙️",
            description: "Bridge low-level embedded firmware with physical electronics. Build cyber-physical units, robotics, and custom sensors engineered for field deployment.",
            specs: [
                { icon: "📡", title: "IoT Mesh Networks", desc: "Sub-GHz telemetry, LoRaWAN & low-power sensor nodes." },
                { icon: "🦾", title: "Robotics & Kinematics", desc: "Autonomous rovers, localization & motor actuation." },
                { icon: "🔋", title: "Embedded Firmware", desc: "RTOS microcontrollers, FPGA logic & power optimization." },
                { icon: "🛡️", title: "Industrial Telemetry", desc: "Automated hardware diagnostics & environmental sensing." }
            ]
        }
    },
    timeline: [
        { 
            step: "01", 
            icon: "🪐", 
            phase: "PHASE 1: ONBOARDING",
            title: "Registrations & Team Assembly", 
            desc: "Register your team on the central portal and assemble cross-functional talent before challenge statements are released." 
        },
        { 
            step: "02", 
            icon: "🔭", 
            phase: "PHASE 2: EMBARGO LIFT",
            title: "Problem Statements Revealed", 
            desc: "Official industry challenge briefs are unlocked simultaneously for all registered cohorts to analyze." 
        },
        { 
            step: "03", 
            icon: "📜", 
            phase: "PHASE 3: ARCHITECTURE REVIEW",
            title: "System Blueprint Submission", 
            desc: "Submit a two-page technical blueprint detailing your system architecture, data flow, and chosen tech stack." 
        },
        { 
            step: "04", 
            icon: "⚡", 
            phase: "PHASE 4: EVALUATION",
            title: "Technical Review & Shortlisting", 
            desc: "Panels evaluate blueprint feasibility and production readiness to qualify teams for the on-campus finale." 
        },
        { 
            step: "05", 
            icon: "⚔️", 
            phase: "PHASE 5: THE SPRINT",
            title: "The Showdown: 36-Hour Arena", 
            desc: "Shortlisted teams gather at the Amity campus for a continuous 36-hour build sprint alongside mentors to pitch live prototypes." 
        }
    ],
    legacy: {
        events: [
            {
                icon: "🏢",
                title: "Microsoft Corporate Tech Tour",
                badge: "INDUSTRIAL IMMERSION",
                desc: "Direct corporate exposure exploring enterprise cloud infrastructure, scalable engineering, and system resiliency."
            },
            {
                icon: "⚡",
                title: "CTRL + THINK Hackathon",
                badge: "RAPID PROTOTYPING",
                desc: "An intense 24-hour innovation challenge pushing multidisciplinary teams to build working software and hardware."
            },
            {
                icon: "👁️",
                title: "Computer Vision & AI Applied Bootcamp",
                badge: "INTELLIGENT SYSTEMS",
                desc: "Hands-on laboratory sessions covering deep neural networks, detection pipelines, and embedded visual intelligence."
            },
            {
                icon: "🛡️",
                title: "Cybersecurity & Defense Seminar",
                badge: "SECURITY & TRUST",
                desc: "Interactive workshops exploring penetration testing, threat hunting, and modern defensive frameworks."
            },
            {
                icon: "🎙️",
                title: "Project Incubation & Stage Demo Days",
                badge: "ENTERPRISE PITCH",
                desc: "Stage presentations where student innovators pitch system architecture and prototypes to domain experts."
            },
            {
                icon: "🌐",
                title: "Techniki Tech Orientation Sprints",
                badge: "COMMUNITY ONBOARDING",
                desc: "Annual cohort onboarding and breakout sessions introducing engineers to cutting-edge development stacks."
            }
        ],
        gallery: [
            { img: "static/legacy-microsoft.jpg", title: "Microsoft Corporate Immersion", tag: "Industrial Tour" },
            { img: "static/legacy-core-team.jpg", title: "Core Engineering Cohort", tag: "Techniki Core" },
            { img: "static/legacy-assembly.jpg", title: "Annual Tech Assembly", tag: "ASET Ecosystem" },
            { img: "static/legacy-hackathon.jpg", title: "Hands-on Build Sprints", tag: "Hackathon Arena" },
            { img: "static/legacy-presentation.jpg", title: "Architecture Case Studies", tag: "Tech Seminar" },
            { img: "static/legacy-faculty.jpg", title: "Faculty & Mentor Panels", tag: "Academic Advisory" },
            { img: "static/legacy-orientation.jpg", title: "Orientation & Induction", tag: "Community Sprints" },
            { img: "static/legacy-lab.jpg", title: "Live Coding & System Labs", tag: "Developer Workshops" }
        ]
    }
};