#include<iostream>
using namespace std;

// Function to print first n Fibonacci numbers
void Fibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Fibonacci series " << n << " is:\n";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    Fibonacci(n);
    return 0;
}
