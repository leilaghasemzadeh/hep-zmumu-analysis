#include <cmath>
#include "Physics.h"

double calculateInvariantMass(

    double energy, 
    double px,
    double py,
    double pz

)
{
    double pSquared = px * px + 
                      py * py +
                      pz * pz ;
                
    
    double massSquared = energy * energy -pSquared ;
    
    if (massSquared < 0)
    {
        return 0.0;
    }
    
    return std::sqrt(massSquared);
}

double calculateInvariantMass(
    const Particle& p1,
    const Particle& p2
)
{
    double totalEnergy = p1.getEnergy() + p2.getEnergy();
    double totalPx     = p1.getPx()     + p2.getPx();
    double totalPy     = p1.getPy()     + p2.getPy();
    double totalPz     = p1.getPz()     + p2.getPz();

    return calculateInvariantMass(
        totalEnergy,
        totalPx,
        totalPy,
        totalPz

    );

}