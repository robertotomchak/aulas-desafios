#include <bits/stdc++.h>
using namespace std;

int main() {
	// vector de inteiros, de tamanho 3, com valor padrão 5 em tudo
	vector<int> xs (3, 5);

	// iterando nos elementos de xs, por referência
	for (auto& x : xs) {
		cout << x << " ";
		x = 3; 
	}
	cout << "\n";

	// xs agora tem tamanho 5, tudo com 1
	xs.resize(5, 1); 
	// adicionando 10 no final
	xs.push_back(10);

	// iterando usando índices
	for (int i = 0; i < xs.size(); i++)
		cout << xs[i] << " ";
	cout << "\n";

	// tirando último elemento
	xs.pop_back();
	// vendo primeiro e último elemento
	cout << xs.front() << " " << xs.back() << "\n";

	// removendo tudo de xs 
	xs.clear(); 
	cout << "z = " << xs.size() << "\n";

	// alocando matriz 20x15
	vector<vector<int>> matriz (20, vector<int>(15, 5));

	// vetor que usa 15 bits
	vector<bool> b (15);
}
