
#include <iostream>
using namespace std;

bool isArithmeticOperator(char input) {

    return (input == '+' || input == '-' || input == '*' || input == '/' || input == '%' || input == '=');
}

int main() {
    string userInput;


    cout << "Enter a string: ";
    cin >> userInput;


    for (char c : userInput) {

        if (isArithmeticOperator(c)) {
            cout << "Operator: " << c <<endl;
        }
    }

    return 0;
}
