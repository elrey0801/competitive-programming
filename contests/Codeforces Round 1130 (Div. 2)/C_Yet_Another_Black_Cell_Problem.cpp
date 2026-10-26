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

bool is_good(vector<int>& arr, int& k, int& x) {
    if(arr.size() == 1) return x >= 1;
    vector<int> bad;

    if(arr[1] - arr[0] > k) bad.push_back(arr[0]);
    for(int i = 1; i < arr.size() - 1; ++i)
        if((arr[i+1] - arr[i] > k) && (arr[i] - arr[i-1] > k)) bad.push_back(arr[i]);

    if(arr[arr.size() - 1] - arr[arr.size() - 2] > k) bad.push_back(arr[arr.size() - 1]);
    
    if(bad.size() == 0) return true;

    int bad_num = bad.size();
    for(int i = 0; i < bad.size() - 1; ++i) {
        if(bad[i+1] - bad[i] <= 2*k) {
            bad_num--;
            i++;
        }
    }
    return bad_num <= x;
}

void solve() {
    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int left = 1, right = 1e9, mid;
    while(left < right) {
        mid = (left + right) / 2;
        if(is_good(arr, mid, x))
            right = mid;
        else
            left = mid + 1;
    }
    cout << left << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}