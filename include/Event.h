#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include "Particle.h"

class Event
{
    public:
        Event(int include);
        
        void addParticle(const Particle& particle);
        const std::vector<Particle>& getParticles() const;
        size_t getNumberofParticles() const;
        int getEventID() const;

    private:

        int eventID;

        std::vector<Particle> particles;
};

# endif