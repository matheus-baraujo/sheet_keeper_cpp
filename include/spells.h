#include <iostream>
#include <vector>
#include <string>

using namespace std;

class spells{
private:
    string name, castingTime, duration, components, description, school;
    int level;

public:
    spells(){
    }
    ~spells(){
    }

    void set_name (string name){
        name = name;
    }
    string get_name (){
        return name;
    }

    void set_castingTime (string castingTime){
        castingTime = castingTime;
    }
    string get_castingTime(){
        return castingTime;
    }

    void set_duration(string duration){
        duration = duration;
    }
    string get_duration(){
        return duration;
    }

    void set_components(string components){
        components = components;
    }
    string get_components(){
        return components;
    }

    void set_description(string description){
        description = description;
    }
    string get_description(){
        return description;
    }

    void set_school(string school){
        school = school;
    }
    string get_school(){
        return school;
    }

    void set_level(int level){
        level = level;
    }
    int get_level(){
        return level;
    }

};

