// Katie Mays
// November 13, 2017
// Midterm Extra Credit 1: finding prime numbers

#include <iostream>
using namespace std;

// prototype
bool primeCheck(int);

int main()
{
	// variables
	int numPrimes;
	string repeat;
		
	// greeting message
	cout << "Welcome to Finding Primes!" << endl;

	do {
		// initializing
		int amIprime = 3; /* start at 3, already know 2 is prime*/

		// input
		cout << "How many primes would you like to see? \n";
		cin  >> numPrimes;
		
		// processing
		if (numPrimes <= 0)
			cout << "I cannot find " << numPrimes << " prime numbers \n";
		if (numPrimes > 0)
			cout << "2 ";
		if (numPrimes > 1)
			while (numPrimes > 1)
			{
				if (primeCheck(amIprime) == true)
				{
					cout << amIprime << " ";
					numPrimes--;
				}
		
				else
					numPrimes -= 0;
					
				amIprime++;
			}	
	
		cout << endl;
	
		// ask user to try again
		cout << "Would you like to try again? \n";
		cin  >> repeat;

	} while (repeat == "Yes" || repeat == "yes");

	// exit message
	cout << "Have a nice day!" << endl;

	return 0;
}

bool primeCheck(int amIprime)
{
	for (int divisor = 3; divisor <= amIprime; divisor++)
	{
		// base case, must be odd
		if (amIprime % 2 == 0)
			return false;
		else if ((amIprime % divisor == 0) && (divisor < amIprime))
			return false;
		else if ((amIprime % divisor == 0) && (divisor == amIprime))
			return true;  
	}

}
