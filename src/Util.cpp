#include "Util.hpp"

using namespace std;

vector<int> Util::fileReader(const string &file) {
  vector<int> fileContent;
  ifstream ifs(file.c_str());
  string str;

  if (ifs.fail()) {
    cerr << "The file does not exist" << endl;
    exit(1);
  }

  while (getline(ifs, str)) {
    fileContent.push_back(atoi(str.c_str()));
  }

  return fileContent;
}

void Util::showArray(const string &name, const vector<int> &list) {
  for (int i = 0; i < list.size(); ++i) {
    cout << name << "[" << i << "] = " << list[i] << endl;
  }
  cout << endl;
}
