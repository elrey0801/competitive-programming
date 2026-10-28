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
    int n, l, r; cin >> n >> l >> r;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int left, right, left_res, right_res, mid;
    ll res = 0;
    
    for(int i = 0; i < n - 1; ++i) {
        auto lower = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]);
        auto upper = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]);
        res += upper - lower;
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}