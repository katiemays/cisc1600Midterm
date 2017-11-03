// Katie Mays
// Nov 2, 2017
// GCD of 2 integers

#include <iostream>
using namespace std;

int main()
{
	// variables
	int limit, num1, num2, gcd=0;
	char again;

	do
	{
		// input
		cout << "Enter two numbers to find GCD: ";
		cin  >> num1 >> num2;

		// processing
		if (num1 < num2)
			limit = num1;
		else if (num1 > num2)
			limit = num2;
		else // when they are equal
			limit = num1;
		
		for (int i=1; i <= limit; i++)
		{
			if (((num1 % i) == 0) && ((num2 % i) == 0))
				gcd = i;
		}
		
		// output
		if (gcd != 0)
			cout << "GCD = " << gcd << endl;
		else 
			cout << "No GCD found for " << num1 << " and " << num2 << endl;

		// ask to go again
		cout << "Would you like to go again? Y=Yes N=No: ";
		cin  >> again;
		} while (again == 'Y' || again == 'y');

	return 0;
}
