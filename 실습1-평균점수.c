//bubble sort
#include<stdio.h>
BubbleSort(int arr[], int len) {
	int temp;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < (len - i) - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	int len;
	int arr[5] = { 2,4,1,5,3 };
	len = sizeof(arr) / sizeof(int);

	BubbleSort(arr, len);
	for (int i = 0; i < len - 1; i++)
		printf("%d ", arr[i]);
	return 0;
}