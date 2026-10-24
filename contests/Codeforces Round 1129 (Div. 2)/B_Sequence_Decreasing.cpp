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
    int n, k; cin >> n;
    bool res = false;
    int min = INT_MAX;
    for(int i = 0; i < n; ++i) {
        cin >> k;
        if(k == 0) res = true;
        if(k < min) min = k;
        // dbg(min);
    }
    // cout << (res ? n : (min < n  ? n : 0)) << '\n';
    if(res || min < n)
        cout << n << '\n';
    else
        cout << 0 << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}