#include <bits/stdc++.h>
using namespace std;

#define INF 987654321    // ou 0x3f3f3f3f
// para long long: 1987654321987654321 ou 0x3f3f3f3f3f3f3f3f


vector<int> coins;       // guarda o valor das moedas
vector<int> res;         // res[i] = resposta do exercício para x = i
vector<bool> calculated;  // se resultado já foi calculado

int rec(int x) {
	// base
	if (x < 0)
		return INF;
	if (x == 0)
		return 0;

	// memoização
	if (calculated[x])
		return res[x];

	// recursão
	int best = INF;
	for (auto c: coins)
		best = min(best, rec(x - c) + 1);

	// salvando resultado
	calculated[x] = 1;
	res[x] = best;
	return best;
}

int main() {
	int n, x;
	cin >> n >> x;
	coins.resize(n);
	res.resize(x+1);
	calculated.resize(x+1, 0);
	for (auto &x: coins)
		cin >> x;

	int min_coins = rec(x);
	if (min_coins >= INF)
		cout << "-1\n";
	else
		cout << min_coins << "\n";
}
