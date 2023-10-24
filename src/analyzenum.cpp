#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

using i64 = long long;
vector<i64> st, ed;

int main(int argc, char **argv) {
  if (argc != 2)
    return 0;

  i64 res = stoll(string(argv[1])), i, sq;
  sq = sqrt(res);

  for (i = 1; i <= sq; ++i) {
    if (res % i)
      continue;

    st.push_back(i);

    if (res / i == i)
      continue;

    ed.push_back(res / i);
  }

  auto stSt = st.begin(), edSt = st.end();
  while (stSt != edSt) {
    cout << *stSt << ' ';
    ++stSt;
  }

  auto stEd = ed.rbegin(), edEd = ed.rend();
  while (stEd != edEd) {
    cout << *stEd << ' ';
    ++stEd;
  }

  cout << '\n';
}
