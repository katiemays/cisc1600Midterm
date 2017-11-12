// Katie Mays
// November 12, 2017
// Midterm Extra Credit 1: finding prime numbers

#include <iostream>
using namespace std;

// prototype
bool primeCheck(int);

int main()
{
	// variables
	int numPrimes, prime;
	string repeat;

	// greeting
	cout << "Welcome to Finding Primes!" << endl;

	// continue until user quits
	do
	{
		// input how many primes
		cout << "How many primes would you like to see? \n";
		cin  >> numPrimes;

		// constraints
		if (numPrimes > 0)
		{
			
			cout << "The first " << numPrimes << " prime numbers are: \n";
			cout << "2 ";
	
			// loop to find primes until equal to numPrimes asked for
			for (int i = 1; i <= numPrimes - 1; i++)
			{
				for (prime = 3; prime < 100; prime ++)
				{
					if (primeCheck(prime) != true)
					{
						cout << prime << " "; 	
					}
				}
			}					
			cout << endl;
		}
		else 
			cout << "I can't search for " << numPrimes << " prime numbers.\n";

		// ask if user would like to repeat
		cout << "Would you like to try again? \n";
		cin  >> repeat;

	} while (repeat == "Yes" || repeat == "yes");
	
	// exit greeting
	cout << "Have a nice day!" << endl;

	return 0;
}

bool primeCheck(int prime)
{
	for (int k = 1; k <= prime; k++)
	{
		if (prime % 2 == 0)
			return false;
		if (prime == k)
			return true;
	}
}
