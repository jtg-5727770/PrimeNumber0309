#include <stdio.h>

int main(void) {
	int i, j;
	int sum = 0;
	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j)
			sum += i;
	}
	printf("0���� 100���� �Ҽ��� �� :%d\n", sum);
	system("pause");
	return 0;

}