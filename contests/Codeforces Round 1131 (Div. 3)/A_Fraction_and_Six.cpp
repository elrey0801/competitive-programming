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
    int n1, n2; cin >> n1 >> n2;
    string s1, s2; cin >> s1 >> s2;
    vector<int> arr1(26, 0);
    vector<int> arr2(26, 0);
    for(char ch : s1) arr1[ch - 'a']++;
    for(char ch : s2) arr2[ch - 'a']++;
    for(int i = 0; i < 26; ++i) {
        arr1[i] -= arr2[i];
        if(arr1[i] < 0) {
            cout << "NO\n";
            return;
        }
    }
    if(arr1['s'-'a'] != 1 || arr1['i' - 'a'] != 1 || arr1['x' - 'a'] != 1) {
        cout << "NO\n";
        return;
    }
    for(int i = 0; i < 26; ++i) {
        if(i != 's' - 'a' && i != 'i' - 'a' && i != 'x' - 'a') {
            if(arr1[i] != 0) {
                cout << "NO\n"; return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}