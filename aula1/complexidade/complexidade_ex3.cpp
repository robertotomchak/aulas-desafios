#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int v[n];

	// enunciado garante que está ordenado
	for (int i = 0; i < n; i++)
		cin >> v[i];

	// busca binária
	int l = 0, r = n - 1;
	int pos = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (v[m] == x) {
			pos = m;
			break;
		}
		if (v[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	
	cout << pos << "\n";
}
