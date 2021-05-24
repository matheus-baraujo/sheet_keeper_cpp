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
	
	features Obj (nameTest, typeTest, description, unlockLevel, numberUses);
	
	cout << Obj.get_name() << " ";
	cout << Obj.get_type() << " ";
	cout << Obj.get_description() << " ";
	cout << Obj.get_unlock() << " ";
	cout << Obj.get_uses() << " ";

}