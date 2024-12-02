#include<stdio.h>

int main(){
	int arr[5]={21,569,87,3,5};
	int n;
	printf("Nhap vao so ngau nhien: ");
	scanf("%d", &n);
	for (int i=0; i<4; i++){
		if (arr[i]==n){
			printf("Vi tri cau phan tu la: a[%d] ", i);
		}
	}	
	return 0; 
} 
