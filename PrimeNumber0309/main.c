#include <stdio.h>

int main(void) {
	int i, j;
	int sum = 0;
	int num = 0;

	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (j == i) {
			sum += i;
			num++;
			printf("%d ", i);
		}
	}
	printf("\n0부터 100까지중 소수의 갯수 :%d\n", num);
	printf("0부터 100까지중 소수의 합 :%d\n", sum);
	system("pause");
	return 0;

}