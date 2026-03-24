#include <iostream>6
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int a = 0, b = 1, c;

    if (n == 1) {
        cout << a << endl;
        return 0;
    }

    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
