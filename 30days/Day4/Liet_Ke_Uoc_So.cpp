#include <iostream>

using namespace std;


void Solution (int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}


int main () {
    int n;
    cin >> n;
    Solution (n);
    return 0;
}