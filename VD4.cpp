#include<stdio.h>
int main(){
	int number;
	printf("nhap 1 so tuy y: ");
	scanf("%d",&number);
    for (int i = 1;i <= number; i++){
	        	if (number%i==0 && i%2!=0){
	        		printf("%d\n",i);
				}	
			}
}
