#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int score[5] = { 0, };
	int sum = 0;
		scanf("%d", &score[i]);
		if (score[i] < 40) {
			score[i] = 40;
		}
		sum = sum + score[i];
	}
	printf("%d", sum/5);
}