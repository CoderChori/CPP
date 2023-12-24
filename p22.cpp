#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    while (i < n) {
        int stars = n - i;
        while (stars > 0) {
            cout << "*";
            stars--;
        }
       cout << endl;
        i++;
    }
}

/*
5
*****
****
***
**
*
*/
