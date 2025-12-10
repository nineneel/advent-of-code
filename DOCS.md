# C++ Competitive Programming Template Documentation

## Quick Reference

### Type Definitions
| Macro | Full Type | Usage |
|-------|-----------|-------|
| `ll` | `long long` | For large integers (up to ~9×10¹⁸) |
| `ull` | `unsigned long long` | For non-negative large integers |
| `ld` | `long double` | For high-precision decimals |
| `vi` | `vector<int>` | Dynamic array of integers |
| `vll` | `vector<ll>` | Dynamic array of long longs |
| `pii` | `pair<int, int>` | Pair of integers |
| `pll` | `pair<ll, ll>` | Pair of long longs |

### Utility Macros
| Macro | Expands To | Example |
|-------|------------|---------|
| `pb` | `push_back` | `v.pb(5)` |
| `mp` | `make_pair` | `mp(1, 2)` |
| `fi` | `first` | `p.fi` (access first element of pair) |
| `se` | `second` | `p.se` (access second element of pair) |
| `all(x)` | `x.begin(), x.end()` | `sort(all(v))` |
| `sz(x)` | `(int)x.size()` | `sz(v)` |

### Loop Macros
| Macro | Description | Example |
|-------|-------------|---------|
| `rep(i, a, b)` | Loop from `a` to `b-1` | `rep(i, 0, n)` → i from 0 to n-1 |
| `per(i, a, b)` | Loop from `b-1` to `a` | `per(i, 0, n)` → i from n-1 to 0 |

### Constants
| Constant | Value | Purpose |
|----------|-------|---------|
| `MOD` | 1,000,000,007 | Common modulo for competitive programming |
| `INF` | 0x3f3f3f3f (~1e9) | "Infinity" for int (safe for addition) |
| `LINF` | 0x3f3f3f3f3f3f3f3f (~4e18) | "Infinity" for long long |

## Tips & Tricks

### 1. Fast I/O
```cpp
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
```
- **What it does**: Speeds up `cin`/`cout` significantly
- **Warning**: Don't mix with `scanf`/`printf` after using this
- **When to use**: Always use for competitive programming

### 2. Multiple Test Cases
```cpp
int t;
cin >> t;
while(t--) {
    solve();
}
```
- Uncomment `cin >> t;` when the problem has multiple test cases
- Common pattern: "First line contains T, the number of test cases"

### 3. Using `all()` macro
```cpp
vi v = {3, 1, 4, 1, 5};
sort(all(v));              // Sort entire vector
reverse(all(v));           // Reverse entire vector
int mx = *max_element(all(v));  // Find maximum
```

### 4. Modular Arithmetic
```cpp
ll result = (a + b) % MOD;
ll result = ((a % MOD) * (b % MOD)) % MOD;
ll result = ((a % MOD) - (b % MOD) + MOD) % MOD;  // Subtraction (avoid negative)
```

### 5. Common Patterns

#### Reading Arrays
```cpp
int n;
cin >> n;
vi v(n);
rep(i, 0, n) cin >> v[i];
```

#### 2D Vectors
```cpp
vector<vi> grid(n, vi(m, 0));  // n×m grid initialized to 0
```

#### Pairs with Vectors
```cpp
vector<pii> v;
v.pb(mp(1, 2));
// Or with C++11:
v.pb({1, 2});

// Sorting pairs (sorts by first, then second)
sort(all(v));
```

### 6. Useful STL Functions

#### Sorting
```cpp
sort(all(v));                    // Ascending
sort(all(v), greater<int>());    // Descending
```

#### Binary Search
```cpp
bool found = binary_search(all(v), x);
auto it = lower_bound(all(v), x);  // First >= x
auto it = upper_bound(all(v), x);  // First > x
```

#### Set Operations
```cpp
set<int> s;
s.insert(5);
s.erase(5);
if(s.count(5)) { /* exists */ }
```

#### Map Operations
```cpp
map<int, int> m;
m[key] = value;
if(m.count(key)) { /* exists */ }
```

### 7. Common Algorithms

#### Prefix Sum
```cpp
vi prefix(n + 1, 0);
rep(i, 0, n) prefix[i + 1] = prefix[i] + arr[i];
// Sum from l to r: prefix[r + 1] - prefix[l]
```

#### GCD/LCM
```cpp
ll gcd = __gcd(a, b);
ll lcm = (a / __gcd(a, b)) * b;  // Avoid overflow
```

#### Frequency Count
```cpp
map<int, int> freq;
for(int x : v) freq[x]++;
```

### 8. Debugging Tips
```cpp
#define debug(x) cerr << #x << " = " << x << endl;

// Use cerr for debug output (goes to stderr)
cerr << "Debug: " << variable << endl;
```

### 9. Common Pitfalls
- **Integer Overflow**: Use `ll` when numbers can exceed 2×10⁹
- **Array Size**: For arrays > 10⁶, declare globally or use vectors
- **Modulo with Negative**: Always add MOD before taking modulo in subtraction
- **TLE with endl**: Use `'\n'` instead of `endl` for faster output

### 10. Time Complexity Guide
| n | Max Complexity | Algorithm Examples |
|---|----------------|-------------------|
| n ≤ 10 | O(n!) | Permutations |
| n ≤ 20 | O(2ⁿ) | Bitmask DP |
| n ≤ 500 | O(n³) | Floyd-Warshall |
| n ≤ 5000 | O(n²) | DP, nested loops |
| n ≤ 10⁶ | O(n log n) | Sorting, segment tree |
| n ≤ 10⁸ | O(n) | Linear scan |

## Common Code Snippets

### Prime Check
```cpp
bool isPrime(ll n) {
    if(n < 2) return false;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
```

### Power with Modulo
```cpp
ll power(ll a, ll b, ll mod) {
    ll res = 1;
    while(b > 0) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
```

### DFS Template
```cpp
vector<vi> adj;
vector<bool> visited;

void dfs(int u) {
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}
```

### BFS Template
```cpp
void bfs(int start) {
    queue<int> q;
    vector<bool> visited(n, false);
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v : adj[u]) {
            if(!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
```

## Additional Resources
- **Practice**: LeetCode, Codeforces, AtCoder, Advent of Code
- **Learn**: CP-Algorithms, USACO Guide
- **Books**: Competitive Programming by Halim & Halim

---
*Happy Coding! 🚀*
