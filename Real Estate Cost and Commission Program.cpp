// A simple program that outputs a seller's cost and real estate agent's commission.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string lastName = " ";
	double salesPrice = 0;
	const double commission{.06}; // Assuming that a typical seller's cost is 6%.
	const double listingAgent{.015}; // Assuming that a typical agent's commission is 1.5%.
	double sellerCost = 0;
	double agentsCommission = 0;

	cout << "Enter homeowner's last name: ";
	cin >> lastName;

	cout << "Enter the sales price for the house (no commas or decimal points): ";
	cin >> salesPrice;

	sellerCost = commission * salesPrice;
	agentsCommission = listingAgent * salesPrice;

	cout << "\tHome Owner \tPrice of Home \tSeller's Cost \tAgent's Commission" << endl;
	cout << "\t" << left << setw(16) << lastName << "$" << salesPrice << "\t\t$" << sellerCost << "\t\t$" << agentsCommission << endl << endl;

    return 0;
}

