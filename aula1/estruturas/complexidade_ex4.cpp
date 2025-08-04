#include <bits/stdc++.h>
using namespace std;

void f(vector<int> v, int i, int x) {
	v[i] = x;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		f(v, i, i);
}






