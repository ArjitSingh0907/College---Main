<div align="center">

# 🌌 ORIGIN '26
### *< / THE BEGINNING OF THE NEXT BIG THING >*

A modern, high-performance static event platform built for **ORIGIN '26** — a 36-hour innovation challenge hosted by **Techniki** (Flagship Tech Club of ASET) at **Amity University Haryana**.

[Event Details](#-about-the-event) • [Key Features](#-key-features) • [Tech Stack](#-tech-stack--architecture) • [Project Structure](#-project-structure) • [Setup & Usage](#-local-setup)

---

</div>

## 🚀 About the Event

**ORIGIN '26** is an intense 36-hour hackathon designed to bridge the gap between academic innovation and real-world industrial challenges. Participants collaborate with corporate partners and mentors to build working prototypes across cutting-edge technology verticals.

* 📅 **Dates:** 23rd September – 25th September
* 📍 **Venue:** Amity University Haryana
* ⚡ **Organizers:** Techniki & Amity School of Engineering & Technology (ASET)

---

## ✨ Key Features & UI Aesthetics

- **Celestial Dark Aesthetic:** Apple-inspired dark visual identity with smooth ambient radial glows and custom typography.
- **Interactive Star Cursor:** Custom cursor with smooth lag/physics that scales and glows on interactive UI elements.
- **Dynamic Starfield Canvas:** Lightweight HTML5 Canvas generating subtle, live twinkling star particles in the background.
- **Modularity & Easy Maintenance:** Decoupled data architecture where all website text, timeline steps, and event details live inside `data.js` for instant updates.
- **Glassmorphic Scaffolding:** Clean frosted-glass cards with subtle 3D tilt effects on mouse movement.

---

## 🛠️ Tech Stack & Architecture

- **HTML5:** Semantic scaffolding for optimal accessibility and performance.
- **CSS3:** Custom properties (variables), Flexbox/Grid, Glassmorphism backdrop filters, and hardware-accelerated animations.
- **Vanilla JavaScript (ES6+):** Physics-driven interactive custom cursor, IntersectionObserver for scroll-reveal animations, and Canvas rendering.
- **Data Configuration Pattern:** Centralized data storage (`data.js`) rendering dynamic HTML content on load.

---

## 📁 Project Structure

```text
Origin-2026/
├── index.html            # Main semantic HTML markup & layout
├── style.css             # Dark celestial styling, Apple UI tokens & responsiveness
├── script.js            # Starfield canvas, lerp cursor physics & dynamic rendering
├── data.js              # Editable JSON-like data config file for event content
└── techniki-logo.png    # High-resolution transparent Techniki brand mark
