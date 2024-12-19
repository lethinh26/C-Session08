#include <stdio.h>
int main() {
	int i, j, n, value;
	printf("Nhap so hang va so cot: ");
	scanf("%d", &n);
	int num[n][n];
	for (i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
		for (j = 0; j < sizeof(num[0])/sizeof(num[0][0]); j++) {
			printf("Nhap gia tri %d cua cot %d: ", j+1, i+1);
			scanf("%d", &value);
			num[i][j] = value;
		}
	}
	for (i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
		for (j = 0; j < sizeof(num[0])/sizeof(num[0][0]); j++) {
			printf("%4d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
