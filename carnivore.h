#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>
#include "plante.h"

class Carnivore : public Plante{
    private:

        std:: string _carniName;

        int _size;
        int _health;
        int _hydration;
        int _hp;
        int _maturity;
        bool death;
        float _growSpeed;
        bool _fertilization;
        bool fly;
        
    public:

        

        Carnivore(std:: string carniName);

        void food(int fertilizer);
        void resize(int cut);
        void watering(int water);
        void life();
        int getMaturity();
        void newDay();
        bool death();
        bool fertilization();

        void print();

        bool fly();
       

};

#endif