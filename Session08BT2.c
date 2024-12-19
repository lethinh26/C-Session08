#include <stdio.h> 
int main() {
	int i, search, num[] = {1, 2, 3, 4, 5}, check = 0, pos;
	printf("Nhap vao gia tri ban muon kiem tra: ");
	scanf("%d", &search);
	for (i = 0; i < 5; i++) {
		if (search == num[i]) {
			check = 1;
			pos = i;
			break;
		}
	}
	if (check) {
		printf("Vi tri phan tu trong mang la: %d", pos);
	}else {
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
