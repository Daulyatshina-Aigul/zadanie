#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if (0 < a < 32 && 0 < b < 13 && c > 0) {
		if (c % 4 == 0) {
			switch (b) {
			case 1: cout << 366 - a;
				break;
			case 2: cout << 366 - a - 31;
				break;
			case 3: cout << 366 - a - 31 - 29;
				break;
			case 4: cout << 366 - a - 31 * 2 - 29;
				break;
			case 5: cout << 366 - a - 31 * 2 - 29 - 30;
				break;
			case 6: cout << 366 - a - 31 * 3 - 29 - 30;
				break;
			case 7: cout << 366 - a - 31 * 3 - 29 - 30 * 2;
				break;
			case 8: cout << 366 - a - 31 * 4 - 29 - 30 * 2;
				break;
			case 9: cout << 366 - a - 31 * 5 - 29 - 30 * 2;
				break;
			case 10:cout << 366 - a - 31 * 5 - 29 - 30 * 3;
				break;
			case 11:cout << 366 - a - 31 * 6 - 29 - 30 * 3;
				break;
			case 12:cout << 366 - a - 31 * 6 - 29 - 30 * 4;
				break;
			}
		}
		else {
			switch (b) {
			case 1: cout << 365 - a;
				break;
			case 2: cout << 365 - a - 31;
				break;
			case 3: cout << 365 - a - 31 - 28;
				break;
			case 4: cout << 365 - a - 31 * 2 - 28;
				break;
			case 5: cout << 365 - a - 31 * 2 - 28 - 30;
				break;
			case 6: cout << 365 - a - 31 * 3 - 28 - 30;
				break;
			case 7: cout << 365 - a - 31 * 3 - 28 - 30 * 2;
				break;
			case 8: cout << 365 - a - 31 * 4 - 28 - 30 * 2;
				break;
			case 9: cout << 365 - a - 31 * 5 - 28 - 30 * 2;
				break;
			case 10:cout << 365 - a - 31 * 5 - 28 - 30 * 3;
				break;
			case 11:cout << 365 - a - 31 * 6 - 28 - 30 * 3;
				break;
			case 12:cout << 365 - a - 31 * 6 - 28 - 30 * 4;
				break;
			}
		}
	}
	else {
		cout << "îřčáęŕ";
	}
	return 0;
}
