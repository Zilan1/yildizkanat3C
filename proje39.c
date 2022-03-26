#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int uzunluk,i,j;
	printf("Kanat uzunlugu kac uzunlugu girin: ");
	scanf("%d",&uzunluk);
	
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf("");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf("");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	//diger yarisi 
	for(i=1;i<=uzunluk;i++)
	{
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		for(j=1;j<=i-1;j++)
		{
			printf("");
		}
		for(j=1;j<=i-1;j++)
		{
			printf("");
		}
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
