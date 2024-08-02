//Introductory21.cpp - Displays the average stock price
//Created/revised by Blake Smith on 8/2/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;

	for (int sub = 0; sub < 10; sub += 1)
		total += prices[sub];
	//end for
	average = total / 10;
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function