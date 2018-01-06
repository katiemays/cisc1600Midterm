// Katie Mays
// Nov. 16, 2017
// Midterm Extra Credit 2: reverse string

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	// vars
	int i = 0;
	string phrase;
	char repeat;
		
	// greeting
	cout << "Welcome to Reverse-the-Words!" << endl;

	// repeat loop
	do{
		// input
		cout << "Enter your sentence, word or phrase: \n";
		getline (cin, phrase);

		// processing
		istringstream iss(phrase);
		string word;

		while (iss >> word)
		{
			for (i = word.length(); i >= 0; i--)
			{
					cout << word[i] << endl;
			}
		}

		cout << endl;

		// ask to repeat
		cout << "Would you like to reverse something else? \n";
		cin  >> repeat;

	} while (repeat == 'Y' || repeat == 'y');

	cout << "Goodbye!" << endl;

	return 0;
} 
