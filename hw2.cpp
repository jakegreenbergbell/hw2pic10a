
//  Created by Jacob Greenberg-Bell on 1/8/20.
//  Copyright © 2020 Jake Greenberg-Bell. All rights reserved.
//  Calculates for Don Ramon and El Chavo how it will cost to buy items of any currency

//  Takes the number and the currency and splits them with string methods
//  Uses currency and does math to calculate info


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    string object;
    double price;
    string currency;
    double exchangeRate;
    
    cout << "Enter what you would like to buy: ";
    cin >> quantity;
    cin >> object;
    cout << "Enter the price: ";
    cin >> price;
    cin >> currency;
    cout << "Enter the exchange rate (in pesos), 1 " + currency.substr(0,currency.length() - 1) + " = ";
    cin >> exchangeRate;
    int widths = currency.length() + 13;
    
    cout << setw(18) << left <<"Currency exchange:\n";
    cout << setw(widths) << left << currency + "-pesos rate: "
         << setw(widths) << right << setprecision(2) << fixed << exchangeRate << "\n";
    cout << setw(widths) << left << "pesos–" + currency + " rate: "
         << setw(widths) << right << setprecision(2) << fixed << 1.0/exchangeRate << "\n";
    


    
    cout << "Unit prices: \n";
    cout << setw(widths) << left << "In " + currency + ": "
         << setw(widths) << right << setprecision(2) << fixed << static_cast<double>(quantity / price) << "\n";
    cout << setw(widths) << left << "In pesos: " << setw(widths) << right << setprecision(2) << fixed
         << static_cast<double>(quantity / (price * exchangeRate)) << "\n";
         
    return 0;
}
