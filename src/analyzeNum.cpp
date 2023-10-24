#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

using i64 = long long;
vector<i64> dv;

int main(int argc, char **argv) {
  if (argc != 2)
    return 0;

  i64 res = stoll(string(argv[1])), i, sq;
  sq = sqrt(res);

  for (i = 1; i <= sq; ++i) {
    if (res % i)
      continue;

    dv.push_back(i);

    if (res / i == i)
      continue;
    dv.push_back(res / i);
  }

  sort(dv.begin(), dv.end());

  for (const auto &item : dv)
    cout << item << ' ';

  cout << '\n';
}
