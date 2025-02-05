#include<stdio.h>
int a[10],n,key;
void main(){
	int i;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter %d elements :",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the no to be searched");
	scanf("%d",&key);
	search();
}
int search(){
	int i,count=0;
		for(i=0;i<n;i++){
			if(a[i]==key){
				
				count++;
				printf("\n%d is found at position %d\n",key,i);
                                   }
		}
		if(count>0)
		  printf("\nNumber of occurence = %d",count);
		else
		  printf("Not found");
	    return 0;
}
