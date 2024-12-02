#include<stdio.h>

int firstPos(int arr[], int n, int x){
	for (int i=0; i<n; i++){
		if (arr[i]==x){
			return i;
		}
	}
	return -1;
}
int count(int arr[], int n, int x){
	int res = 0;
	for (int i=0; i<n; i++){
		if (arr[i]==x){
			++res;
		}
	}
	return res;
}
int main(){
	int arr[5]={51,32,67,9,65};
	int n=5;
	int x;
	for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i=1; i<n; i++) {
        int key=arr[i];
        int j=i-1;
        for (j; j>=0 && arr[j]>key; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    printf("Nhap vao so x: ");
    scanf("%d", &x);
    if (firstPos(arr,n,x) !=-1){
    	printf("Vi tri xuat hien %d la: %d", x, firstPos(arr,n,x));
	}
	int dupe = count(arr,n,x);
	if (dupe>0){
		printf("So lan lap lai: %d", count(arr, n, x));
	}
	return 0; 
} 
