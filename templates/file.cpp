#include <iostream>

// Defs
using namespace std;
using lli = long long;
using ull = unsigned long long;
using ld = long double;

#define prepare(file)                                                          \
  if (fopen(file ".inp", "r")) {                                               \
    freopen(file ".inp", "r", stdin);                                          \
    freopen(file ".out", "w", stdout);                                         \
  }

// Constants
constexpr lli N = 1e6, MOD = 1e9 + 7;

// Main solve
void solve() {}

// Preparations
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  prepare("");

  solve();
}
