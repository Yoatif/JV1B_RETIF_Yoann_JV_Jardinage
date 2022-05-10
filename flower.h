#ifndef FLOWER_H
#define FLOWER_H

#include <string>
#include "plante.h"

class Flower : public Plante{
    private:

        std:: string _flowerName;

        int _size;
        int _health;
        int _hydration;
        int _hp;
        int _maturity;
        float _growSpeed;
        bool _fertilization;
        bool fane;
        bool enFleur;
        int flowerValue = 10;

        
    public:

        Flower(std:: string flowerName);

        void food(int fertilizer);
        void resize(int cut);
        void watering(int water);
        void life();
        int getMaturity();
        void newDay();
        bool death();
        bool fertilization();

        void print();
        bool fane();
        bool enFleur();
       

};

#endif