#include <bits/stdc++.h>
using namespace std;

void coloca_5(int& x) {
	x = 5;
}

int main() {
	int x = 1;
	int& y = x;
	int z = y;
	y = 2;
	cout << x << " " << y << " " << z << ", ";
	coloca_5(z);
	cout << x << " " << y << " " << z << "\n";
}
