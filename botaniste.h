#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include <vector>

class Botanist{

    private:
        
        int _gold = 100;
        int _tired;
        int _plant;
        int _fertilizer;
        std::vector<Plante*> _plantInventory;

    
    public:

    Botanist(std::vector<Plante*> plantInventory);

    void sleep(int temp, Plante * cible);
    void newPlant(Plante * cible);
    void sellingPlant();
    void buyFertilizer();
    void inspectPlant();
    void takeCare();


};



#endif
