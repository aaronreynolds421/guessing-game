#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int number = rand() % 100 + 1; //randombly generates a number between 1 and 100
	int guess = 0; //initializes guess
	int count = 0; // this will show how many attempts that it took to guess the correct number

	do
	{
		cout << "Please guess a number between 1 and 100." << endl;
		cin >> guess;
		count++;
		
		if (guess > number)
		{
			cout << "Guess is too high." << endl;
		}
		else if (guess < number)
		{
			cout << "Guess is too low." << endl;
		}
		else
		{
			cout << "Correct" << endl;
			cout << "It took you: " << count << "  attempts." << endl;
		}

	} while (number != guess); // continues the loop as long as the guess does not equal the number generated
}