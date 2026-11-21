#include <iostream>
using namespace std;

long long factorialRec(int n) {
    if (n == 0) return 1;
    return n * factorialRec(n - 1);
}

long long factorialIter(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result = result * i;
    return result;
}

int main() {
    int big;
    cout << "Enter a large n: ";
    cin >> big;
    // cout << "iterative finished: " << factorialIter(big) << endl;
    cout << "recursive finished: " << factorialRec(big) << endl;
    return 0;
}