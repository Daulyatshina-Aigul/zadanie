#include<iostream>
using namespace std;

void translate(int n) {
	if (n < 10) {
		cout << n; return;
	}
	else {
		translate(n / 10);
		cout << " " << n % 10;
	}
}

int main() {
	translate(68905);
	cout;
	return 0;
}