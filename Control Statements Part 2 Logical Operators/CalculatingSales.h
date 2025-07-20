//
//  CalculatingSales.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-07-19.
//
#include <iostream>
#include <iomanip>

using namespace std;

class CalculatingSales {
public:

    double calculateTotalRetailValue(){
        
        while (true){
            
            cout << "Please input the product number sold(enter -1 to quit): ";
            cin >> productNumber;
            
            if (productNumber == -1) break;
            
            cout << endl << "Please input the quantity sold: ";
            cin >> quantitySold;
            
            if(quantitySold == -1) break;
            
            switch (productNumber) {
                case 1:
                    priceOfProduct = 2.98;
                    break;
                case 2:
                    priceOfProduct = 4.50;
                    break;
                case 3:
                    priceOfProduct = 9.98;
                    break;
                case 4:
                    priceOfProduct = 4.49;
                    break;
                case 5:
                    priceOfProduct = 6.87;
                default:
                    priceOfProduct = 0;
            }
            
            retailValue = double(quantitySold) * priceOfProduct;
            cout << endl << "The retail value for this sale is $" << fixed << setprecision(2) << retailValue << endl;
            totalRetailValue += retailValue;
        }
        cout <<"The total retail value for this sale is $" << fixed << setprecision(2) << totalRetailValue << endl;
        return totalRetailValue;
    }
private:
    int productNumber=0;
    int quantitySold=0;
    double retailValue=0;
    double totalRetailValue=0;
    double priceOfProduct=0;
};

