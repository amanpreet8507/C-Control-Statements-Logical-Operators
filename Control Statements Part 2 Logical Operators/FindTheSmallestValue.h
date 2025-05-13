//
//  FindTheSmallestValue.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-04-24.
//
#include <iostream>

using namespace std;

class FindTheSmallestValue {
public:
    void readNumbers(){
        cout << "How many number you want to compare?(between 1 and 100). ";
        cin >> count;
        if (count > 100 || count <= 0){
            cout << "Please enter a valid number." << endl;
            return ;
        } else{
            cout << "Input " << count << " integers." << endl;
            for(int i=0; i<count; i++){
                cin >> arrayOfNumbers[i];
            }
        }
    }
    
    void findSmallest(){
        if(count < 0){
            cout << "There is no numbers to compare." << endl;
        }
        int smallest = arrayOfNumbers[0];
        for(int i=1; i<count; i++){
            if(arrayOfNumbers[i] < smallest){
                smallest = arrayOfNumbers[i];
            }
        }
        cout << endl << "The smallest number is " << smallest;
    }
    
private:
    int arrayOfNumbers[100];
    int count;
};
