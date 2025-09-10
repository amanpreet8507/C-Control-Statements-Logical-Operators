//
//  CalculateValueOfPie.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-08-31.
//
#include <iostream>
#include <iomanip>
using namespace std;

class CalculateValueOfPie{
    
public:
    
    void calculatePie(){
        cout << "Term number" << setw(13) << "Approximation of Pie" << endl;
        for ( int  i=1; i<=200'000; i++){
            if(i==1){
                valueToBeDividedBy += 1;
            } else{
                valueToBeDividedBy += 2;
            }
            
            if(i % 2 == 0){
                approximationOfPie = approximationOfPie - (4/valueToBeDividedBy);
            }
            else{
                approximationOfPie = approximationOfPie + (4/valueToBeDividedBy);
                if(approximationOfPie == 3.14159){
                    cout << "Number of term where pie value is 3.14159 is " << i << endl;
                }
            }
      
            
            double rounded = round(approximationOfPie * 100000)/100000.0;
            if(rounded ==  3.14159){
                cout << i << " number of terms used before we first get a value that begins with 3.14159" << endl;
                break;
            }
            
            // printing every 1000 term instead of every each term
            if (i % 1000 == 0)
            // table format
                cout << i << setw(13) << approximationOfPie << endl;
        }
    }
    
private:
    double pieValue{3.14159};
    double valueToBeDividedBy{0.0};
    double approximationOfPie{0.0};
};
