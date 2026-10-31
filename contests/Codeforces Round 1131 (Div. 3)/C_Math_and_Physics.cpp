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
    int n; cin >> n;
    vector<int> arr(n);
    int asum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        asum += arr[i];
    }
    if(asum == n) return -1;
    if(asum - arr[0] - arr[n - 1] == n - 2) return asum - n + 1;
    return asum - 1;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) cout << solve() << '\n';
    return 0;
}