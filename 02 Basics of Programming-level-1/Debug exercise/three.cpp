/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n value: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        // Printing leading spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Printing stars
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl; // Move to next line
    }

    return 0;
}
