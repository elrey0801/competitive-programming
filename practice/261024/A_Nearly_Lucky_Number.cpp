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
    string s;
    cin >> s;
    int num = 0;
    for(char ch : s) {
        if(ch == '4' || ch == '7') num++;
    }
    string s_num = to_string(num);
    bool res = true;
    for(char ch : s_num) {
        if(ch != '4' && ch != '7') {
            res = false;
            break;
        }
    }
    cout << (res ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}