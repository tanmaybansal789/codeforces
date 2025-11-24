#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

vector<ll> sieve(ll n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    vector<ll> primes;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int q = p * p; q <= n; q += p) {
                is_prime[q] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++) {
        if (is_prime[p]) primes.push_back(p);
    }

    return primes;
}

int main() {
    int t;
    cin >> t;

    vector<ll> primes = sieve(1000);

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (ll& y : a)
            cin >> y;

        for (ll x : primes) {
            if (ranges::any_of(a, [&x](ll y) { return y % x; })) {
                cout << x << '\n';
                break;
            }
        }
    }
}