#include<stdio.h>
#include<stdlib.h>
int main(){
	int row,col;
	scanf("%d%d",&row,&col);
	float **arr=(float**)malloc(row*sizeof(float));
	for(int i=0;i<col;i++){
		arr[i]=(float*)malloc(col*sizeof(float));
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%f",*(arr+i)+j);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%.2f  ",*(*(arr+i)+j));
			}
		printf("\n");	
			
	}
} 
