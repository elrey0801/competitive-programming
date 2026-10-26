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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    vector<bool> mex(n + 1, false);
    int p = n - k + 1;
    int mex_index = 0, pos = -1, mx = 0;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(i < p) {
            mex[arr[i]] = true;
            if(arr[i] > arr[mx]) mx = i;
            if(i == p - 1)
                while(mex[mex_index]) mex_index++;
        } else if (arr[i] == mex_index) {
            pos = i;
        }
    }
    if(mex_index == p) cout << -1 << '\n';
    else cout << mx + 1 << " " << pos + 1 << "\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}