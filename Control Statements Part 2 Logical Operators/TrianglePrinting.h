//
//  TrianglePrinting.h
//  Control Statements Part 2 Logical Operators
//
//  Created by Amanpreeet Sandhu on 2025-05-03.
//
#include <iostream>

using namespace std;

class TrianglePrinting{
public:
    void printTriangleA(){
        for(int row=1; row<=10; row++){
            for(int col=1; col<=row; col++){
                cout << "*" ;
            }
            cout << endl;
        }
    }
    
    void printTriangleB(){
        for(int row=10; row>0; row--){
            for(int col=1; col<=row; col++){
                cout << "*" ;
            }
            cout << endl;
        }
    }
    
    void printTriangleC(){
        for(int row=0; row<10; row++){
            for(int space=0; space<row; space++){
                cout << " " ;
            }
            for(int col=0; col<10-row; col++){
                cout << "*" ;
            }
            cout << endl;
        }
    }
    
    void printTriangleD(){
        for(int row=1; row<=10; row++){
            for(int space=0;space<10-row;space++){
                cout<<" ";
            }
            for(int col=1; col<=row; col++){
                cout << "*" ;
            }
            cout << endl;
        }
    }
private:
};
