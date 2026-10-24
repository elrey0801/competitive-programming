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
    vector<int> table(101, 0);
    bool is_ok;
    // vector<bool> table_truth(101, true);
    int n, k; cin >> n >> k;
    int num;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        table[num]++;
    }
    int left_over = 0;
    for(int i = 0; i < 101; ++i) {
        if(table[i] == 0) {
            cout << i << '\n';
            return;
        }
        left_over += table[i] - k;
        if(left_over < 0) {
            cout << i << '\n';
            return;
        }

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