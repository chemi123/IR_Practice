#include "Util.hpp"
#include "Taat.hpp"

using namespace std;

int main() {
  Taat taat;
  vector<int> list1 = Util::fileReader("../data/alice.txt");
  vector<int> list2 = Util::fileReader("../data/bob.txt");
  vector<int> andResult = taat.andMerge(list1, list2);
  vector<int> orResult = taat.orMerge(list1, list2);

  Util::showArray("list1", list1);
  Util::showArray("list1", list2);
  Util::showArray("andResult", andResult);
  Util::showArray("orResult", orResult);
  return 0;
}
