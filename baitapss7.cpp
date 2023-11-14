#include <stdio.h>
int main(){
	int n; 
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n); 
	int numbers[n];
	printf("nhap phan tu: ");
	for(int i=0;i<n; i++){
		printf("numbers[%d]=", i) ;
		scanf("%d", &numbers[1]) ;
	
	}
	printf("gia tri cac phan tu trong mang la:\n"); 
	for(int i = 0; i<n; i++){
		printf("%d\t", numbers[i]); 
	} 
	printf("\n");
	printf("cac phan tu co gia tri chan trong mang la:\n");
	for(int i = 0; i<n; i++){
		if(numbers[i]%2==0){
			printf("%d\t", numbers[i]);
		} 
	} 
	printf("\n");
	int sum = 0;
	for(int i = 0; i<n; i++){
		if(i%2!=0){
			sum+=numbers[i];
		}
	}
	printf("tong cac phan tu co chi so le trong mang: %d\n", sum);
}
	 
	
	 
	

