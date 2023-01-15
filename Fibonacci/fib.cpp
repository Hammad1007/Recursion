#include <iostream>
using namespace std;

// Fibonaccie Series
int Fibonacci(int n) {
    if(n < 2) {
        return n;
    }
    else {
        return Fibonacci(n -1) + Fibonacci(n - 2);
    }
}

// Main driver
int main() {
    int n, res;
    cout << "Enter the number: ";
    cin >> n;
    if(n < 0) {
        return 0;
    }
    else {
        res = Fibonacci(n);
    }
    cout << "The answer is: " << res << "\n";

    return 0;
}
