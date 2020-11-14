#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

void BubbleSort(int array[], int size){
	for (int i = 0; i < size - 1; i++){
		for (int j = 1; j < size - i; j++){
			if (array[j - 1]>array[j]){
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}

		}
	}
}
int main(){
	int x[6] = {1,3,4,2,4,5};
	BubbleSort(x, 6);
	for (int i = 0; i < 6; i++){
		printf("%d ", x[i]);
	}
	system("pause");
	return 0;
}