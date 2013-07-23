#include "Cow.h"
void main (){

	Cow bessie = Cow();

	cout<<bessie.age <<endl;
	cout<<bessie.weight << endl;
	
	bessie.move();
	bessie.moo();

	cout << bessie.weight <<endl;
	cout << bessie.age <<endl;
}