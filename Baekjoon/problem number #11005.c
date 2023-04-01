// < problem > 10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.
// 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
// A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

// < input > 첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.

// < output > 첫째 줄에 10진법 수 N을 B진법으로 출력한다.

// < link > https://www.acmicpc.net/problem/11005

#include <stdio.h>

int main()
{
	int arr[30] = {0,};
	int num,num2,o=-1;
	scanf("%d %d",&num,&num2);
	arr[0] = num;
	for(int i = 0; i < 30; i++)
	{
		if(arr[i] < 1)
		{
			break;
		}
		arr[i+1] = arr[i]/num2;
		arr[i] = arr[i]%num2;
		o++;
	}
	while(o >= 0)
	{
		if(arr[o] < 10)
		{
			printf("%d",arr[o]);
		}
		else
		{
			printf("%c",arr[o]+55);
		}
		o--;
	}
	return 0;
}
