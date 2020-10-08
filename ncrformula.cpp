#include<iostream>
using namespace std;

int nCr (int n, int r)
{
	if (r == 0 || n == r) // 4C0 = 1, 4C4 = 1
		return 1;
	else
		return nCr (n - 1, r - 1) + nCr (n - 1, r); // Pascal's Triangle
}

int main()
{
  int a = 10, b = 2;
  cout<<nCr(10,2);

  return 0;
}
