#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string templatePath, sourcePath, line;

// ./create [template] [file]
int main(int argc, char **argv) {
  if (argc != 3)
    throw invalid_argument("");

  templatePath = argv[1];
  templatePath = getenv("HOME") + templatePath;
  templatePath = "/.cli/templates" + templatePath + ".cpp";

  cout << "Using template " << templatePath << '\n';

  sourcePath = argv[2];
  sourcePath += ".cpp";

  cout << "Writing to " << sourcePath;

  freopen(templatePath.c_str(), "r", stdin);
  freopen(sourcePath.c_str(), "w", stdout);

  while (getline(cin, line))
    cout << line << endl;
}
