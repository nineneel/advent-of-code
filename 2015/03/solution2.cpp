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
    int xr = 0;
    int yr = 0;
    bool isRobo = 0;
    for (char dir : directions) {
        if (dir == '^') {
            if (isRobo) {
                yr ++;
            } else {
                y ++;
            }
        } else if (dir == 'v') {
            if (isRobo) {
                yr --;
            } else {
                y --;
            }
        } else if (dir == '>') {
            if (isRobo) {
                xr ++;
            } else {
                x ++;
            }
        } else if (dir == '<') {
            if (isRobo) {
                xr --; 
            } else {
                x --;
            }
        }   

        string pos;
        if (isRobo)  {
            pos = to_string(xr) + "x" + to_string(yr);
            isRobo = false;
        } else {
            pos = to_string(x) + "x" + to_string(y);
            isRobo = true;
        }

        cout << pos << endl;
        
        if (!vh[pos]) {
            res ++;
            vh[pos] = true;
        }
    }

    cout << "result: " << res << endl;
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
