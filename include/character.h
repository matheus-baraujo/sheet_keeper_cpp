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
    int hp;
    int pb;                                                                   // proeficience bonus
    int scores[6];                                                            // ability scores
    vector<features> racefeatures, classfeatures, subclassfeatures, features; // features
    int ac;                                                                   // armor class                                             
    vector<vector<int>> skillList;                                              // 2d array with skills proeficiences (x,y) - (proef, expert)
    int savingThrows[6];                                                 // character saving throws
    vector<spells> spellsKnown, spellsPrepared;                               // list of spell knows and prepared spells                          
    

public:
    character(){
        character::nome = "Untitled";
        character::race = "";
        character::hp = 0;
        character::skillList(18, vector<int>(2));
    }

    ~character(){}
    

    void set_nome(string nome){
        character::nome = nome;
    }
    string get_nome(){
        return character::nome;
    }  

    vector<vector<int>> get_skillList(){
        return character::skillList;
    }




};
