#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        int f = 0;
        for (auto &i : m) {
            if (i.second % 2 != 0) {
                f = 1;
                break;
            }
        }
        if (f == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
