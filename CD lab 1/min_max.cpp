#include <iostream>

using namespace std;

int main() {
    int i, n, min, max;

    cout << "Enter size of the array: ";
    cin >> n;
    int a[n];

    cout << "Enter elements in array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    min = max = a[0];
    for (i = 1; i < n; i++) {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }

    cout << "Minimum of array is: " << min << endl;
    cout << "Maximum of array is: " << max << endl;

    return 0;
}

