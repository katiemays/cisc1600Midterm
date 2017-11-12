// Katie Mays
// November 12, 2017
// Midterm Extra Credit 2: reverse words and phrases

#include <iostream>
using namespace std;

int main()
{
	// variables
	string phrase;
	
	// input
	cout << "Enter your sentence, word, or phrase: \n";
	getline(cin, phrase);
	
	// processing
	for (int i = 0; i < phrase.length(); i++)
	{
		for (int j = phrase.length() - 1; j >= 0; j--)
		{
			cout << phrase.at(j);
		}
	}
	return 0;
}

