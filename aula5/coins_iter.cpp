#include <bits/stdc++.h>
using namespace std;

#define INF 987654321

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> coins(n);            // guarda o valor das moedas
	vector<int> res(x+1);            // res[i] = resposta do exercício para x = i
	for (auto &x: coins)
		cin >> x;

	// base
	res[0] = 0;
	// ordem
	for (int i = 1; i <= x; i++) {
		res[i] = INF;
		for (auto c: coins) {
			// ignorando base do x < 0, já que é INF
			if (i - c >= 0)
				// recursão
				res[i] = min(res[i], res[i-c] + 1);
		}
	}
	if (res[x] >= INF)
		cout << "-1\n";
	else
		cout << res[x] << "\n";
}
