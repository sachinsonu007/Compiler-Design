#include<stdio.h>
void sum(int ,int);
void main()
{
 	int a=5,b;
 	printf("\nEnter Number:");
 	scanf("%d",&b);
 	sum(5,b);
 	
 	
}
void sum(int inp1,int inp2){
	int s=0;
	s=inp1+inp2;
	printf("\nSum : %d",s);
	return ;
}
