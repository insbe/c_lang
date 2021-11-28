#include<stdio.h>
int main(){ //б█
	int a[15][40] = {0,};
	for(int i=0;i<15;i++){
		for(int j=0;j<40;j++){
			if(i==0||j==0||i==14||j==39) a[i][j] = 1;
		}
	}
	/*
	for(int i=0;i<15;i++){
		for(int j=0;j<40;j++){
			if(a[i][j]==1) printf("бс");
			else printf("0 ");
		}
		printf("\n");
	}*/
	for(int i=0;i<15;i++){
		for(int j=0;j<40;j++){
			if(a[i][j]==1) printf("бс");
			else printf("0 ");
		}
		//printf("\n");
	}
}
