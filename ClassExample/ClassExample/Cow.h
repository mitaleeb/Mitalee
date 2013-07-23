#include <iostream>;
#include <string>;
using namespace std;


class Cow {
public:

	double weight ;
	double litersOfMilk;
	double speed;

	int numOfSpots;
	int age;
	int loudness;

	bool isBull; 

	string name;

	Cow  (); // Default constructer
	Cow (string newName, double newWeight, int newAge, bool nIsBull);

	void move();
	void moo();

} 