#include <iostream>
#include <vector>
#include <string>

using namespace std;

class skills{
private:
    string name;                // skill name
    int bonus;                  // skill bonus
    int proeficience;            // skill proeficience
    string scoreDepend;         // ability score that influences that skill
public:
    skills(){

    }
    ~skills(){

    }

    void set_name(string name){
        skills::name = name;
    }
    string get_name(){
        return skills::name;
    }

    void set_bonus(int bonus){
        skills::bonus = bonus;
    }
    int get_bonus(){
        return skills::bonus;
    }

    void set_proficience(int proeficience){
        skills::proeficience = proeficience;
    }
    int get_proeficience(){
        return skills::proeficience;
    }

    void set_scoreDepend(string scoreDepend){
        skills::scoreDepend = scoreDepend;
    }
    string get_scoreDepend(){
        return skills::scoreDepend;
    }

};

