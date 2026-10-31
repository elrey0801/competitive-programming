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
    ll max_val = -1e9-1, min_val = 1e9+1;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(arr[i] > max_val) max_val = arr[i];
        if(arr[i] < min_val) min_val = arr[i];
    }
    ll op_num = max_val - min_val;
    sort(arr.begin(), arr.end());
    int left = 0, right = n-1;
    ll cost = 0;
    while(left < right) {
        cost += arr[right] - arr[left];
        right--; left++;
    }
    cout << cost << " " << op_num << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}