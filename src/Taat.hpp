#include <iostream>
#include <vector>

class Taat {
public:
  Taat() {};
  ~Taat() {};

  std::vector<int> andMerge(const std::vector<int> &list1, const std::vector<int> &list2);
  std::vector<int> orMerge(const std::vector<int> &list1, const std::vector<int> &list2);
};
