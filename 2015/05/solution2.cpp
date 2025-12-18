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

bool solve(string s) {
  // check at least one letter that appear twice
  bool isContainPair = false;
  unordered_map<string, int> cp = {};
  
  // check not contain next each other  
  bool isContainRepeats = false;

  cout << s << endl;
  for (int i = 1; i < s.size(); i ++) {

    string ss = s.substr(i - 1, 2);
    if (!(i > 1 && s[i] == s[i - 1] && s[i - 1] == s[i - 2]) && i > 2 && s[i] != s[i - 3]) {
      if (cp[ss] == 1) {
        cout << "test 1: " << ss << " " << endl;
        isContainPair = true;
      } else {
        cp[ss] = 1;
      }
    }
    
    if (i > 1 && s[i - 2] == s[i]) {
      isContainRepeats = true;
      cout << "test 2: " << s[i - 2] << s[i - 1] << s[i] << " ";
    }
    cout << endl;
  }

  return isContainPair && isContainRepeats;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int res = 0;
    while(true) {
      string s;
      cin >> s;
      if (s == "") break;
      res += solve(s) ? 1 : 0;
    }

    cout << res << endl;

    return 0;
}















