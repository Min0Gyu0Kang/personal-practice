#include <stdio.h>

int Bsearch(int ar[],int len,int target) {
	int first = 0; //�迭 ���� ���� 0��
	int last = len - 1; //n-1���� ������ �迭 ��
	int mid; //�˰����� ���� Ž����ġ m

	while (first <= last){  //������ �� �迭�� �ƴϸ� �۵� �� ��, �迭 ù ���� ������ ���� �������� �ѹ� �� Ȯ��!
		mid = (first + last) / 2; //0+(n-1) �� ���Ͽ� 2�� ������ 0000000 => 000m000

		if (target == ar[mid]) //000m000 == target
			return mid; //ã�� ��
		else {			//�ƴ� �� 000m000 != target
			if (target <= ar[mid])
				last = mid- 1; //0m01000 => m1000 ���� ����
			else
				first = mid+ 1; //0010m0 => 001m �ڸ� ����
		}


	}
	return -1;
}
	

int main() {
	int arr[] = {1, 3, 5, 7, 9}; //�迭�� {1,3,5,7,9} �� 5�� �׸� �׻� �������� ����
	int idx;

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 7); //�迭�� 7?
	if (idx == -1) {
		printf("Ž�� ����\n");
	}
	else {
		printf("Ÿ�� ���� �ε���: %d\n",idx);
	}

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4); //�迭�� 4?
	if (idx == -1) 
		printf("Ž�� ����\n");
	else 
		printf("Ÿ�� ���� �ε���: %d\n", idx);
	return 0;
}