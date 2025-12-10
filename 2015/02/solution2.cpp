#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define per(i, a, b) for(int i = (b) - 1; i >= (a); i--)

const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

void solve() {
    ll res = 0;
    while (true) {
        string present;
        cin >> present;
        if (present == "") break;

        int ribbon = 0; // present square feet needed
        size_t firstX = present.find("x");
        size_t lastX = present.rfind("x");

        int l = stoi(present.substr(0, firstX));
        int w = stoi(present.substr(firstX + 1, lastX - firstX - 1));
        int h = stoi(present.substr(lastX + 1));

        ribbon = min(min(l+w, w+h), h+l) * 2;

        ribbon += l*w*h;
        
        res += ribbon;
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases

    while(t--) {
        solve();
    }

    return 0;
}
