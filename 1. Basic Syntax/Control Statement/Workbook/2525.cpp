// BOJ 2525

#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, M, Time;

	cin >> H >> M >> Time;

	int timeSum = H * 60 + M + Time;

	H = timeSum / 60;
	M = timeSum % 60;

	H %= 24;

	cout << H << " " << M;
}