#include<stdio.h>

int symmetricalSearch(int arr[],int n){
	if(n < 2){
		printf("Mang khong co phan tu doi xung");
		return 0;
	}
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
        	printf("Cap doi xung:");
            printf("(%d, %d)\n", arr[i], arr[n - 1 - i]);
        }else{
        	printf("Mang khong co phan tu doi xung.\n");
        	break;
		}
    }

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
	symmetricalSearch(arr,n);
	return 0;
}

