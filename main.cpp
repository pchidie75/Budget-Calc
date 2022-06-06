//
//  main.cpp
//  Budget Claculator
//
//  Created by Chidie Otuonye on 8/30/17.
//  Copyright © 2017 Chidie Otuonye. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double monthlyIncome, monthlyRent, monthlyCar, totalExpense, totalRentPercent, totalCarPercent, remainder;
    
    cout << "What is your monthly income? ";
    cin >> monthlyIncome;
    cout << "What is your monthly rent? ";
    cin >> monthlyRent;
    cout << "What is your monthly car payment? ";
    cin >> monthlyCar;
    
    totalExpense = monthlyCar + monthlyRent;
    totalRentPercent = monthlyRent / monthlyIncome * 100;
    totalCarPercent = monthlyCar / monthlyIncome * 100;
    remainder = 100 - (totalRentPercent + totalCarPercent);

    
    cout << "You spend about " << totalRentPercent << "% of your monthly budget on housing. ";
    cout << "You spend about " << totalCarPercent << "% of your monthly budget on automotive. ";
    cout << "You have $" << monthlyIncome - monthlyCar - monthlyRent << " left for other expenses which means that " << remainder << "% remains.";
    
    
    return 0;
}
