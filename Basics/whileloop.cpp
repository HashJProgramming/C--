#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    
    i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);

    return 0;
}