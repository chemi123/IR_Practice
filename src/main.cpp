#include "Util.hpp"
#include "Taat.hpp"

//動作の確認に使ってるだけ

using namespace std;

int main() {
  Taat taat;
  vector<int> list1 = Util::fileReader("../data/alice.txt");
  vector<int> list2 = Util::fileReader("../data/bob.txt");
  vector<int> list3 = Util::fileReader("../data/charlie.txt");
  vector<int> list4 = Util::fileReader("../data/dave.txt");
  vector< vector<int> > vec_list;
  vec_list.push_back(list1);
  vec_list.push_back(list2);
  vec_list.push_back(list3);
  vec_list.push_back(list4);
  vector<int> andResult = taat.andMerge(vec_list);
  vector<int> orResult = taat.orMerge(vec_list);

  Util::showArray("list1", list1);
  Util::showArray("list2", list2);
  Util::showArray("list3", list3);
  Util::showArray("list4", list4);
  Util::showArray("andResult", andResult);
  Util::showArray("orResult", orResult);
  return 0;
}
