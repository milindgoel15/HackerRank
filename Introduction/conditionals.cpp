#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n = 0;
    
    cout <<"Enter your number: ";
    cin >> n;
    
    if (n == 0) {
        cout << "\nThe english word for " << n << " is zero.";
    }
    else if (n == 1) {
        cout << "\nThe english word for " << n << " is one.";
    }
    else if (n == 2) {
        cout << "\nThe english word for " << n << " is two.";
    }
    else if (n == 3) {
        cout << "\nThe english word for " << n << " is three.";
    }
    else if (n == 4) {
        cout << "\nThe english word for " << n << " is four.";
    }
    else if (n == 5) {
        cout << "\nThe english word for " << n << " is five.";
    }
    else if (n == 6) {
        cout << "\nThe english word for " << n << " is six.";
    }
    else if (n == 7) {
        cout << "\nThe english word for " << n << " is seven.";
    }
    else if (n == 8) {
        cout << "\nThe english word for " << n << " is eight.";
    }
    else if (n == 9) {
        cout << "\nThe english word for " << n << " is nine.";
    }
    else {
        cout << "\nThe number is greater than 9.";
    }
}