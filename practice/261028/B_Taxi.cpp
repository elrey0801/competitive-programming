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
    int num, res = 0;
    vector<int> arr(5, 0);
    for(int i = 0; i < n; ++i) {
        cin >> num;
        arr[num]++;
    }
    // take 1 and 3
    int min13 = min(arr[1], arr[3]);
    res += min13;
    arr[1] -= min13;
    arr[3] -= min13;
    int min12 = min(arr[1]/2, arr[2]);
    res += min12;
    arr[1] -= min12*2;
    arr[2] -= min12;
    int min22 = arr[2] / 2;
    res += min22;
    arr[2] -= min22 * 2;
    int min11 = arr[1] / 4;
    res += min11;
    arr[1] -= min11 * 4;
    if(arr[1] == 1 && arr[2] == 1) {
        res++;
        arr[1] = 0; arr[2] = 0;
    }
    if(arr[1] > 0) res += 1;
    if(arr[2] > 0) res += 1;
    res += arr[3] + arr[4];
    // if((arr[1] + arr[2] + arr[3] + arr[4]) > 0) res++;
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}