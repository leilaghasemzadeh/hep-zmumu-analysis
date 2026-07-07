#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include "Particle.h"

class Event
{
    public:
        Event();
        void addParticle(const Particle& particle);
        const std::vector<Particle>& getParticles() const;
        size_t getNumberofParticles() const;

    private:

        std::vector<Particle> particles;
};

# endif