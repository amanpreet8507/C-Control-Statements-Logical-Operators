//
//  BarChart.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-05-13.
//

#include <iostream>

using namespace std;

class BarChart{
public:
    void printBarChart(){
        cout << "Enter 5 numbers between 1 and 30 : ";
        
        for(int i=1; i<=5; i++){
            cin >> inputNum;
            while(inputNum < 1 || inputNum > 30){
                cout << "Please input number between 1 and 30: " << endl;
                cin >>inputNum;
                
            }
            inputNumArr[i] = inputNum;
        }
        
        for(int j=0; j<5; j++){
            for(int k=0; k<inputNumArr[j]; k++){
                cout << "*" ;
            }
            cout<< endl;
        }
        
    }
private:
    int inputNum;
    int inputNumArr[5];
    
};
