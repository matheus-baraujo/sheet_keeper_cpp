#include <iostream>
#include <vector>
#include <string>

using namespace std;

class spells{
private:
    string name, castingTime, duration, components, description, school;
    int level;

public:
    spells(string name, int level, string castingTime, string duration, string components, string description, string school){
        spells::name = name;
        spells::level = level;
        spells::castingTime = castingTime;
        spells::duration = duration;
        spells::components = components;
        spells::description = description;
        spells::school = school;
    }
    ~spells(){
    }

    void set_name (string name){
        spells::name = name;
    }
    string get_name (){
        return spells::name;
    }

    void set_castingTime (string castingTime){
        spells::castingTime = castingTime;
    }
    string get_castingTime(){
        return spells::castingTime;
    }

    void set_duration(string duration){
        spells::duration = duration;
    }
    string get_duration(){
        return spells::duration;
    }

    void set_components(string components){
        spells::components = components;
    }
    string get_components(){
        return spells::components;
    }

    void set_description(string description){
        spells::description = description;
    }
    string get_description(){
        return spells::description;
    }

    void set_school(string school){
        spells::school = school;
    }
    string get_school(){
        return spells::school;
    }

    void set_level(int level){
        spells::level = level;
    }
    int get_level(){
        return spells::level;
    }

};

