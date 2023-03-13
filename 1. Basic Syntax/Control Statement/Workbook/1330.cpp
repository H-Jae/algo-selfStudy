// BOJ 1330

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	(a - b) ? (a > b) ? cout << '>' : cout <<  '<' : cout <<  "==";

	return 0;
}