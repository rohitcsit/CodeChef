#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m = 0;
        cin >> n;
        while (n % 10 == 9) {
            m++;
            n /= 10;
        }
        cout << (m % 2 == 0 ? n + 1 : n + 2) << endl;
    }
    return 0;
}
