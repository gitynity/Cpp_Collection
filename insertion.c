#include <stdio.h>

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int arr[10] = { 2, 5, 3, 1, 8, 6, 7, 10, 9, 4 };
	int c, d;

	printf("Array before sort..\n");
	for (c = 0; c < 10; c++)
		printf("%d\n", arr[c]);

	for (c = 0; c < 10; c++) {
		d = c;
		while (d > 0 && arr[d] < arr[d - 1]) {
			swap(&arr[d], &arr[d - 1]);
			d--;
		}
	}

	printf("\nSorted...\n");
	for (c = 0; c < 10; c++)
		printf("%d\n", arr[c]);
}
