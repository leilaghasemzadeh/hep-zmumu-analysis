#include <iostream>
#include "Particle.h"
#include "Physics.h"
#include "Event.h"


int main(){

    std::cout <<"====================" << std::endl;
    std::cout <<"HEP Z→μμ Analysis" << std::endl;
    std::cout <<"Modern C++ / ROOT Framework" << std::endl;
    std::cout <<"Initializing Analysis..." << std::endl;
    std::cout <<"====================" << std::endl;
    
    Particle muon1("Muon" , 105.66 , -1 , 500.0 , 120.0 , 100.0 , 75.5);
    muon1.PrintInfo();

    std::cout << "Current Name : "
              << muon1.getName()
              <<std::endl;


    muon1.setName("Negative Muon");
    
    std::cout << "New Name : "
               << muon1.getName()
               << std::endl;
              
    std::cout << "Muon Mass = " 
    << muon1.getMass()
    << std::endl;

    std::cout <<"Muon Charge = "
    << muon1.getCharge()
    << std::endl;

    std::cout << "Muon Energy = "
    << muon1.getEnergy()
    << std::endl;

    std::cout << "Muon Px = "
    << muon1.getPx()
    << std::endl;

    std::cout << "Muon Py = "
    << muon1.getPy()
    << std::endl;

    std::cout << "Muon Pz = "
    << muon1.getPz()
    <<std::endl;

    std::cout << "Muon Momentum = "
    << muon1.getMomentum()
    << std::endl;

    std::cout << "Muon Pt = "
    << muon1.getPt()
    << std::endl;

    std::cout << "Muon Phi = "
    << muon1.getPhi()
    << std::endl; 

    std::cout << "Muon Eta = "
    << muon1.getEta()
    << std::endl;

    Particle muon2(
    "AntiMuon" , 
    105.66,
    +1,
    450.5,
    -80.0,
    60.0,
    -120.0
);

double totalEnergy = muon1.getEnergy() + muon2.getEnergy();
double totalPx = muon1.getPx() + muon2.getPx();
double totalPy = muon1.getPy() + muon2.getPy();
double totalPz = muon1.getPz() + muon2.getPz();

double invariantMass = 
calculateInvariantMass(
    totalEnergy , 
    totalPx,
    totalPy,
    totalPz
);

std::cout << "Invariant Mass = "
          << invariantMass
          << std::endl;


Event event;

event.addParticle(muon1);
event.addParticle(muon2);

std::cout << "Number of particles in event = "
          << event.getNumberofParticles()
          << std::endl;


    return 0;
}



