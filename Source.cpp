#include <iostream>
using namespace std;

int main() {

	int feet;

	cout << "Enter the amount of feet: ";
	cin >> feet;

	for (int i = 0; i <= 12*feet; i++) {

		bool notDevisibleByTwelve = i % 12;

		if (notDevisibleByTwelve) {

			cout << "-";

		                         }
		else cout << "|";


	}



	while (true);

	return 0;
}