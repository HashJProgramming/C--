#include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Nissan", "Toyota", "Mitsubishi", "Suzuki", "Isuzu"};

    cout << "\nThe cars are: ";
    for (string n : cars){
        cout << n << "  ";
        
    }

    return 0;
}