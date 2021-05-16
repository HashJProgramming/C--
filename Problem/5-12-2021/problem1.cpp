#include <iostream>
using namespace std;

int main() {
    int numbers[10] = {12, 56, 58, 22, 10, 30, 4, 7, 8, 5};
    
    cout << "The numbers are: ";
    for (int n : numbers) {
        cout << n << "  ";

    }

   for (int x = 0; x < sizeof(numbers)/sizeof(numbers[0]); x++) {
       cout << numbers[x] << "  ";
   }
    
    return 0;
}