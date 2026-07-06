#include <iostream>
#include "Particle.h"


int main(){

    std::cout <<"====================" << std::endl;
    std::cout <<"HEP Z→μμ Analysis" << std::endl;
    std::cout <<"Modern C++ / ROOT Framework" << std::endl;
    std::cout <<"Initializing Analysis..." << std::endl;
    std::cout <<"====================" << std::endl;
    
    Particle muon("Muon" , 105.66 , -1 , 500.0 , 120.0 , 100.0 , 75.5);
    muon.PrintInfo();

    std::cout << "Current Name : "
              << muon.getName()
              <<std::endl;


    muon.setName("Negative Muon");
    
    std::cout << "New Name : "
               << muon.getName()
               << std::endl;
              
    std::cout << "Muon Mass = " 
    << muon.getMass()
    << std::endl;

    std::cout <<"Muon Charge = "
    << muon.getCharge()
    << std::endl;

    std::cout << "Muon Energy = "
    << muon.getEnergy()
    << std::endl;

    std::cout << "Muon Px = "
    << muon.getPx()
    << std::endl;

    std::cout << "Muon Py = "
    << muon.getPy()
    << std::endl;

    std::cout << "Muon Pz = "
    << muon.getPz()
    <<std::endl;

    std::cout << "Muon Momentum = "
    << muon.getMomentum()
    << std::endl;

    std::cout << "Muon Pt = "
    << muon.getPt()
    << std::endl;

    std::cout << "Muon Phi = "
    << muon.getPhi()
    << std::endl; 

    std::cout << "Muon Eta = "
    << muon.getEta()
    << std::endl;


    return 0;
}

