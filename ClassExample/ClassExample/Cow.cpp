#include "Cow.h"

Cow ::Cow(){
weight = 392852930434;
litersOfMilk=49325738958;
speed=.01;

numOfSpots= 327;
age=1001;
loudness=8999;

isBull=false;

name="Frank2.0";
}

Cow::Cow(string newName, double newWeight, int newAge, bool nIsBull)
{
	name = newName;
	weight= newWeight;
	age= newAge;
	isBull=nIsBull;
}

void Cow:: move() 
{
	speed+=.01;
	age++;
	weight-=15;
	cout<< "The cow has moved." << endl;
}

void Cow:: moo() 
{
	cout<<"MOOOOOOOOOOOO!";
	loudness *= 9500;
	weight-=234875;
}
