#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int position = 1;
        bool isPossible = true;

        for (int j = 0; j < n; j++) {
            a[j] += (j > 0) ? a[j - 1] - k : 0;

            if (a[j] < k) {
                isPossible = false;
                break;
            }

            position++;
        }

        if (isPossible) {
            cout << "YES" << endl;
        } else {
            cout << "NO " << position << endl;
        }
    }

    return 0;
}
