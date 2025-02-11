#include <iostream>
using namespace std;

int main() {
    int n, x, rev = 0;

    cout << "Enter the number: ";
    cin >> n;

    while (n != 0) {
        x = n % 10;  // Get the last digit
        n /= 10;     // Remove the last digit
        rev = rev * 10 + x;  // Build the reversed number
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}
