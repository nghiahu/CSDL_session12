#include<stdio.h>

int largestSearch(int arr[],int size){
	if(size == 0){
		printf("Khong co phan tu nho nhat");
		return 0;
	}
	int min = arr[0];
	for(int i = 1;i < size;i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}
int main(){
	int n;
	printf("Nhan vao so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int result = largestSearch(arr,n);
	printf("%d",result);
	return 0;
}

