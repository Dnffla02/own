#include <stdio.h>

int main() {
	int a = 0;
	double b = 0;
	while (a++ || printf("%d\n", a) && printf("%lf", b)) 
			b+=1;
	}
	return 0;
}
/*
  a++: a를 실행하고 ++를 실행함 -> 2번 실행: 느림
  ++a: ++를 실행하고 a를 실행함 -> 1번 실행: 빠름
  a++||printf("%d\n",a): 느림: 1출력
  ++a||printf("%d\n",a): 빠름: 0출력
  ++a||a++||printf("%d\n",a): 빠름+마지막에1을더하고print실행: 1출력
  총 더한 횟수: 대략 42억번
*/
