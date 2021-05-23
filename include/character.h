#include <iostream>
#include <vector>
#include <string>
#include "features.h"
#include "skills.h"
#include "spells.h"

using namespace std;

class character{
private:
    string nome, classe, race;                                                // characters name, class name, race name
    int level, pb;                                                            // character level and proeficience bonus
    int strenght, dexterity, constitution, intelligence, wisdom, charisma;    // ability scores
    vector<features> racefeatures, classfeatures, subclassfeatures, features; // features
    int ac;                                                                   // armor class
    vector<skills> skillList;                                                 // array with skills proeficiences (0 - not proef, 1 - proef, 2 - expertise)
    vector<spells> spellsKnown, spellsPrepared;                             

public:
    character(/* args */){

    }

    ~character(){

    }
    

    void set_nome(string nome){
        nome = nome;
    }
    string get_nome(){
        return nome;
    }  



};
