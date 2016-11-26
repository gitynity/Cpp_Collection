#include <iostream>
#include <stdio.h>
using namespace std;

/*
 *
 *
 *
 *
 Formulae for " (x+yi)(u+vi)=(xu-yv)+(xv+yu)i "
 *
 *
 *
 *
 */

typedef struct complex {
	int real;
	int img;
} complex;

complex cproduct(complex c1, complex c2)		// x+yi   and  u+vi
		{
	int x = c1.real, y = c1.img, u = c2.real, v = c2.img;
	complex ans;

	ans.real = (x * u - y * v);
	ans.img = (x * v + y * u);

	return ans;
}

int main() {
	int a[5], b[5], i;

	complex c1, c2, c3, c4, c5;

	{

	};

	for (i = 0; i < 5; i++) {
		scanf("%d ", &a[i]);
	}

	for (i = 0; i < 5; i++) {
		scanf("%d ", &b[i]);
	}

	c1.real = a[0];
	c2.real = a[1];
	c3.real = a[2];
	c4.real = a[3];
	c5.real = a[4];

	c1.img = b[0];
	c2.img = b[1];
	c3.img = b[2];
	c4.img = b[3];
	c5.img = b[4];

	complex result = cproduct(c1, c2);
	result = cproduct(result, c3);
	result = cproduct(result, c4);
	result = cproduct(result, c5);

	cout << result.real << " " << result.img << " " << endl;

	return 0;
}
