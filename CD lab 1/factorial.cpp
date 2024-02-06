#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;


    cout << "Enter a non-negative integer: ";
    cin >> num;
    if (num < 0) {
        cerr << "Please enter a non-negative integer.\n";
        return 1;
    }


    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " = " << factorial << endl;

    return 0;
}

