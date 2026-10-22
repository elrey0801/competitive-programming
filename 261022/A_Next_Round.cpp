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
    int n, k;
    cin >> n >> k;
    int res = 0, last = -1, num;

    for(int i = 0; i < n; ++i) {
        cin >> num;
        if(num == 0) continue;
        if(res < k) {
            res++;
            last = num;
        } else {
            if(num == last) res++;
        }
        // dbg(num);
        // dbg(res);
    }
    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}