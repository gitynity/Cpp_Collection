#include <stdio.h>

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int arr[10] = { 2, 5, 3, 1, 8, 6, 7, 10, 9, 4 };
	int i, j;

	printf("Before Sort\n");
	for (i = 0; i < 10; ++i) {
		printf("%d\n", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i; j++)
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
	}
	printf("After Sort\n");
	for (i = 0; i < 10; ++i) {
		printf("%d\n", arr[i]);
	}

}
