#include <iostream>
#include <string>
using namespace std;

int main()
{
	float price;
	string city;
	float total_price;
	
	cout << "What is the item price? ";
	cin >> price;

	cout << endl << "What city? ";
	cin >> city;
	cout << endl;

	if (city == "Olathe") {

		total_price = price + (price*0.065);
		cout << "Total price is: " << total_price;
	}

	else if (city == "OverlandPark") {

		total_price = price + (price*0.0935);
		cout << "Total price is: " << total_price;
	}

	else if (city == "Raytown") {

		total_price = price + (price*0.08225);
		cout << "Total price is: " << total_price;
	}

	else if (city == "Independence") {

		total_price = price + (price*0.07725);
		cout << "Total price is: " << total_price;
	}

	else {

		total_price = price + (price*0.08);
		cout << "Total price is: " << total_price;
	}

	
	while (true);

	return 0;
}
