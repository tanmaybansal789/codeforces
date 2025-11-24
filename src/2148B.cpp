#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int lasers = 0;

        while (n-- > 0) {
            int a;
            cin >> a;

            if (y > a) {
                lasers++;
            }
        }

        while (m-- > 0) {
            int b;
            cin >> b;

            if (x > b) {
                lasers++;
            }
        }

        cout << lasers << '\n';
    }
}