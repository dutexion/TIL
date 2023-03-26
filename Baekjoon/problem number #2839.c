#include <stdio.h>

int main()
{
	int num,point=0;
	scanf("%d",&num);
	while(1)
	{
		if(num <= 2)
		{
			printf("-1");
			break;
		}
		
		if(num%5 == 0)
		{
			point += num/5;
			num = 0;
			printf("%d",point);
			break;
		}
		else if(num >= 3)
		{
			point++;
			num -= 3;
		}
		if(num == 0)
		{
			printf("%d",point);
			break;
		}
	}
	return 0;
}
