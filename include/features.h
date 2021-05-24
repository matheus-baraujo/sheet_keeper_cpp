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
        features::name = name;
        features::type = type;
        features::description = description;
        features::levelUnlock = levelUnlock;
        features::numberUses = numberUses;
    }
    ~features(){}

    void set_name(string name){
        features::name = name;
    }
    string get_name(){
        return features::name;
    }

    void set_type(string type){
        features::type = type;
    }
    string get_type(){
        return features::type;
    }

    void set_description(string description){
        features::description = description;
    }
    string get_description(){
        return features::description;
    }

    void set_unlock(int levelUnlock){
        features::levelUnlock = levelUnlock;
    }
    int get_unlock(){
        return features::levelUnlock;
    }

    void set_uses(int uses){
        features::numberUses = uses;
    }
    int get_uses(){
        return features::numberUses;
    }

};
