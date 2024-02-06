#include <iostream>
using namespace std;

bool isNumeric(const string& input) {
    for (char c : input) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string userInput;


    cout << "Enter a number: ";
    cin >> userInput;


    if (isNumeric(userInput)) {
      cout << "The input is numeric." << endl;
    } else {
      cout << "The input is not numeric." << endl;
    }

    return 0;
}
