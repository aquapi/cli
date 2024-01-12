#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string cmd;

int main(int argc, char **argv) {
  if (argc != 2)
    throw invalid_argument("");

  cmd = argv[1];
  cout << "Running " + cmd + ".cpp\n";

  system(("g++ " + cmd + ".cpp -o " + cmd + "&&./" + cmd).c_str());

  return 0;
}
