#include <iostream>
#include <vector>
#include <algorithm>

class Taat {
public:
  Taat() {};
  ~Taat() {};

  std::vector<int> andMerge(const std::vector<int> &list1, const std::vector<int> &list2);
  std::vector<int> andMerge(std::vector< std::vector<int> > &vec_list);
  std::vector<int> orMerge(const std::vector<int> &list1, const std::vector<int> &list2);
  std::vector<int> orMerge(std::vector< std::vector<int> > &vec_list);
};
