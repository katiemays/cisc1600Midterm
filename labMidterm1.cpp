// Katie Mays
// Oct. 26, 2017
// Lab Exam #1: GCD program

#include <iostream>
using namespace std;

int main()
{
	//variables
	bool moreProcessing = true;
	int numA, numB, gcd;
	string repeat;

	do
	{
		//input
		cout << "Enter Two Numbers (less than 1000): " << endl;
		cin  >> numA;
		cin  >> numB;	
		
		//processing
		while (gcd > 0)
		{
			//WAS NOT ABLE TO FIND A PROGRAM TO FIND GCD
			gcd--;
		}
		//output
		cout << "The GCD of " << numA << " and " << numB << " is " << gcd << endl;


		cout << "Would you like to go again?" << endl;
		cin  >> repeat;

	} while (repeat == "yes" || repeat == "Yes");
	
	//exit message
	cout << "Have a nice day!" << endl;


	return 0;
}
