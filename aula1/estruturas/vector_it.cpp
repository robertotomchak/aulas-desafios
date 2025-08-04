#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> xs;
	// xs = 0, 1, 2, ..., 9
	for (int i = 0; i < 10; i++) xs.push_back(i);

	// deletando xs[2]
	xs.erase(xs.begin() + 2);

	for (auto x : xs) { cout << x << " "; } cout << "\n";

	// inserindo -1 em xs[4]
	xs.insert(xs.begin() + 4, -1);
	// deletando xs[0], xs[1] e xs[2]
	xs.erase(xs.begin(), xs.begin()+3);

	// iterando nos elementos com iteradores
	for (auto it = xs.begin(); it != xs.end(); it++)
		cout << *it << ' ';
	cout << "\n";
}
