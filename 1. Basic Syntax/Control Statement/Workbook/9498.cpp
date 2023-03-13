// BOJ 9498

#include <iostream>

int a;
int check;
int main(){

	scanf("%d", &check);
	a = check / 10;
	if (9 <= a && a <= 10) {
		printf("A");
	}
	if (8 <= a && a < 9) {
		printf("B");
	}
	if (7 <= a && a <8) {
		printf("C");
	}
	if (6 <= a && a <7) {
		printf("D");
	}
	if (a<6){
		printf("F");
	}
}
