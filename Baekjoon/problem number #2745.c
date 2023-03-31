// < problem > B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
// 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
// A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
  
// < input > 첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)
// B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
  
// < output > 첫째 줄에 B진법 수 N을 10진법으로 출력한다.
  
// < link > https://www.acmicpc.net/problem/2745

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[30]={0,};
	int num,str=0,all=0,o=1,c;
	scanf("%s %d",arr,&num);
	str = strlen(arr);
	for(int i = str-1; i >= 0; i--)
	{
		c = arr[i];
		if(64 < c)
		{
			c -= 55;
		}
		else if(47 < c)
		{
			c -= 48;
		}
		all += c*o;
		o *= num;
	}
	printf("%d",all);
	return 0;
}
