#include "Taat.hpp"

using namespace std;

bool asc(const vector<int>& left, const vector<int>& right) {
  return left.size() < right.size();
}

bool desc(const vector<int>& left, const vector<int>& right) {
  return left.size() > right.size();
}

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

vector<int> Taat::andMerge(vector< vector<int> > &vec_list) {
  vector<int> andResult = vec_list[0];
  sort(vec_list.begin(), vec_list.end(), asc);

  for (int i = 1; i < vec_list.size(); ++i) {
    andResult = andMerge(andResult, vec_list[i]);
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
	  continue;
	} else if (elem1 < list1.size() && elem2 >= list2.size()) {
	  orResult.push_back(list1[elem1]);
	  ++elem1;
	  continue;
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

vector<int> Taat::orMerge(vector< vector<int> > &vec_list) {
  vector<int> orResult = vec_list[0];
  sort(vec_list.begin(), vec_list.end(), asc);

  for (int i = 1; i < vec_list.size(); ++i) {
    orResult = orMerge(orResult, vec_list[i]);
  }

  return orResult;
}
