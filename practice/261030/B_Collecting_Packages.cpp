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

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
    if(p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; ++i) {
        pair<int, int> this_pair;
        cin >> this_pair.first >> this_pair.second;
        arr.push_back(this_pair);
    }
    sort(arr.begin(), arr.end(), cmp);
    // check ok
    int last_row = 0, last_col = 0;
    string res = "";
    for(auto &p : arr) {
        // dbg(last_row); dbg(last_col);
        // dbg(p.first); dbg(p.second);
        if(p.first < last_row || p.second < last_col) {
            // dbg("Break");
            cout << "NO" << '\n';
            return;
        }
        // while(last_row++ < p.first) res += "R";
        // while(last_col++ < p.second) res += "U";
        res += string(p.first - last_row, 'R');
        res += string(p.second - last_col, 'U');
        last_row = p.first; last_col = p.second;
    }
    cout << "YES" << '\n';
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