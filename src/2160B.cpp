#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> a(n);
        ll last = 0;
        int element = 1;

        for (int i = 0; i < n; i++) {
            ll b;
            cin >> b;

            int increase = static_cast<int>(b - last);
            a[i] = (increase == i + 1)
                   ? element++ : a[i - increase];

            last = b;
        }

        for (int x : a) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}