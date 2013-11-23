#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

class Util {
public:
  static std::vector<int> fileReader(const std::string &file);
  static void showArray(const std::string &name, const std::vector<int> &list);
};
