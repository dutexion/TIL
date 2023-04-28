// <problem> 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

// <input> 첫째 줄에 N(2 ≤ N ≤ 100)이 주어진다.

// <output> 규칙대로 별을 출력한다.

// <link> https://www.acmicpc.net/problem/13015

#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	for(int i = 0; i < num*4-3; i++)
	{
		if(i < num)
		{
			printf("*");
		}
		else if(i > num*4-4-num)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
	for(int i = 0; i < num-2; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < num-2; j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < num*2-i*2-5; j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < num-2; j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int i = 0; i < num-1; i++)
	{
		printf(" ");
	}
	printf("*");
	for(int i = 0; i < num-2; i++)
	{
		printf(" ");
	}
	printf("*");
	for(int i = 0; i < num-2; i++)
	{
		printf(" ");
	}
	printf("*");
	printf("\n");
	for(int i = num-3; i >= 0; i--)
	{
		for(int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < num-2; j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < num*2-i*2-5; j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < num-2; j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int i = 0; i < num*4-3; i++)
	{
		if(i < num)
		{
			printf("*");
		}
		else if(i > num*4-4-num)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
}
