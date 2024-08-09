#include <iostream>
using namespace std;

char x;

int main(int argc, char **argv) {
  if (argc != 2)
    throw invalid_argument("");

  while (argc != -1) {
    x = argv[1][argc--];
    cout << x << ": " << int(x) << '\n';
  }
}
