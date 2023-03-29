// < problem > 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
// < input > 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
// < output > 주어진 수들 중 소수의 개수를 출력한다.
// < link > https://www.acmicpc.net/problem/1978

#include <stdio.h>

int main()
{
	int num,a,point=0,all=0;
	scanf("%d",&num);
	for(int i = 0; i < num; i++)
	{
		scanf("%d",&a);
		for(int j = 1; j <= a; j++)
		{
			if(a%j == 0)
			{
				point++;
			}
		}
		if(point == 2)
		{
			all++;
		}
		point = 0;
	}
	printf("%d",all);
	return 0;
}
