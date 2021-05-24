#include <iostream>
#include <vector>
#include <string>
#include "features.h"
#include "skills.h"
#include "spells.h"

using namespace std;

class character{
private:
    string nome, race;                                                        // characters name, race name
    vector<string> classes;                                                   // character classes
    vector<int> classLevels;                                                  // level of character classes
    int pb;                                                                   // proeficience bonus
    int scores[6];                                                            // ability scores
    vector<features> racefeatures, classfeatures, subclassfeatures, features; // features
    int ac;                                                                   // armor class
    vector<skills> skillList;                                                 // array with skills proeficiences (0 - not proef, 1 - proef, 2 - expertise)
    vector<spells> spellsKnown, spellsPrepared;                               // list of spell knows and prepared spells                          


public:
    character(string nome, vector<string> classe, vector<int> classLevels, string race, int scores[], int ac, int skills[]){
        nome = nome;
        
    }

    ~character(){}
    

    void set_nome(string nome){
        nome = nome;
    }
    string get_nome(){
        return nome;
    }  


};
