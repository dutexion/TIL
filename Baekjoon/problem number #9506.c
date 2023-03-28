#include <stdio.h>

int main()
{
	int num,o=0,op=0;
	int arr[1000];
	while(1)
	{
		scanf("%d",&num);
		o = 0;
		op = 0;
		if(num == -1)
		{
			break;
		}
		
		for(int i = 1; i <= num/2; i++)
		{
			if(num%i == 0)
			{
				arr[o] = i;
				o++;
			}
		}
		
		for(int i = 0; i < o; i++)
		{
			op += arr[i];
		}
		
		if(op == num)
		{
			printf("%d = ",num);
			for(int i = 0; i < o; i++)
			{
				if(arr[i+1] == 0)
				{
					printf("%d\n",arr[i]);
				}
				else
				{
					printf("%d + ",arr[i]);
				}
			}
		}
		else if(op != num)
		{
			printf("%d is NOT perfect.\n",num);
		}
		
		for(int i = 0; i < o; i++)
		{
			arr[i] = 0;
		}
	}
	return 0;
}
