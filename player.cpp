// Includes
# include <iostream>
# include <cmath>
# include <string>
# include <iomanip>
# include "Player.h"

using namespace std;

player::player(string name, int* nextPlayer)
{
	this->userName = name;
	this->next = NULL;
	this->score = 0;
	this->accuracy = 100.00;

}
string player::displayPlayername()
{

	return this -> userName;

}