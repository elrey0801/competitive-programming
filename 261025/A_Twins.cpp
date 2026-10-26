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
    int c_sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        c_sum += arr[i];
    }
    int half = c_sum / 2;
    c_sum = 0;
    sort(arr.begin(), arr.end(), greater<int>());
    // dbg(arr);
    // dbg(half);
    for(int i = 0; i < n; ++i) {
        if(c_sum + arr[i] <= half)
            c_sum += arr[i];
        else {
            cout << i + 1 << '\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}