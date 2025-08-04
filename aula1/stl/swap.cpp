#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int x = 2, y = 3;
	cout << x << " " << y << "\n";
	swap(x, y);
	cout << x << " " << y << "\n";
}
