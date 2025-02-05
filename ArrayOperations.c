#include<stdio.h>
int a[10],n=-1,s,i,j,temp,f,ch;
void add()
{
	if(n+1==10)
	  printf("Array is full.\n");
	else
	{
		printf("Enter a value :");
		scanf("%d",&a[++n]);
	
	}
}
void disp()
{
	if(n==-1){
		printf("Empty array.\n");
	
	}
	else{
		for(i=0;i<=n;i++)
		  printf("%d\t",a[i]);
		  
	}
	printf("\n");
}
void search()
{
	printf("Enter the no to be searched :");
	scanf("%d",&s);
	f=0;
		for(i=0;i<=n;i++){
			if(a[i]==s){
				f=1;
				break;
			}
		}
		if(f==1)
		  printf("The element is found.\n");
		else
		  printf("The element is not found.\n");
}
void dele()
{
	if(n==-1)
	  printf("Array is Empty.\n");
	else
	  n--;
	printf("\n");
	disp();	  	
}
void sort()
{
	for(i=0;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted Array :");
	disp();
	
}

int menu()
{
	printf("\n");
	printf("1.Insert\n2.Display\n3.Search\n4.Delete\n5.Sort\n6.Exit :");
	scanf("%d",&ch);
	printf("\n");
	return ch;
}
void main()
{
	for(ch=menu();ch!=6;ch=menu()){
		switch(ch){
			case 1:
				add();
				break;
			case 2:
				disp();
				break;
			case 3:
				search();
				break;
			case 4:
				dele();
				break;
			case 5:
				sort();
				break;
			case 6:
				break;
			default:
				printf("Wrong choice.\n");
				break;
				
		}
	}
}
