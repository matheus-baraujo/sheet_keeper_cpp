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
}