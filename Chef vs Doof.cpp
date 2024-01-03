#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int hasEven = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % 2 == 0) {
                hasEven = 1;
            }
        }

        if (hasEven == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
