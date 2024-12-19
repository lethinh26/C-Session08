#include <stdio.h> 
int main() {
	int i, num[] = {1, 2, 3, 4, 5};
	for (i = 4; i >= 0; i--) {
		printf("%d ", num[i]);
	}
	return 0;
}
