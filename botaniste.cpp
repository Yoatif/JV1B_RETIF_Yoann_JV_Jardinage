#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "plante.h"
#include "botaniste.h"
#include <iostream>
#include <string>

using namespace std;

//permet au jardinier de récupèrer de l'énergie)
void Botanist:: sleep (int temp = 1, Plante * cible){
    _tired += temp;
    if(_tired = 3) std:: cout << "vous commencer le jour" << temp << std::endl;
    (*cible).food(_fertilizer);
    
}

//permet au jardinier d'acheter une nouvelle plante
void Botanist:: newPlant (Plante * cible){
    _gold -= 15;
    _plant += 1;
}

//permet au jardinier d'acheter des engrais (les engrais c'est le mal vive la perma)
void Botanist:: buyFertilizer(){
    _gold -= 5;
    _fertilizer += 1;
}

//permet au jardinier de vendre les plantes
void Botanist:: sellingPlant(){
    _plant -= 1;
    _gold += 20;
}

#endif