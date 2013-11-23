#include "Taat.hpp"

using namespace std;

vector<int> Taat::andMerge(const vector<int> &list1, const vector<int> &list2) {
  vector<int> andResult;
  int elem1 = 0, elem2 = 0;

  while (elem1 < list1.size() && elem2 < list2.size()) {
    if (list1[elem1] == list2[elem2]) {
	    andResult.push_back(list1[elem1]);
	    ++elem1;
	    ++elem2;
	  } else if (list1[elem1] > list2[elem2]) {
	    ++elem2;
	  } else {
	    ++elem1;
	  }
  }

  return andResult;
}

vector<int> Taat::orMerge(const vector<int> &list1, const vector<int> &list2) {
  vector<int> orResult;
  int elem1 = 0, elem2 = 0;

  while (elem1 < list1.size() || elem2 < list2.size()) {
    //どちらかのリストが終端まで来ている場合の処理
	  if (elem1 >= list1.size() && elem2 < list2.size()) {
	    orResult.push_back(list2[elem2]);
	    ++elem2;
	  } else if (elem1 < list1.size() && elem2 >= list2.size()) {
	    orResult.push_back(list1[elem1]);
	    ++elem1;
	  }

	  if (list1[elem1] == list2[elem2]) {
	    orResult.push_back(list1[elem1]);
	    ++elem1;
	    ++elem2;
	  } else if (list1[elem1] > list2[elem2]) {
	    orResult.push_back(list2[elem2]);
	    ++elem2;
	  } else {
	    orResult.push_back(list1[elem1]);
	    ++elem1;
	  }
  }

  return orResult;
}
