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

int solve() {
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    if(k == 0) {
        if(arr[0] == 1) return -1;
        else return 1;
    }

    if(k == n) {
        // if(arr[n-1] == 1e9) return -1;
        return arr[n-1];
    }
    if(arr[k] == arr[k-1]) return -1;
    return arr[k-1];

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    return 0;
}