#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int buger[3] = { 0, };
	int drink[2] = { 0, };
	int min[2] = { 0, };
	int next = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &buger[i]);
		if (i == 0)
			min[0] = buger[0];
		if (min[0] > buger[i])
			min[0] = buger[i];
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &drink[i]);
		if (i == 0)
			min[1] = drink[0];
		if (min[1] > drink[i])
			min[1] = drink[i];
	}
	printf("%d", min[0] + min[1] - 50);
}
