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
    // Your solution here
    string directions;
    cin >> directions;

    unordered_map<string, bool> vh = {{"0x0", true}}; // visited house

    int res = 1;
    int x = 0;
    int y = 0;
    for (char dir : directions) {
        
        if (dir == '^') {
            y ++;
        } else if (dir == 'v') {
            y --;
        } else if (dir == '>') {
            x ++;
        } else if (dir == '<') {
            x --;
        }
        
        string pos = to_string(x) + "x" + to_string(y);
        cout << pos << endl;
        if (!vh[pos]) {
            res ++;
            vh[pos] = true;
        }
    }

    cout << "result: " << endl;
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
