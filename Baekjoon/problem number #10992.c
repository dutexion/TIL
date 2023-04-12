// < problem > 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

// < input > 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// < output > 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

// < link >  https://www.acmicpc.net/problem/10992

#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	for(int i = 1; i <= num; i++)
	{
		for(int k = 1; k <= num-i; k++)
		{
			printf(" ");
		}
		for(int k = 0; k < i; k++)
		{
			if(k==0 || i==num)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for(int k = 1; k < i; k++)
		{
			if(k==i-1 || i==num)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
