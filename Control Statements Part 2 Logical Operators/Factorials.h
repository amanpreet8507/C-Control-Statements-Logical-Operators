//
//  Factorials.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-04-25.
//

#include <iostream>
#include <iomanip>

using namespace std;

class Factorials{
    
public:
    void calculateFactorial(){
        long long result=1;
        cout << left << setw(10) << "Number" << setw(20) << "Factorial" << endl;

        for(long i=1; i<=factorial; i++){
            result*=i;
            cout << left << setw(10) << i << setw(20) << result << endl;
        }
    }
    
    
private:
    long long factorial=20;
};
