//Q:Write a program in C that uses MACRO to define an array.Your task is to find the minimum value in the array.//

#include<stdio.h>
#define MAX 5

int main() {

	int array[MAX];
	int i=0;
	int f=0;
	int min=0;
	
	for(i=0; i<5; i++)	
	{	
		printf("Enter array values at: \nArray[%d]:",i);//9,0,5,6,7
		scanf("%d",&array[i]);
	}
	
	for(f=0;f<5;f++)
	{
		for(i=0; i<5; i++)
		{
			if(array[f]>array[i])
			{
				min = array[i];
			
			}
		}
		
	}
	
	printf("%d is minimum",min);
	
	return 0;
}