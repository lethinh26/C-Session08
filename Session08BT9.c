#include <stdio.h>
int main() {
	int array[] = {1,5,2,3,23,5,1,2}, sizeArray, i,j, max = 0;
    sizeArray = sizeof(array)/sizeof(int);
    int count[sizeArray] = {0};

    for (i = 0; i < sizeArray; i++) {
        for (j = 0; j < sizeArray; j++) {
            if (array[i] == array[j]) {
                count[i]++;
                if (count[i] > max) {
                    max = count[i];
                }
            }
        }
    }
    for (i = 0; i < sizeArray; i++) {
        if (count[i] == max) {
            printf("%d", array[i]);
            break;
        }
    }
	return 0;
}
