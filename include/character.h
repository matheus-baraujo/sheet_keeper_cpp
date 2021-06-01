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
    int maxHp;                                                                // character maxHp
    int currentHp;
    int pb;                                                                   // proeficience bonus
    int scores[6];                                                            // ability scores
    vector<features> racefeatures, classfeatures, subclassfeatures, features; // features
    int ac;                                                                   // armor class                                             
    vector<int> skillList;                                                    // array with 18 skills proeficiences (0, 1, 2) - (non proef,proef, expert)
    vector<int> savingThrows;                                                 // character 6 saving throws
    vector<spells> spellsKnown, spellsPrepared;                               // list of spell knows and prepared spells                          
    

public:
    character(){
    /*    character::nome = "Untitled";
        character::race = "";
        character::maxHp = 0; */
    }

    ~character(){}
    

    void set_nome(string nome){
        character::nome = nome;
    }
    string get_nome(){
        return character::nome;
    }  

    void set_skillList(vector<int> skills){
        character::skillList = skills;
    }
    vector<int> get_skillList(){
        return character::skillList;
    }




};
