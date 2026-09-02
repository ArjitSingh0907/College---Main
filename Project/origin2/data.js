const SITE_DATA = {
    hero: {
        title: "ORIGIN '26",
        tagline: "</ THE BEGINNING OF THE NEXT BIG THING >",
        date: "23rd September - 25th September",
        venue: "Amity University Haryana"
    },
    about: {
        hackathon: {
            title: "About ORIGIN '26",
            badge: "THE HACKATHON",
            mainText: "ORIGIN '26 is an intense 36-hour innovation sprint hosted at Amity University Haryana by Techniki & ASET. It serves as a launchpad connecting ambitious developers, engineers, and designers with mission-critical industry challenges.",
            pillars: [
                {
                    icon: "⚡",
                    title: "36-Hour Sprint",
                    desc: "An uninterrupted build marathon transforming conceptual architectures into functional hardware & software prototypes."
                },
                {
                    icon: "🤝",
                    title: "Industry Mentorship",
                    desc: "Direct access to enterprise leaders, technical mentors, and specialized domain juries throughout the event."
                },
                {
                    icon: "🏆",
                    title: "Prize & Career Pool",
                    desc: "Direct internship opportunities, cloud & developer credits, cash grants, and project incubation avenues."
                }
            ]
        },
        motive: {
            title: "Solutions > Ideas",
            badge: "THE MOTIVE",
            mainText: "Industry leaders do not need more hypothetical ideas—they need working, deployable engineering solutions. ORIGIN '26 is engineered to bridge academia and real-world technology production.",
            pillars: [
                {
                    icon: "🎯",
                    title: "Real Industry Problems",
                    desc: "Participants tackle unreleased, authenticated problem statements curated directly by corporate partners."
                },
                {
                    icon: "🛠️",
                    title: "Production Viability",
                    desc: "Focus on clean architecture, feasibility, low latency, and systems designed to deploy beyond the competition."
                },
                {
                    icon: "🌐",
                    title: "Techniki & ASET Ecosystem",
                    desc: "Backed by the flagship technology ecosystem of Amity School of Engineering & Technology, Gurugram."
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
                "Real-time edge video analytics for industrial safety compliance and hazard detection.",
                "Autonomous multimodal diagnostic assistant for triage and patient data analysis.",
                "Self-healing predictive anomaly detection across distributed cloud infrastructure logs."
            ]
        },
        {
            title: "Internet of Things (IoT)",
            icon: "📡",
            badge: "Connected Hardware",
            problems: [
                "Sub-GHz mesh sensor telemetry network for precision agricultural monitoring.",
                "Ultra-low-power asset tracking and tamper-detection hardware for supply chains.",
                "Non-intrusive smart energy metering with automated load prediction models."
            ]
        },
        {
            title: "Robotics & Automation",
            icon: "🤖",
            badge: "Autonomous Units",
            problems: [
                "Vision-guided SLAM navigation for indoor warehouse payload transport rovers.",
                "Reinforcement learning-based robotic arm kinematics for high-speed sorting.",
                "Collaborative multi-agent swarm coordination for disaster search and rescue."
            ]
        },
        {
            title: "Cybersecurity & Defence",
            icon: "🛡️",
            badge: "Security & Trust",
            problems: [
                "Zero-trust network micro-segmentation driven by real-time behavioral telemetry.",
                "Automated honeypot infrastructure with machine-learning threat intelligence mitigation.",
                "Quantum-resistant cryptographic data envelope for distributed enterprise storage."
            ]
        },
        {
            title: "Cloud & DevOps",
            icon: "☁️",
            badge: "Infrastructure",
            problems: [
                "Automated ephemeral developer environment provisioning with dynamic cost caps.",
                "Zero-downtime canary deployment orchestrator with automated rollback triggers.",
                "AI-driven workload autoscaler optimizing multi-cluster GPU compute efficiency."
            ]
        },
        {
            title: "Aerospace & Defence",
            icon: "🚀",
            badge: "Aero Innovation",
            problems: [
                "Autonomous fail-safe return-to-home flight algorithms under GPS-denied environments.",
                "Real-time aerodynamic telemetry visualizer with low-latency physics simulation.",
                "Acoustic composite airframe structural health monitoring with edge DSP analysis."
            ]
        }
    ],
    pathways: {
        software: {
            title: "Software Solutions",
            badge: "DIGITAL ARCHITECTURE",
            icon: "💻",
            description: "Engineer scalable, high-throughput digital systems that address systemic enterprise challenges. From autonomous AI pipelines to resilient cloud infrastructure, prioritize code elegance, modularity, and intuitive interfaces.",
            specs: [
                { icon: "🤖", title: "Autonomous AI Pipelines", desc: "Edge inference, specialized LLM agents & real-time computer vision." },
                { icon: "🌐", title: "Full-Stack Platforms", desc: "Reactive web & mobile applications with offline-first synchronization." },
                { icon: "⚡", title: "Distributed Engines", desc: "Event-driven microservices, high-throughput APIs & stream processing." },
                { icon: "📊", title: "Telemetry & Analytics", desc: "Interactive dashboards offering actionable operational intelligence." }
            ]
        },
        hardware: {
            title: "Hardware Solutions",
            badge: "PHYSICAL ENGINEERING",
            icon: "⚙️",
            description: "Bridge the gap between digital firmware and physical execution. Prototype cyber-physical devices, custom embedded systems, robotics, and edge sensors engineered for robust real-world deployment.",
            specs: [
                { icon: "📡", title: "IoT Mesh Networks", desc: "Sub-GHz telemetry, LoRaWAN topologies & low-power smart sensors." },
                { icon: "🦾", title: "Robotics & Kinematics", desc: "Autonomous rovers, SLAM localization & high-precision actuators." },
                { icon: "🔋", title: "Embedded Firmware", desc: "RTOS microcontrollers, FPGA acceleration & power-optimized architectures." },
                { icon: "🛡️", title: "Industrial Telemetry", desc: "Automated hardware diagnostics, edge DSP & environmental sensors." }
            ]
        }
    },
    timeline: [
        { 
            step: "01", 
            icon: "🪐", 
            phase: "PHASE 1: ONBOARDING",
            title: "Registrations & Team Assembly", 
            desc: "Candidate teams register through the central ORIGIN '26 portal. Assemble cross-disciplinary rosters of developers, engineers, and UX architects while challenge statements remain sealed under embargo." 
        },
        { 
            step: "02", 
            icon: "🔭", 
            phase: "PHASE 2: EMBARGO LIFT",
            title: "Problem Statements Revealed", 
            desc: "Synchronized reveal of authenticated industry problem statements 48-72 hours prior to selection. Teams analyze challenge briefs, technical specifications, and evaluation benchmarks." 
        },
        { 
            step: "03", 
            icon: "📜", 
            phase: "PHASE 3: ARCHITECTURE REVIEW",
            title: "System Blueprint Submission", 
            desc: "Teams formulate and submit a rigorous two-page architectural dossier detailing system design, proposed data pipelines, selected tech stack, hardware schematics, and execution milestones." 
        },
        { 
            step: "04", 
            icon: "⚡", 
            phase: "PHASE 4: EVALUATION",
            title: "Technical Review & Shortlisting", 
            desc: "Comprehensive assessment by specialized engineering juries evaluating architectural feasibility, technical innovation, and production viability. Qualified cohorts receive official on-campus clearances." 
        },
        { 
            step: "05", 
            icon: "⚔️", 
            phase: "PHASE 5: THE SPRINT",
            title: "The Showdown: 36-Hour Arena", 
            desc: "The definitive 36-hour physical build marathon at Amity University Haryana. Shortlisted teams build alongside industry mentors to construct, test, and pitch fully demonstrable prototypes." 
        }
    ],
    legacy: {
        events: [
            {
                icon: "🏢",
                title: "Microsoft Corporate Tech Tour",
                badge: "INDUSTRIAL IMMERSION",
                desc: "Direct corporate exposure at Microsoft Headquarters, exploring enterprise cloud infrastructure, scalable AI engineering workflows, and system resiliency."
            },
            {
                icon: "⚡",
                title: "CTRL + THINK Hackathon",
                badge: "RAPID PROTOTYPING",
                desc: "An intense 24-hour innovation challenge pushing multidisciplinary teams to engineer working software and hardware solutions under time constraints."
            },
            {
                icon: "👁️",
                title: "Computer Vision & AI Applied Bootcamp",
                badge: "INTELLIGENT SYSTEMS",
                desc: "Hands-on laboratory sessions training participants in deep neural networks, real-time object detection pipelines, and embedded visual intelligence."
            },
            {
                icon: "🛡️",
                title: "Cybersecurity & Defense Seminar",
                badge: "SECURITY & TRUST",
                desc: "Interactive hands-on offensive and defensive cybersecurity workshops covering vulnerability assessments, threat intelligence, and digital forensics."
            },
            {
                icon: "🎙️",
                title: "Project Incubation & Stage Demo Days",
                badge: "ENTERPRISE PITCH",
                desc: "High-impact stage presentations where student innovators pitch system architecture diagrams and prototypes to domain experts and academic juries."
            },
            {
                icon: "🌐",
                title: "Techniki Tech Orientation Sprints",
                badge: "COMMUNITY ONBOARDING",
                desc: "Annual cohort onboarding and engineering breakout sessions introducing hundreds of fresh engineers to cutting-edge development stacks."
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