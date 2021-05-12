#include <iostream>
using namespace std;

void add(int x, int y) {
 cout << x + y << endl;
}

void subtract(int x, int y) {
  cout << x - y << endl;
}

void multiply(int x, int y) {
  cout << x * y << endl;
}

void divide(int x, int y) {
  cout << x / y << endl;
}

// Hash'J Programming - Simple Calculator
int main() {
    int x;
    int y;
    string op;
    while(true){  
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
        cout << "Enter '+ - * /': ";
        cin >> op;

        if (op == "+") {
            add(x,y);
        }else if (op == "-") {
            subtract(x,y);
        }else if (op == "*") {
            multiply(x,y);
        }else if (op == "/") {
            divide(x,y);
        }else{
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}