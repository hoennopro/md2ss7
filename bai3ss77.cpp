#include <stdio.h>
int main(){
	int month;
	float interest, money;
	printf("nhap vao so tien gui, ti le lai va so thang gui: ");
	scanf("%f%f%d", &money, &interest, &month);

	float monthInterest=interest/12;
	for(int i=1; i<=month; i++){
		float interestMoney= money*monthInterest;
		printf("tien lai: %.2f\n", interestMoney);
		money=money+interestMoney;
		}
	printf("tien nhan duoc la:%.2f", money);
	

} 
