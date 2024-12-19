#include <stdio.h>
int main() {
	int i, j, max = 0, num[3][3] = {
	{1,2,3},
	{325,5,24089732}
	};
	for (i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
		for (j = 0; j < sizeof(num)/sizeof(num[0]); j++) {
			if (num[i][j] > max) {
				max = num[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", max);
	return 0;
}
