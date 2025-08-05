#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int soma = 0;
		for (int j = 0; j < n; j++)
			soma += i * j;
		cout << soma << " ";
	}
	cout << "\n";
}
