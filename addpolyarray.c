#include<stdio.h>
int coeff1[20],coeff2[20],add[20],n; 

int insert(int coeff[20]){
	int i,d;
	printf("\nEnter the highest degree of the polynomial :");
	scanf("%d",&d);
	printf("\nEnter the coefficients :\n");
	for(i=d;i>=0;i--){
		printf("Coefficient of power[%d] :",i);
		scanf("%d",&coeff[i]);

	}
	printf("\nThe polynomial is: ");
	for(i=d;i>0;i--){
		if(coeff[i]!=0){
		   if(coeff[i]>0 && i!=d){
		   	printf("+  ");
		   }
		      printf("%dx^%d  ",coeff[i],i);  
		     
        	}
       	}	   
	if(coeff[0]!=0){
	    if(coeff[0]>0)
		    printf("+ %d",coeff[0]);	
		}
	return d;
}
void addi(int d1,int d2){
	int i;
	if(d1>d2)
		n=d1;
	else 
	   n=d2;
	for(i=0;i<=n;i++){
	   	add[i]=coeff1[i]+coeff2[i];
		   }
	for(i=n;i>0;i--){
		if(add[i]!=0){
		   if(add[i]>0 && i!=n){
		   	printf("+  ");
		   }
		   printf("%dx^%d  ",add[i],i);  
		     
        	}
       	}

	if(add[0]!=0){
	    if(add[0]>0)
		    printf("+ %d",add[0]);	
		}

}
void main(){
	int d1,d2;
	d1=insert(coeff1);
	d2=insert(coeff2);
	printf("\n");
	printf("\n");
	printf("\nResultant polynomial :\n");
	addi(d1,d2);
}
