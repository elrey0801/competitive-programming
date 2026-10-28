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

string solve() {
    int n; cin >> n;
    int odd = 0, even = 0;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    if(even % 2 == 0 && odd % 2 == 0) return "YES";
    if((even % 2 != 0 && odd % 2 == 0) || (even % 2 == 0 && odd % 2 != 0)) return "NO";
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; ++i) {
        if(arr[i+1] - arr[i] == 1) return "YES";
    }
    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    return 0;
}