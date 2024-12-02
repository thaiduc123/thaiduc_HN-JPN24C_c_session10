#include<stdio.h>

int binarySearch(int arr[], int n, int x){
	int l=0, r=n-1;
	int pos=-1;
	while(l<=r){
		int m=(l+r)/2;
		if (arr[m] == x ){
			pos = m;
			r = m-1; 
		} else if(arr[m]<x){
			l=m+1;
		} else {
			r=m-1;
		}
	} 
	return pos;
} 
int main(){
	int arr[]={39, 11, 4, 25, 63, 92, 28};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Mang ban dau: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (int i=1; i<n; i++) {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    int x;
    int res = binarySearch(arr, n, x);
    printf("Nhap vi tri can tim: ");
    scanf("%d", &x);
	if (res!=-1){
		printf("Vi tri cua phan tu %d la: %d", x, binarySearch);
	} else {
		printf("Khong ton tai");
	}
	return 0; 
} 
