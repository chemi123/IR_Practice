#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;  

int num_pattern = 0;

//value:元の分数からの差
//denominator:枝分かれした時点で最小の分母
//product:総積

void calc(double &value, int a, int &n, double &denominator, double product) {
  if (--n < 0) return;
  
  for (double i = denominator; i*product <= a; ++i) {
    value = value - (1/i);

	if (fabs(value) < 0.000001) {
	  ++num_pattern;
	  continue;
	}
  }
}

void solve(int p, int q, int a, int n) {
  double value = p / q;
  calc(value, a, n, 2, 1);

  cout << num_pattern << endl;
}

int main() {
  ifstream fin("A.in");

  while (true) {
    int p, q, a, n;
	fin >> p >> q >> a >> n;
	if (n == 0) break;
  }

  solve(p, q, a, n);
  
  return 0;
}
