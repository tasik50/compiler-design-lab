#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    char firstName[MAX_SIZE], lastName[MAX_SIZE], fullName[MAX_SIZE * 2];

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    // Concatenation
    sprintf(fullName, "%s %s", firstName, lastName);

    cout << "Full name: " << fullName << endl;

    return 0;
}
