// Lab 1 - Recursive Fibonacci
#include <iostream>
#include <chrono>
using namespace std;

long long fib(int n) {
    if (n == 0) return 0;   // base case
    if (n == 1) return 1;   // base case
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    auto start = chrono::steady_clock::now();
    cout << "fib(" << n << ") = " << fib(n) << endl;
    auto end = chrono::steady_clock::now();

    cout << "Time: " << chrono::duration<double>(end - start).count() << " s" << endl;
    return 0;
}