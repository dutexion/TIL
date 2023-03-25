#include <stdio.h>

int main()
{
	int arr[100][100] = {0,};
	int num=0,a=0,b=0,point=0;
	scanf("%d",&num);
	
	for(int i = 0; i < num; i++)
	{
		scanf("%d %d",&a,&b);
		for(int g = b-1; g < b+9; g++)
		{
			for(int h = a-1; h < a+9; h++)
			{
				arr[g][h] = 1;
			}
		}
	}
	
	for(int i = 0; i < 100; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			if(arr[i][j] == 1)
			{
				point++;
			}
		}
	}
	
	printf("%d",point);
	return 0;
}
