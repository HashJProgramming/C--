#include <iostream>
using namespace std;

void login(string x, string y){
    if (x == "username" & y == "password"){ // if x is equal to 'username' and y equal to 'password'
        cout << "You are logged in!"<< endl; // True if the username and password is correct.
    }else{ // False if the username and password is incorrect.
        cout << "Wrong username or password!\nplease try again.";
    }
}


int main() {
    string username, password, signout;
  
    while (true) {
        cout << "Simple Login System" << endl; // Print out
        cout << "Enter Username: ";
        cin >> username; // user input and store the value
        cout << "Enter Password: ";
        cin >> password;  // user input and store the value 
        login(username, password); 
    }
    return 0;
}