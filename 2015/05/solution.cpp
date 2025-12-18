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
  // check is contain vowel
  int totalVowel = 0;

  // check at least one letter that appear twice
  bool isAppearTwice = false;
  
  // check not contain next each other  
  bool isNextEachOther = false;

  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      totalVowel ++; 
    }
    
    if (i > 0 && s[i] == s[i - 1]) {
      isAppearTwice = true;
    }
    
    if (i > 0) {
      string ss = s.substr(i - 1, 2);
      if (ss == "ab" || ss == "cd" || ss == "pq" || ss == "xy") {
        isNextEachOther = true;
      }
    }
  }

  return totalVowel >= 3 && isAppearTwice && !isNextEachOther;
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















