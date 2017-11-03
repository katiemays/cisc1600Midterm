// Katie Mays
// Oct. 26, 2017
// Lab Exam #2: shape draw

#include <iostream>
using namespace std;

int main()
{
	//variables
	int side;
	char x;

	//input
	cout << "Please specify a side length:" << endl;
	cin  >> side;	
	
	cout << "Please specify a character:" << endl;
	cin  >> x;

	//processing
	
	
	//output
	cout << "Here is a square of " << x << "'s with a side length " << side << ":" << endl;
	
	while (side > 0)
	{
		cout << x;
		side --;
			
			while (side > 0)
			{
				cout << x;
				side--;

			}
	
	}
	
	return 0;
}
