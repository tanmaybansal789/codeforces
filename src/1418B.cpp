#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> a(n), l(n);
        for (int& x : a)
            cin >> x;
        for (int& x : l)
            cin >> x;

        vector<int> locked, unlocked;
        for (int i = 0; i < n; i++) {
            if (l[i]) {
                locked.push_back(a[i]);
            } else {
                unlocked.push_back(a[i]);
            }
        }
        sort(unlocked.rbegin(), unlocked.rend());

        vector<int> res(n);
        int j = 0, k = 0;
        for (int i = 0; i < n; i++) {
            res[i] = l[i] ? locked[j++] : unlocked[k++];
        }

        for (int x : res)
            cout << x << ' ';
        cout << '\n';

        /* DEBUG
        int max_k = 0;
        int s = 0;
        for (int i = 0; i < n; i++) {
            s += res[i];
            if (s < 0)
                max_k = i + 1;
        }
        cout << "k: " << max_k << '\n';
        */
    }
}