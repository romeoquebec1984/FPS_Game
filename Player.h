#pragma once

// Includes
# include <iostream>
# include <cmath>
# include <string>
# include <iomanip>


using namespace std;
class player
{
	private:
		string userName;
		int score;
		double accuracy;
		int* next;


	public:
		player(string,int *);
		string displayPlayername();
};






