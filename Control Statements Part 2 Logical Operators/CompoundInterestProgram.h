//
//  CompoundInterestProgram.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-05-03.
//

// Fig. 5.6: Interest.cpp & Exercise 5.14
// Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function
using namespace std;

class CompounInterestProgram {
    
public:
    void calculateCompoundInterest(){
        // set floating-point number format
        cout << fixed << setprecision(2);

        cout << "Initial principal: " << principal << endl;

        // display headers
        cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

        // calculate amount on deposit for each of ten years
         for(double rate{0.05}; rate<=0.10; rate+=0.01){
             cout << "    Interest rate:    " << static_cast<int>(rate*100) <<  "%" << endl;
             for (unsigned int year{1}; year <= 10; year++) {
                // calculate amount on deposit at the end of the specified year
                double amount = principal * pow(1.0 + rate, year);

                // display the year and the amount
                cout << setw(4) << year << setw(20) << amount << endl;
             }
         }
    }
  
    
private:
    double principal{1000.00}; // initial amount before interest
    double rate{0.05}; // interest rate
   
};


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
