//
//  CalculateProductOfOddNumbers.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-04-24.
//

#include <iostream>

using namespace std;

class CalculateProductOfOddNumbers{
public:
    void calculateProduct(){
        for(int i=1; i<=15; i+=2){
            product = product * i;
        }
        cout << "The product of Odd numbers from 1 to 15 is "<< product << endl;
    }
private:
    int product{1};
};
