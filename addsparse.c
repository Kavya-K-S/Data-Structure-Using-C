#include<stdio.h>
#define max 100
int nrows,ncols;
int read_spmatrix(int sparse[max][3]){
	int nonzerocount=0;
	printf("Enter the number of rows and coloumns in the matrix :");
	scanf("%d%d",&nrows,&ncols);
	int matrix[nrows][ncols];
		printf("Enter the elements of the Matrix\n");
	int i;
	for(i=0;i<nrows;i++){
		int j;
		for(j=0;j<ncols;j++){
			printf("Enter the element in position [%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j]!=0){
			    sparse[nonzerocount][0]=i;
			    sparse[nonzerocount][1]=j;
			    sparse[nonzerocount][2]=matrix[i][j];
			    nonzerocount++;
			}
		}	
	}
	printf("\n");
	printf("Sparse matrix representaion (Row, Column, Value):\n");
	printf("\nRow\tColumn\tvalue\n");
	printf("%d\t%d\t%d\n",nrows,ncols,nonzerocount);
	for(i=0;i<nonzerocount;i++){
		printf("%d\t%d\t%d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    	
	}
	return nonzerocount;
}
int add_spmatrix(int sparse1[max][3],int sparse2[max][3],int nonzerocount1,int nonzerocount2,int result[max][3]){
	int i=0,j=0,k=0;
	while(i<nonzerocount1 && j<nonzerocount2){
		if(sparse1[i][0]<sparse2[j][0]||sparse1[i][0]==sparse2[j][0]&&sparse1[i][1]<sparse2[j][1]){
			result[k][0]=sparse1[i][0];
			result[k][1]=sparse1[i][1];
			result[k][2]=sparse1[i][2];
			i++;
		}
		else if(sparse2[i][0]<sparse1[j][0]||sparse2[i][0]==sparse1[j][0]&&sparse1[i][1]>sparse2[j][1]){
			result[k][0]=sparse2[j][0];
			result[k][1]=sparse2[j][1];
			result[k][2]=sparse2[j][2];
			j++;
	}
	else{
		result[k][0]=sparse2[j][0];
		result[k][1]=sparse2[j][1];
		result[k][2]=sparse2[j][2]+sparse1[j][2];
		i++;
		j++;
	}
	k++;
	}
	//copying remaining elements of sparse1
	while(i<nonzerocount1){
		result[k][0]=sparse1[i][0];
		result[k][1]=sparse1[i][1];
		result[k][2]=sparse1[i][2];
		i++;
		k++;
	}
	//copying remaining elements of sparse2
		while(j<nonzerocount2){
			result[k][0]=sparse2[j][0];
			result[k][1]=sparse2[j][1];
			result[k][2]=sparse2[j][2];
			j++;
			k++;
		}
		return k;
}
void main(){
	int sparse1[max][3],sparse2[max][3],nonzerocount1=0,nonzerocount2=0,result[max][3],k,i;
	printf("Sparse Matrix 1\n");
	nonzerocount1=read_spmatrix(sparse1);
	printf("Sparse Matrix 2\n");
	nonzerocount2=read_spmatrix(sparse2);
	k=add_spmatrix(sparse1,sparse2,nonzerocount1,nonzerocount2,result);
	printf("\n");
	printf("Resultant Sparse matrix representaion (Row, Column, Value):\n");
	printf("\nRow\tColumn\tvalue\n");
	printf("%d\t%d\t%d\n",nrows,ncols,k);
	for(i=0;i<k;i++){
		printf("%d\t%d\t%d\n",result[i][0],result[i][1],result[i][2]);
   
}
}
