#include <iostream>
using namespace std;
void myFunction1() {
  cout << "I just got executed!";
}

void myFunction2(string fname) {
  cout << fname << " Refsnes\n";
}
int main() {
    myFunction1();
    myFunction2("Hash");
    myFunction2("Joshua");
    cout << "Hello world" << endl;
    
    return 0;
}