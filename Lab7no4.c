#include<stdio.h>
void printHead(int w);
void printBody(int w, int h);
void main() {
	int width,height;
	scanf("%d %d",&width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);
}
void printHead(int w){
	int i;
	for(i = 1;i<=w;i++){
		printf("* ");
	}
	printf("\n");
	
}
void printBody(int w, int h){
	int i,j;
	for(i=1;i<=h-2;i++){
		for(j=1;j<=w;j++){
			if(j==1||j==w){
				printf("* ");
			}else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}
