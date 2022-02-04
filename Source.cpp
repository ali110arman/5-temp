#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int x, y, temp;
	cout << "inter first num\n";
	cin >> x;
	cout << "inter seccond num\n";
	cin >> y;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "your first num:" << x << "and your seccond num is :" << y;
}