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

ll solve() {
    int n; cin >> n;
    vector<int> arr_odd, arr_even;
    ll num, res = 0;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        res += num;
        if(i % 2 == 0) arr_even.push_back(num);
        else arr_odd.push_back(num);
    }
    sort(arr_odd.begin(), arr_odd.end());
    sort(arr_even.begin(), arr_even.end());
    ll cur;
    for(int i = 0; i < n/2; ++i) {
        cur = arr_odd[i] + arr_even[i];
        if(cur < 0) {
            res += 2 * abs(cur);
        } 
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) cout << solve() << '\n';
    return 0;
}