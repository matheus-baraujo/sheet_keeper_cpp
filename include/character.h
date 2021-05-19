#include <iostream>
#include <vector>
#include <string>

using namespace std;

class character{
private:
    string nome, classe, race;                                              // nome do personagem, nome da classe, nome da raça
    int level, pb;                                                          // nivel do personagem e bonus de proficiencia
    int strenght, dexterity, constitution, intelligence, wisdom, charisma;  // ability scores
    vector<string> racefeatures, classfeatures, subclassfeatures, features; // features
    int ac;

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
