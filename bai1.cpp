#include<stdio.h>

int largestSearch(int arr[],int size){
	if(size == 0){
		printf("Khong co phan tu lon nhat");
		return 0;
	}
	int max = arr[0];
	for(int i = 1;i < size;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
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

