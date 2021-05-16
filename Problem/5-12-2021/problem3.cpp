#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the size of the arrays: ";
    cin >> x;
    int *numbers = new int[x];
    cout << "Enter the " << x << " number: " << endl;
    for (int i = 0; i < x; ++i) {
        cin >> numbers[i];
    }
    

    cout << "The numbers are: ";

   
    for (int n = 0; n < x; ++n) {
        cout << numbers[n] << "  ";
    }

    return 0;
}