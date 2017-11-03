// Katie Mays
// Nov 2, 2017
// draw character shape

#include <iostream>
using namespace std;

int main()
{
	// variables
	int side;
	char x;

	// input
	cout << "Specify a side length: ";
	cin  >> side;

	cout << "Specify a character: ";
	cin  >> x;

	// processing
	for (int i = side; i > 0; i--)
	{
	
		for (int i = side; i > 0; i--)
		{
			cout << " " << x << " ";
		}

		cout << endl;
	}

	return 0;
}
