#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  if (argc != 2)
    throw invalid_argument("");

  char *cur = argv[1];

  while (*cur != 0) {
    cout << *cur << ": " << int(*cur) << '\n';
    ++cur;
  }
}
