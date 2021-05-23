#include <iostream>
#include <vector>
#include <string>

using namespace std;

class skills{
private:
    string name;                // skill name
    int bonus;                  // skill bonus
    int proficience;            // skill proeficience
    string scoreDepend;         // ability score that influences that skill
public:
    skills(){

    }
    ~skills(){

    }

    void set_name(string name){
        name = name;
    }
    string get_name(){
        return name;
    }

    void set_bonus(int bonus){
        bonus = bonus;
    }
    int get_bonus(){
        return bonus;
    }

    void set_proficience(int proeficience){
        proeficience = proeficience;
    }
    int get_proeficience(){
        return proficience;
    }

    void set_scoreDepend(string scoreDepend){
        scoreDepend = scoreDepend;
    }
    string get_scoreDepend(){
        return scoreDepend;
    }

};

