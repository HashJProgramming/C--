#include <iostream>
using namespace std;

int main() {
    int numbers[10] = {12, 56, 58, 22, 10, 30, 4, 7, 8, 5};
    
    cout << "The numbers are: ";
    for (const int &n : numbers) {
        cout << n << "  ";

    }
    
    return 0;
}