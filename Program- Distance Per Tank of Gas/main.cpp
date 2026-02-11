#include <iostream>
using namespace std;

int main() 
{

	const double TANK_SIZE = 20.0;
	const double MPG_TOWN = 23.5;
	const double MPG_HIGHWAY = 28.9;

	int distance_town = TANK_SIZE * MPG_TOWN;
	int distance_highway = TANK_SIZE * MPG_HIGHWAY;
		cout << "Distance per single tank of gas in town: " << distance_town << " miles" << endl;
		cout << "Distance per single tank of gas on the highway: " << distance_highway << " miles" << endl;

}