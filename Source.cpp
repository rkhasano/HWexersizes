#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sum = 0;
	bool isDone = false;
	int number;
	char choice;
	while (!isDone) {

		cout << "Enter a number: ";
		cin >> number;

		sum = sum + number;
		

		cout << endl;
		cout << "Type (Q) to quit, or (A) to enter another " << endl << "Choice: ";
		cin >> choice;

		cout << endl;
		

		if (choice == 'Q' || choice == 'q') {

			isDone = true;
		                                    }



	                 }

	cout << "The sum is " << sum;

	
	while (true);
	
	return 0;
}