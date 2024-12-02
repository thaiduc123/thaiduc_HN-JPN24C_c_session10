#include<stdio.h>

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
    printf("sau khi sap xep: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

	return 0; 
} 
