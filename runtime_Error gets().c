#include <stdio.h>

int main(void) {
char *answer;
printf("Type something:\n");
gets(answer);
printf("You typed \"%s\"\n", answer);
	return 0;
}
