#include "Event.h"


Event::Event()
{

}

void Event::addParticle(const Particle& particle)
{
    particles.push_back(particle);
}


const std::vector<Particle>& Event::getParticles() const
{
    return particles;
}

size_t Event::getNumberofParticles() const
{
    return particles.size();
}