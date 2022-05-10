#include <iostream>
#include <string>
#include <vector>


#include "plante.cpp"
#include "botaniste.cpp"
#include "flower.cpp"
#include "carnivore.cpp"

#include "plante.h"
#include "botaniste.h"
#include "flower.h"
#include "carnivore.h"

using namespace std;

int main(){
    
    Plante * carrotte = new Plante("carrotte");
    carrotte->print();

    Carnivore * sarracennia = new Carnivore("sarracennia");
    sarracennia->print();

    Flower * tacca = new Flower("Tacca Chantrieri");
    tacca->print();

   

    return 0;
};