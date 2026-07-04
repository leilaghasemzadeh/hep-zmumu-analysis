#include <iostream>
#include "Particle.h"
#include <cmath>

Particle::Particle()
    : name(""),
      mass(0.0),
      charge(0),
      energy(0.0),
      px(0.0),
      py(0.0),
      pz(0.0)
{
    std::cout <<"Default Constructor called  " << std::endl;
}


Particle::Particle( std::string nameValue,
                    double massValue,
                    int chargeValue,
                    double energyValue,
                    double pxValue,
                    double pyValue,
                    double pzValue)
    : name(nameValue), 
      mass(massValue),
      charge(chargeValue),
      energy(energyValue),
      px(pxValue),
      py(pyValue),
      pz(pzValue)
{ 

    std::cout << "Parametrized Constructor Called!" << std::endl;
}


void Particle::PrintInfo()
{
    std::cout << "Particle Name : " << name << std::endl;
    std::cout << "Mass : " << mass << std::endl;
    std::cout << "Charge : " << charge << std::endl;
    std::cout << "Energy : " << energy << std::endl;
    std::cout << "Px : " << px << std::endl;
    std::cout << "Py : " << py << std::endl;
    std::cout << "Pz : " << pz << std::endl;
}


void Particle::setName(std::string newName)
 {
    name = newName;
 }
 std::string Particle::getName() const
 {
    return name;
 }

void Particle::setMass(double newMass)
{
    mass = newMass;
}
double Particle::getMass() const
{
    return mass;
} 

void Particle::setEnergy(double newEnergy)
{
    energy = newEnergy;
}
double Particle::getEnergy() const
{
    return energy;
}

int Particle::getCharge() const
{
    return charge;
}

void Particle::setPx(double newPx)
{
    px = newPx;
}
double Particle::getPx() const
{
    return px;
}

void Particle::setPy(double newPy)
{
    py = newPy;
}
double Particle::getPy() const
{
    return py;
}

void Particle::setPz(double newPz)
{
    pz = newPz;
}
double Particle::getPz()const
{
    return pz;
}

double Particle::getMomentum() const
{
    return std::sqrt(
        px *px +
        py *py +
        pz * pz
    );
}