#ifndef PHYSICS_H
#define PHYSICS_H
#include "Particle.h"


double calculateInvariantMass(
    double energy,
    double px,
    double py,
    double pz
);

double calculateInvariantMass(
    const Particle& p1,
    const Particle& p2
);
#endif