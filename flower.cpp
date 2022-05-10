#ifndef FLOWER_CPP
#define FLOWER_CPP

#include "plante.h"
#include "flower.h"
#include <iostream>
#include <string>


using namespace std;

Flower::Plante (std::string flowerName): _flowerName(nom), _size(5), _health(5), _hydration(5), _hp (10) {}


int Flower::getMaturity()
{
    return _maturity;
}

// permet au jardinier de nourrir la Flower
void Flower :: food (int fertilizer){
    fertilizer = 1;
    _size += fertilizer;
}

//permet au jardinier de tailler la Flower
void Flower :: resize (int cut){
    cut = 2;
    _size -= cut;
    if(_size <4) _health -= 4;
    if(_size <0) _hp = 0;
}


//permet au jardinier d'arroser la Flower
void Flower :: watering (int water){
    water = 2;
    _hydration += water;
    if(_hydration<0) _hp = 0;
    if(_hydration>10) _hp = 0;
}


// permet de définir si la Flower est toujours en vie 
void Flower :: life(){
    if(_health<0) _hp = 0;
}


//renvoie les informations sur la Flower
void Flower::print(){
    std::cout << "La Flower est  " << _plantName << ", elle mesure " << _size << "cm, a une sante de " << _health << "/5, a une hydratation de " << _hydration << "/5 et point de vie de " << _hp<< "/10." << std::endl;
}


//met a jour les valeurs des Flowers
void Flower:: newDay()
{  
    if (_health < 50)
    {
        _growSpeed /=2;
    }
    else if (_health > 85)
    {
        _growSpeed /=2;
    }
    _maturity += 1;
    _size += 1*_growSpeed;
    _hydration -= 25;
    if (_hydration < 0)
    {
        _hydration = 0;
    }
    if (_hydration == 0)
    {
        cout << "La plante a soif." << endl;
        _health -= 40;
        if (_health < 0)
        {
            _health = 0;
        }
    }
    cout << "La plante " << _plantName << " a une sante de " << _health << "%, elle a grandit de " << _growSpeed << " cm." << endl;

    _growSpeed = 1;
    _fertilization = false;
}

//définie si la plante est vivante ou non


//vérifie si la plante a déjà eu de l'engrais ou non
bool Flower::fertilization()
{
    if (!_fertilization)
    {
        _growSpeed *= 2;
    }
    else
    {
        cout << "Vous avez deja donne de l'engrais a cette plante aujourd'hui." << endl;
    }
    
}

bool Flower::fane()
{
    if (_health <= 0 )
    {
        cout << "La fleure "<< _plantName << " est fanée." << endl;
        flowerValue /= 10;
        return true;
    }

    return false;
}


bool Flower::death()
{
    if (_health <= 0 )
    {
        cout << "La fleure "<< _plantName << " est éclose." << endl;
        flowerValue *= 2;
        return true;
    }

    return false;
}
#endif