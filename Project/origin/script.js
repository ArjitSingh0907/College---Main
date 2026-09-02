document.addEventListener("DOMContentLoaded", () => {

    document.getElementById("hero-title").innerText = SITE_DATA.hero.title;
    document.getElementById("hero-tagline").innerText = SITE_DATA.hero.tagline;
    document.getElementById("hero-date").innerText = SITE_DATA.hero.date;
    document.getElementById("hero-venue").innerText = SITE_DATA.hero.venue;

    const aboutContainer = document.getElementById("about-container");
    const aboutData = SITE_DATA.about;

    [aboutData.hackathon, aboutData.motive].forEach((item) => {
        const card = document.createElement("div");
        card.className = "apple-card apple-reveal";

        let pillarsHtml = "";
        item.pillars.forEach((p) => {
            pillarsHtml += `
                <div class="pillar-item">
                    <div class="pillar-icon-box">${p.icon}</div>
                    <div>
                        <h4>${p.title}</h4>
                        <p>${p.desc}</p>
                    </div>
                </div>
            `;
        });

        card.innerHTML = `
            <div class="card-top-pane">
                <span class="card-badge">${item.badge}</span>
                <h2>${item.title}</h2>
                <p class="card-body-text">${item.mainText}</p>
            </div>
            <div class="about-pillars-grid">
                ${pillarsHtml}
            </div>
        `;
        aboutContainer.appendChild(card);
    });

    const flipGrid = document.getElementById("domains-flip-grid");
    SITE_DATA.verticals.forEach((domain) => {
        const card = document.createElement("div");
        card.className = "flip-card apple-reveal";
        
        let problemListHtml = "";
        domain.problems.forEach((prob, i) => {
            problemListHtml += `<li data-num="${i + 1}.">${prob}</li>`;
        });

        card.innerHTML = `
            <div class="flip-card-inner">
                <div class="flip-card-front">
                    <div class="domain-icon">${domain.icon}</div>
                    <span class="card-badge">${domain.badge}</span>
                    <h3>${domain.title}</h3>
                </div>
                <div class="flip-card-back">
                    <span class="card-badge">${domain.badge}</span>
                    <h4>${domain.title}</h4>
                    <ul class="problem-list">
                        ${problemListHtml}
                    </ul>
                </div>
            </div>
        `;

        card.addEventListener("click", () => {
            if (window.matchMedia("(hover: none)").matches || window.innerWidth <= 1024) {
                card.classList.toggle("is-flipped");
            }
        });

        flipGrid.appendChild(card);
    });

    const timelineContainer = document.getElementById("timeline-wrapper");
    SITE_DATA.timeline.forEach((item) => {
        const stepCard = document.createElement("div");
        stepCard.className = "timeline-step apple-reveal";
        stepCard.innerHTML = `
            <div class="timeline-milestone-node">
                <span class="node-icon">${item.icon}</span>
                <span class="node-step">${item.step}</span>
            </div>
            <div class="timeline-content">
                <span class="timeline-phase-tag">${item.phase}</span>
                <h3>${item.title}</h3>
                <p>${item.desc}</p>
            </div>
        `;
        timelineContainer.appendChild(stepCard);
    });

    const pathwaysGrid = document.getElementById("pathways-grid");
    const pData = SITE_DATA.pathways;

    [pData.software, pData.hardware].forEach((track) => {
        const card = document.createElement("div");
        card.className = "apple-card apple-reveal";
        
        let specsHtml = "";
        track.specs.forEach(s => {
            specsHtml += `
                <div class="spec-badge-card">
                    <span class="spec-icon">${s.icon}</span>
                    <div class="spec-content">
                        <h4>${s.title}</h4>
                        <p>${s.desc}</p>
                    </div>
                </div>
            `;
        });

        card.innerHTML = `
            <div class="card-top-pane">
                <span class="card-badge">${track.badge}</span>
                <div style="display: flex; align-items: center; gap: 12px; margin-bottom: 6px;">
                    <span style="font-size: 1.8rem;">${track.icon}</span>
                    <h3>${track.title}</h3>
                </div>
                <p class="card-body-text">${track.description}</p>
            </div>
            <div class="pathway-specs-grid">
                ${specsHtml}
            </div>
        `;
        pathwaysGrid.appendChild(card);
    });

    const legacyEventsGrid = document.getElementById("legacy-events-grid");
    const galleryTrack = document.getElementById("gallery-track");

    SITE_DATA.legacy.events.forEach((event) => {
        const card = document.createElement("div");
        card.className = "apple-card apple-reveal";
        card.innerHTML = `
            <div>
                <span class="card-badge">${event.badge}</span>
                <div style="display: flex; align-items: center; gap: 12px; margin-bottom: 8px;">
                    <span style="font-size: 1.5rem;">${event.icon}</span>
                    <h3 style="font-size: 1.25rem; font-weight: 700;">${event.title}</h3>
                </div>
                <p class="card-body-text" style="font-size: 0.95rem;">${event.desc}</p>
            </div>
        `;
        legacyEventsGrid.appendChild(card);
    });

    SITE_DATA.legacy.gallery.forEach((item) => {
        const card = document.createElement("div");
        card.className = "gallery-card";
        card.innerHTML = `
            <div class="gallery-img-wrap">
                <img src="${item.img}" alt="${item.title}" loading="lazy">
            </div>
            <div class="gallery-meta">
                <span class="card-badge">${item.tag}</span>
                <h4>${item.title}</h4>
            </div>
        `;
        galleryTrack.appendChild(card);
    });

    const prevBtn = document.getElementById("carousel-prev-btn");
    const nextBtn = document.getElementById("carousel-next-btn");

    if (prevBtn && nextBtn && galleryTrack) {
        prevBtn.addEventListener("click", () => {
            const scrollDistance = window.innerWidth <= 768 ? window.innerWidth * 0.8 : 360;
            galleryTrack.scrollBy({ left: -scrollDistance, behavior: "smooth" });
        });
        nextBtn.addEventListener("click", () => {
            const scrollDistance = window.innerWidth <= 768 ? window.innerWidth * 0.8 : 360;
            galleryTrack.scrollBy({ left: scrollDistance, behavior: "smooth" });
        });
    }

    const navWrapper = document.getElementById("nav-wrapper");
    const bottomDock = document.getElementById("bottom-dock");
    const heroSection = document.getElementById("hero");
    let isSplitTicking = false;

    function checkNavSplit() {
        if (!heroSection) return;
        const heroBottom = heroSection.getBoundingClientRect().bottom;

        if (heroBottom < 100) {
            navWrapper.classList.add("is-split");
            bottomDock.classList.add("is-visible");
        } else {
            navWrapper.classList.remove("is-split");
            bottomDock.classList.remove("is-visible");
        }
        isSplitTicking = false;
    }

    window.addEventListener("scroll", () => {
        if (!isSplitTicking) {
            requestAnimationFrame(checkNavSplit);
            isSplitTicking = true;
        }
    }, { passive: true });
    checkNavSplit();

    const menuBtn = document.getElementById("mobile-menu-btn");
    const topNavLinks = document.getElementById("top-nav-links");
    const navItems = document.querySelectorAll(".nav-item");

    if (menuBtn && topNavLinks) {
        menuBtn.addEventListener("click", () => {
            menuBtn.classList.toggle("active");
            topNavLinks.classList.toggle("active");
            document.body.style.overflow = topNavLinks.classList.contains("active") ? "hidden" : "";
        });

        navItems.forEach(item => {
            item.addEventListener("click", () => {
                menuBtn.classList.remove("active");
                topNavLinks.classList.remove("active");
                document.body.style.overflow = "";
            });
        });
    }

    const warpCanvas = document.getElementById("warp-canvas");
    const cometCanvas = document.getElementById("comet-canvas");

    const warpCtx = warpCanvas.getContext("2d");
    const cometCtx = cometCanvas.getContext("2d", { alpha: true });

    let stars3D = [];
    const NUM_STARS = window.innerWidth <= 768 ? 140 : 260;
    const baseSpeed = 1.0;
    let currentSpeed = baseSpeed;
    let targetSpeed = baseSpeed;

    let mouseX = -100, mouseY = -100;
    let prevMouseX = -100, prevMouseY = -100;
    let flameDots = [];

    let targetWindY = 0;
    let currentWindY = 0;
    let lastScrollY = window.scrollY;

    function resizeCanvases() {
        warpCanvas.width = window.innerWidth;
        warpCanvas.height = window.innerHeight;
        cometCanvas.width = window.innerWidth;
        cometCanvas.height = window.innerHeight;
        init3DStars();
    }

    function init3DStars() {
        stars3D = [];
        for (let i = 0; i < NUM_STARS; i++) {
            const spectralRand = Math.random();
            let colorType = "255, 255, 255";
            if (spectralRand < 0.15) {
                colorType = "56, 189, 248";
            } else if (spectralRand < 0.32) {
                colorType = "251, 191, 36";
            } else if (spectralRand < 0.40) {
                colorType = "249, 115, 22";
            }

            stars3D.push({
                x: (Math.random() - 0.5) * warpCanvas.width * 2,
                y: (Math.random() - 0.5) * warpCanvas.height * 2,
                z: Math.random() * warpCanvas.width,
                pz: 0,
                color: colorType
            });
        }
    }

    function handlePointer(e) {
        mouseX = e.clientX;
        mouseY = e.clientY;

        if (prevMouseX > 0 && prevMouseY > 0) {
            const dist = Math.hypot(mouseX - prevMouseX, mouseY - prevMouseY);
            const steps = Math.min(Math.max(Math.floor(dist / 3), 1), 14);

            for (let s = 0; s <= steps; s++) {
                const t = s / steps;
                const px = prevMouseX + (mouseX - prevMouseX) * t;
                const py = prevMouseY + (mouseY - prevMouseY) * t;

                const isBluePlasma = Math.random() < 0.45;

                flameDots.push({
                    x: px + (Math.random() - 0.5) * 3,
                    y: py + (Math.random() - 0.5) * 3,
                    vx: (Math.random() - 0.5) * 0.7,
                    vy: (Math.random() - 0.5) * 0.7,
                    size: Math.random() * 2.8 + 1.6,
                    alpha: 1.0,
                    decay: Math.random() * 0.035 + 0.022,
                    isBlue: isBluePlasma
                });
            }
        }
        prevMouseX = mouseX;
        prevMouseY = mouseY;
    }

    window.addEventListener("pointermove", handlePointer, { passive: true });
    window.addEventListener("mousemove", handlePointer, { passive: true });

    window.addEventListener("scroll", () => {
        const curY = window.scrollY;
        const delta = curY - lastScrollY;
        targetWindY = Math.min(Math.max(-delta * 0.25, -12), 12);
        targetSpeed = baseSpeed + Math.min(Math.abs(delta) * 0.3, 12);
        lastScrollY = curY;
    }, { passive: true });

    window.addEventListener("resize", resizeCanvases);
    window.addEventListener("orientationchange", resizeCanvases);
    resizeCanvases();

    let lastTime = performance.now();

    function renderEngine(now) {
        const dt = Math.min((now - lastTime) / 16.67, 2.0);
        lastTime = now;

        warpCtx.fillStyle = "rgba(0, 2, 10, 0.35)";
        warpCtx.fillRect(0, 0, warpCanvas.width, warpCanvas.height);

        currentSpeed += (targetSpeed - currentSpeed) * 0.08;
        targetSpeed += (baseSpeed - targetSpeed) * 0.04;

        const cx = warpCanvas.width / 2;
        const cy = warpCanvas.height / 2;

        for (let i = 0; i < stars3D.length; i++) {
            const star = stars3D[i];
            star.pz = star.z;
            star.z -= currentSpeed;

            if (star.z <= 0) {
                star.z = warpCanvas.width;
                star.pz = star.z;
                star.x = (Math.random() - 0.5) * warpCanvas.width * 2;
                star.y = (Math.random() - 0.5) * warpCanvas.height * 2;
            }

            const k = 260 / star.z;
            const px = star.x * k + cx;
            const py = star.y * k + cy;

            const pk = 260 / star.pz;
            const prevX = star.x * pk + cx;
            const prevY = star.y * pk + cy;

            const alpha = Math.min(1, (1 - star.z / warpCanvas.width) * 1.6);

            warpCtx.beginPath();
            warpCtx.moveTo(prevX, prevY);
            warpCtx.lineTo(px, py);
            warpCtx.strokeStyle = `rgba(${star.color}, ${alpha})`;
            warpCtx.lineWidth = Math.max(0.6, (1 - star.z / warpCanvas.width) * 2.0);
            warpCtx.stroke();
        }

        cometCtx.clearRect(0, 0, cometCanvas.width, cometCanvas.height);
        cometCtx.globalCompositeOperation = "lighter";

        currentWindY += (targetWindY - currentWindY) * (0.16 * dt);
        targetWindY *= Math.pow(0.88, dt);

        const windIntensity = Math.abs(currentWindY);

        if (mouseX > 0 && mouseY > 0 && windIntensity > 0.4) {
            const spawnCount = Math.min(Math.floor(windIntensity * 0.35 * dt) + 1, 3);
            for (let i = 0; i < spawnCount; i++) {
                const isBluePlasma = Math.random() < 0.45;
                flameDots.push({
                    x: mouseX + (Math.random() - 0.5) * 3,
                    y: mouseY + (Math.random() - 0.5) * 3,
                    vx: (Math.random() - 0.5) * 0.8,
                    vy: currentWindY * (Math.random() * 0.35 + 0.65),
                    size: Math.random() * 2.6 + 1.4,
                    alpha: 0.95,
                    decay: Math.random() * 0.04 + 0.024,
                    isBlue: isBluePlasma
                });
            }
        }

        for (let i = flameDots.length - 1; i >= 0; i--) {
            const dot = flameDots[i];
            dot.x += dot.vx * dt;
            dot.y += (dot.vy + currentWindY * 0.3) * dt;
            dot.size *= Math.pow(0.955, dt);
            dot.alpha -= dot.decay * dt;

            if (dot.alpha <= 0 || dot.size <= 0.2) {
                flameDots.splice(i, 1);
                continue;
            }

            cometCtx.beginPath();
            cometCtx.arc(dot.x, dot.y, Math.max(0.1, dot.size), 0, Math.PI * 2);

            if (dot.isBlue) {
                cometCtx.fillStyle = `rgba(56, 189, 248, ${dot.alpha * 0.85})`;
            } else {
                cometCtx.fillStyle = `rgba(249, 115, 22, ${dot.alpha * 0.85})`;
            }

            cometCtx.fill();
        }

        if (mouseX > 0 && mouseY > 0) {
            const flareBoost = Math.min(windIntensity * 0.18, 2.5);

            cometCtx.beginPath();
            cometCtx.arc(mouseX, mouseY, 6.5 + flareBoost, 0, Math.PI * 2);
            cometCtx.fillStyle = "rgba(56, 189, 248, 0.25)";
            cometCtx.fill();

            cometCtx.beginPath();
            cometCtx.arc(mouseX, mouseY, 4.8 + flareBoost * 0.5, 0, Math.PI * 2);
            cometCtx.fillStyle = "rgba(251, 146, 60, 0.55)";
            cometCtx.fill();

            cometCtx.beginPath();
            cometCtx.arc(mouseX, mouseY, 3.2, 0, Math.PI * 2);
            cometCtx.fillStyle = "#ffffff";
            cometCtx.fill();
        }

        cometCtx.globalCompositeOperation = "source-over";
        requestAnimationFrame(renderEngine);
    }
    requestAnimationFrame(renderEngine);

    const revealObserver = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.classList.add("visible");
            }
        });
    }, { threshold: 0.08 });

    document.querySelectorAll(".apple-reveal").forEach(el => {
        revealObserver.observe(el);
    });
});