#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) {
        if (i) os << ", ";
        os << v[i];
    }
    return os << "]";
}
#define dbg(x) cerr << "[" << #x << "] = " << (x) << endl
#else
#define dbg(x) ((void)0)
#endif

void solve() {
    int k; cin >> k;
    int res_tree = -1;
    int res_node = -1;

    for(int t = 1; t <= k; ++t) {
        int n; cin >> n;

        vector<vector<int>> adj(n + 1);
        for(int i = 0; i < n - 1; ++i) {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if(res_tree != -1 || n == 1) continue;

        for(int i = 1; i <= n; ++i) {
            if(adj[i].size() == 1) {
                res_tree = t;
                res_node = adj[i][0];
                break;
            }
        }
    }

    if(res_tree == -1) {
        for(int i = 2; i <= k; ++i)
            cout << i << " 1 1 1\n";
    } else {
        for(int i = 1; i <= k; ++i)
            if(i != res_tree)
                cout << i << " 1 " << res_tree << " " << res_node << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}