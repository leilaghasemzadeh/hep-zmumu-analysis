#ifndef PARTICLE_H
#define PARTICLE_H
#include <string>


class Particle
{
    public:
        Particle(); 
        
        Particle(
            std::string nameValue,
            double massValue,
            int chargeValue,
            double energyValue,
            double pxValue,
            double pyValue,
            double pzValue
            );

        void PrintInfo();
        
        void setName(std::string newName);
        std::string getName() const;

        void setMass(double newMass);
        double getMass() const;

        void setEnergy(double newEnergy);
        double getEnergy() const;    
        
        int getCharge() const;

        void setPx(double newPx);
        double getPx() const;

        void setPy(double newPy);
        double getPy() const;

        void setPz(double newPz);
        double getPz() const;
        
        double getMomentum() const;

        double getPt() const;

        double getPhi() const;

    private:

        std::string name;
        double mass;
        int charge;
        double energy;
        double px;
        double py; 
        double pz;

};


#endif