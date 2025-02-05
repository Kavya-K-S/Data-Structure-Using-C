//to demonstrate storage classess
#include<stdio.h>
int a=10;
void local_var()
{
	printf("\nDemonstrating local variable\n");
	int a=32;
	printf("\nValue of local variable a is %d",a);
}
void global_var()
{
	printf("\nDemonstrating global variable\n");
	printf("\nValue of global variable a is %d",a);
}
void static_var()
{
	int i=0;
	printf("\nDemonstrating static variable\n");
	for(i=1;i<5;i++){
		static int y=5;
		y++;
		printf("%d\n",y);
	}
}


void reg_var()
{
	register int i;
	printf("Demonstrating register variable\n");
	for(i=0;i<5;i++)
     {
		printf("%d\n",i);
	}
}	
void main()
{
		printf("\nDemonstrating Storage classes\n");
		local_var();
		global_var();
		static_var();
		reg_var();
}
