#maininclude <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    a[0] = 0;

    for (int& x : a) {
        cin >> x;
        x--;
    }

    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> dist(n, -1);
    dist[0] = 0;

    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    vector<int> res(k, -1);
    for (int u = 0; u < n; u++) {
        int p = a[u];
        if (dist[u] != -1) {
            res[p] = max(res[p], dist[u]);
        }
    }

    for (int i = 0; i < k; i++) {
        cout << res[i] << ' ';
    }
    cout << endl;
}
