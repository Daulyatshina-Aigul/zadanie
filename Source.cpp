#include <iostream>
using namespace std;
int main1() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a > 99 && a < 1000)
		cout << "верно";
	else
		cout << "ошибка";
	return 0;
}