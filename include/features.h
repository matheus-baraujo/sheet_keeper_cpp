#include <iostream>
#include <vector>
#include <string>

using namespace std;

class features{
private:
    string name, type; 
    string description;
    int levelUnlock;
    int numberUses;
public:
    features(string name, string type, string description, int levelUnlock, int numberUses){
        name = name;
        type = type;
        description = description;
        levelUnlock = levelUnlock;
        numberUses = numberUses;
    }
    ~features(){}

    void set_name(string name){
        name = name;
    }
    string get_name(){
        return name;
    }

    void set_type(string type){
        type = type;
    }
    string get_type(){
        return type;
    }

    void set_description(string description){
        description = description;
    }
    string get_description(){
        return description;
    }

    void set_unlock(int levelUnlock){
        levelUnlock = levelUnlock;
    }
    int get_unlock(){
        return levelUnlock;
    }

    void set_uses(int uses){
        numberUses = uses;
    }
    int get_uses(){
        return numberUses;
    }

};
