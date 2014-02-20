#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;  

int num_pattern = 0;

//value:元の分数からの差
//denominator:枝分かれした時点で最小の分母
//product:総積

void calc(double value, int a, int &n, double &denominator, double product) {
  if (--n < 0) return;
  
  for (double i = denominator; i*product <= a; ++i) {
    double offset = value - (1/i);

	if (fabs(offset) < 0.00000000000001) {
	  ++num_pattern;
	  continue;
	}

    if (offset > 0) {
	  calc(offset, a, n, i, i*product);
	}
  }
}

void solve(int p, int q, int a, int n) {
  double init_denominator = 2;
  double product = 1;
  double value = (double)p/q;
  calc(value, a, n, init_denominator, product);

  cout << num_pattern << endl;
}

int main() {
  ifstream fin("A.in");

  while (true) {
    int p, q, a, n;
	fin >> p >> q >> a >> n;
	if (p == 0 && q == 0 & a == 0 && n == 0) break;
    solve(p, q, a, n);
  }
  
  return 0;
}
