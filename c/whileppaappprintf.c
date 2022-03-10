#include <stdio.h>

int main() {
	int a = 0;
	while (++a||a++||printf("%d", a)){}
	return 0;
}
