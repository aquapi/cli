#include <iostream>
using namespace std;

#define prepare(file)                                                          \
  freopen(file ".inp", "r", stdin);                                            \
  freopen(file ".out", "w", stdout)

// Solve each test
void solve() {}

// Preparations
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  prepare("");

  int T;
  cin >> T;

  while (T--) {
    solve();
    cout << '\n';
  }
}
