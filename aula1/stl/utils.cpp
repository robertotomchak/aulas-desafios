#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	x = 3;
	y = -4;

	cout << "x = " << x << ", y = " << y << "\n";
	swap(x, y);
	cout << "x = " << x << ", y = " << y << "\n";
	cout << "|x| = " << abs(x) << "\n";
	cout << "max = " << max(x, y) << ", min = " << min(x, y) << "\n";
}
