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
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    for(int i = 0; i < s1.length(); ++i) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if(c1 < c2) {
            res = -1;
            break;
        }
        if(c2 < c1) {
            res = 1;
            break;
        }
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