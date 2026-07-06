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
    return std::sqrt(massSquared);
}