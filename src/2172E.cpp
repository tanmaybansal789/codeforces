#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int j, k;
        string a, b;
        cin >> a >> j >> k;
        b = a;

        while (j-- > 1)
            next_permutation(a.begin(), a.end());
        while (k-- > 1)
            next_permutation(b.begin(), b.end());


        int A = 0, B = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i])
                A++;
            else
                B++;
        }

        cout << A << 'A' << B << "B\n";
    }
}