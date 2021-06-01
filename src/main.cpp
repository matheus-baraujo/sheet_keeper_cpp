#include <iostream>
#include <vector>
#include <string>
#include "character.h"

	using std::cout;
	using std::cin;
	using std::endl;
	using std::vector;
	using std::string;


int main(int argc, char *argv[])
{

	/*
	string nameTest = "Fey teleportation";
	string typeTest = "Racial feature";
	string description = "asjdanjskldajkf";
	int unlockLevel = 1;
	int numberUses = 3;
	
	features feat (nameTest, typeTest, description, unlockLevel, numberUses);
	
	cout << feat.get_name() << endl;
	cout << feat.get_type() << endl;
	cout << feat.get_description() << endl;
	cout << feat.get_unlock() << endl;
	cout << feat.get_uses() << endl;
	

	vector<vector<int>> skillList = {{1,2,34,5,6},{7,8,9}};
	skillList[0][0] = 35;
	skillList.push_back({1,1});

	cout << skillList[0][0] << endl;
	cout << skillList[2][0] << " " << skillList[2][1] << endl;	
	*/

	character obj1();

	vector<int> teste = obj1.get_skillList();
	for (size_t i = 0; i < teste.size(); i++)
	{
		cout << teste[i] << endl;
	}

}