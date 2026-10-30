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
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int first = 0, last = n-1, cur = 0, res = 0;
    for(int s = 2; s <= 2*n; ++s) {
        first = 0, last = n-1, cur = 0;
        while(first < last) {
            if(arr[first] + arr[last] == s) {
                cur++;
                first++;
                last--;
            } else if(arr[first] + arr[last] < s) first++;
            else last--;
        }
        if(cur > res) res = cur;
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