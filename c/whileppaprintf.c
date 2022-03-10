#include <stdio.h>

int main() {
	int a = 0;
	while (++a||printf("%d", a)){}
	return 0;
}
