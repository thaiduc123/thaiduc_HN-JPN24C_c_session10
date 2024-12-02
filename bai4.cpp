#include<stdio.h>

int main(){
	int arr[5]={51,32,67,9,65};
	int n=5;
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
    printf("sau khi sap xep: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");
	return 0; 
} 
