#include <iostream>
using namespace std;

// Hash'J Programing - Get Odd Numbers and Even Numbers Using While loop

// Get Odd Number Function
void GetOddNumber(int y){
int remainder;
int x = 1;
cout << "Odd :" << endl;
    while(x <= y) {
       remainder = x % 2; 
       if (remainder == 1) {
           cout << x << " ";
       }
        x++;
    }
}

// Get Even Number Function - Same ra sila atong naas ubos pero diri ga gamit tag 
// If else statement ug do while loop
void GetEvenNumber(int y){
int remainder;       
int x = 1; 
cout << "Even :" << endl;
    while(x <= y) {
       remainder = x % 2; 
       if (remainder == 0) {
           cout << x << " ";
       }
        x++;
    }
}


int main() {
    cout << "Hash'J Programming" << endl;
    
    // // Ge inani naku pag kuha ang odd og even numbers pero manual
    // int x, y;
    // x = 2; 
    // y = x % 2; // Value (1 or 0) - 0 Even | 1 Odd
    // cout << y << endl; // Print out the value

    GetOddNumber(20);
    cout << "\n" << endl;
    GetEvenNumber(20);
    return 0;
}