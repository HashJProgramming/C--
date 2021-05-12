#include <iostream>
using namespace std;

int main() {
    int myNum[] = {1,2,3,4,5,6,7,8,9,0};               // Integer (whole number)
    float myFloatNum[] = {1.0f,2.1f,3.2f,4.3f,5.4f};     // Floating point number
    double myDoubleNum[] = {1.0,2.0,3.0,4.0,5.0};   // Floating point number
    char myLetter[] = {'A','B','+','-','*','%','^','$'};         // Character
    bool myBoolean[] = {true,false,true,false,true,false};       // Boolean
    string myText[] = {"Hash","Josh","Ambalong","Joshua","Hashy","HashJ"};     // String

    cout << myNum[1] << endl;
    cout << myFloatNum[2] << endl;
    cout << myDoubleNum[3] << endl;
    cout << myLetter[4] << endl;
    cout << myBoolean[5] << endl;
    cout << myText[3] << endl;
    return 0;
}