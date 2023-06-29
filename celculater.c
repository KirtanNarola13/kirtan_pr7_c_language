#include<stdio.h>

int min(int i,int j){
	int c;
	c=i-j;
	return c;
}
int modu(int i,int j){
	int c;
//	c=(j*100)/i;
 c=i%j;
	return c;
}
int divi(int i,int j){
	int c;
	c=i/j;
	return c;
}
int multi(int i,int j){
	int c;
	c=i*j;
	return c;
}
int add(int i,int j){
	int c;
	c=i+j;
	return c;
}


void main(){
	int n,a,b,cal;
	do{
	printf("\n\n=============================\n\n");
	printf("Press 1 for '+' \n");
	printf("Press 2 for '-' \n");
	printf("Press 3 for '*' \n");
	printf("Press 4 for '/' \n");
	printf("Press 5 for '%%' \n");
	printf("Press 0 for exit \n\n");
	printf("Enter your choice : ");
	scanf("%d",&n);
//		printf("Enter first number : ");
//		scanf("%d",&a);
//		printf("Enter second number : ");
//		scanf("%d",&b);
		
	switch(n){
		
		case 1:
			printf("Enter first number : ");
		scanf("%d",&a);
		printf("Enter second number : ");
		scanf("%d",&b);
			printf("Your addition of %d and %d is %d....",a,b,add(a,b));
			break;
			
		case 2:
			printf("Enter first number : ");
		scanf("%d",&a);
		printf("Enter second number : ");
		scanf("%d",&b);
			printf("Your minus of %d and %d is %d....",a,b,min(a,b));
			break;
			
		case 3:
			printf("Enter first number : ");
		scanf("%d",&a);
		printf("Enter second number : ");
		scanf("%d",&b);
			printf("Your multification of %d and %d is %d....",a,b,multi(a,b));
			break;
			
		case 4:
			printf("Enter first number : ");
		scanf("%d",&a);
		printf("Enter second number : ");
		scanf("%d",&b);
			printf("Your divition of %d and %d is %d....",a,b,divi(a,b));
			break;
			
		case 5:
			printf("Enter first number : ");
		scanf("%d",&a);
		printf("Enter second number : ");
		scanf("%d",&b);
			printf("Your modular of %d and %d is %d....",a,b,modu(a,b));
			break;
		case 0:
			printf("Your are exit...");
			break;
		default:
		printf("Invalid choice");
		break;	
		}
	}
	while(n!=0);
}
