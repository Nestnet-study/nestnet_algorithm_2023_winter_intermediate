//B.11653 소인수분해
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 2; i <= N; i++){
		if (N % i == 0){
			printf("%d\n", i);
			N = N / i;
			i = 1;
		}
	}
	return 0;
}