#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	// ler linha inteira: getline(cin, s);
	cin >> s;
	cout << "Entrada: " << s << "\n";

	// sub_s pega do terceiro caracter até o final
	string sub_s = s.substr(2, s.size() - 2);
	cout << s + sub_s << "\n";
	cout << s[0] << "\n";
}
