#include <limits>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int min_a = numeric_limits<int>::max(),
            max_a = numeric_limits<int>::min();
        while (n-- > 0) {
            int a;
            cin >> a;
            min_a = min(min_a, a);
            max_a = max(max_a, a);
        }
        int x;
        cin >> x;
        cout << (min_a <= x && x <= max_a ? "YES" : "NO") << '\n';
    }
}