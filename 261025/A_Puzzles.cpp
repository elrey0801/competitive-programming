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
    int n, m; cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int index = 0, res = INT_MAX;
    while(index + n - 1 < m) {
        res = min(res, arr[index + n - 1] - arr[index]);
        index++;
    }
        
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}