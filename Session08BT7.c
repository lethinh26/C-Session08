#include <stdio.h>
int main() {
	int i, j, sizeRow, sizeCol, sum = 0, num[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
        {13,14,15,16}
	};

	sizeRow = sizeof(num)/sizeof(num[0]);
	sizeCol = sizeof(num[0])/sizeof(num[0][0]);

	for (i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeCol; j++) {
            if (i==j) {
                printf("%d", num[i][j]);
                sum += num[j][i];
            }else {
                printf(" ");
            }
        }
        printf("\n");
	}
	printf("\n%d", sum);
	return 0;
}
