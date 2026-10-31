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
    int q; cin >> q;
    unordered_map<string, string> mmap;
    string s1, s2;
    while(q--) {
        cin >> s1 >> s2;
        if(mmap.find(s1) != mmap.end()) {
            mmap[s2] = mmap[s1];
            mmap.erase(s1);
        } else mmap[s2] = s1;
            
    }
    cout << mmap.size() << '\n';
    for(auto &m : mmap) cout << m.second << " " << m.first << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}