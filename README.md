# HEP Z→μμ in Modern C++

A portfolio-quality High Energy Physics analysis project developed in Modern C++.
---
## Project Goal

The main goal of this project is to learn how a real High Energy Physics analysis is performed using modern software development tools.

This project follows the complete workflow of a particle physics analysis:

- Reading ROOT files
- Event selection
- Muon reconstruction
- Invariant mass cslculation
- Histogram production
- Z boson reconstruction

---

## Technologies

- C++17
- ROOT
- CMake


---

## Roadmap

## Roadmap

- [x] Set up CMake project
- [x] Initialize Git repository
- [x] Create GitHub repository
- [x] Implement Particle class
- [x] Add constructors
- [x] Add getters and setters
- [x] Store momentum components (px, py, pz)
- [x] Calculate total momentum
- [x] Calculate transverse momentum (Pt)
- [x] Calculate azimuthal angle (Phi)
- [x] Create Physics module
- [x] Implement invariant mass calculation
- [ ] Create Event class
- [ ] Represent a Z→μμ candidate
- [ ] Refactor using LorentzVector
- [ ] Read ROOT files
- [ ] Loop over events
- [ ] Fill invariant mass histogram
- [ ] Fit the Z peak

## Current Status

**Current milestone:** Physics Module ✅

Implemented features:

- Particle class
- Kinematic quantities (P, Pt, Phi)
- Invariant mass calculation
- Git + GitHub integration

Next objective:

➡️ Design the Event class