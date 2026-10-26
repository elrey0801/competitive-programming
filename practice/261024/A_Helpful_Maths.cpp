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
    string s; cin >> s;
    stringstream ss(s);
    string token;
    int arr[4];
    arr[1] = arr[2] = arr[3] = 0;
    while(getline(ss, token, '+')) {
        if(token[0] == '1') arr[1]++;
        if(token[0] == '2') arr[2]++;
        if(token[0] == '3') arr[3]++;
    }
    string res = "";
    string ref = "123";
    for(int i = 0; i < 3; ++i) {
        char ch = ref[i];
        for(int j = 0; j < arr[i+1]; ++j) {
            res += ch;
            res += '+';
        }
    }
    res.pop_back();
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