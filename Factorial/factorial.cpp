#include <iostream>
using namespace std;

// Factorial code
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Main
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num < 0) {
        cout << "Invalid.\n";
        return 0;
    }
    int res = factorial(num);
    cout << "The factorial of " << num << " is: " << res << endl; 
    return 0;
}
