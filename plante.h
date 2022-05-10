#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include <string>

class Plante {
    private:

        std:: string _plantName;

        int _size;
        int _health;
        int _hydration;
        int _hp;
        int _maturity;
        bool death;
        float _growSpeed;
        bool _fertilization;


    public:

        Plante(std:: string plantName);

        void food(int fertilizer);
        void resize(int cut);
        void watering(int water);
        void life();
        int getMaturity();
        void newDay();
        bool death();
        bool fertilization();

        void print();
};


#endif 