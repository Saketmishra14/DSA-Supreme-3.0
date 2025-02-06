/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include <iostream>
using namespace std;

int main() {
    int no;
    cin >> no;

    for (int i = 1; i <= no; i++) {
        // Printing spaces
        for (int j = 1; j <= no - i; j++) {
            cout << " ";
        }

        // Printing increasing numbers
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        // Printing decreasing numbers
        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num;
            num--;
        }

        cout << endl;
    }

    return 0;
}
