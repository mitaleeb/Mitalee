#include <iostream>
#include <string>
using namespace std;

void main ()
{
	//Initializing Integers
	int x;
	int y; 
	char ans;
	char repeat;

	do {
	//Entering Integers from user input
	cout<< "Please enter an integer: \n";
	cin>>x ;
	cout<< "Please enter another integer: \n";
	cin>>y ;

	//system("PAUSE");
	//Asking for operation
	cout<< "What Operation would you like to use: D for Division \n M for Multiplication \n A for Addition \n S for Subtraction \n";
	cin>>ans;
	

	

		if (ans=='a' || ans=='A')
		{
		int add= x+y;
		cout<< "Your answer is:  "<< add;
		cout<< endl;
		system("PAUSE");
		}

		else if (ans=='s' || ans=='S'){
		int subtract= x-y;
		cout<< "Your answer is:  "<< subtract;
		cout<< endl;
		system("PAUSE");
		}

		else if (ans=='m' || ans=='M') {
			int multiply= x*y;
		cout<< "Your answer is: "<< multiply;
		cout<< endl;
		system("PAUSE");
		}

		else if (ans=='d' || ans=='D') {
			int divide= x*y;
		cout<< "Your answer is:"<< divide;
		cout<< endl;
		system("PAUSE");
		}

		else {
			cout<< "Sorry you entered an invalid operator" ;
			system("PAUSE");
		}

cout<< "Would you like to play again? \n Y for Yes \n N for no \n";
system("PAUSE");
cin>>repeat;



}
while (repeat=='Y' || repeat=='y');

}