#include <iostream>
using namespace std;

int main()
{
	// declare variables
	int numberOfTests; //number of test scores
	double testScore; //to hold one test score at a time
	double totalScore; // sum of all the tests
	double average;
	char choice; // this variable will be used to repeat the program

	//set up do while  post test loop

	do
	{
		//code will start here
		// ask the user for the number of test scores
		cout << "how many tests did you give ";
		cin >> numberOfTests;

		totalScore = 0;
		//create a loop that starts 0 and ends when the number of tests is reached
		for ( int counter = 0; counter < numberOfTests; counter++ )
		{
			//ak for test score
			cout << "Enter Test Score" << counter + 1 << ": ";
			cin >> testScore;
			totalScore = totalScore + testScore;

		}
		average = totalScore / numberOfTests;
		cout << "Total: " << totalScore << endl;
		cout << "Average:" << average << endl;

		cout << "would you like to try again [y/n]: ";
		cin >> choice;

	}while(choice == 'Y' || choice == 'Y');

	return 0;
}
