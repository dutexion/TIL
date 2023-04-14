#include <stdio.h>

int main()
{
	int arr[10001];
	char text[5];
	int num,push,len=0;
	scanf("%d",&num);
	for(int i = 0; i < num; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			text[j] = 0;
		}
		scanf("%s",text);
		 if(text[0] == 'p')
		 {
		 	if(text[1] == 'u')
		 	{
		 		scanf("%d",&push);
		 		len++;
			 	arr[len] = push;
			}
			else
			{
				if(len == 0)
				{
					printf("-1\n");
				}
				else
				{
					printf("%d\n",arr[len]);
					arr[len] = 0;
					len--;
				}
				
			}
		 }
		 else if(text[0] == 'e')
		 {
		 	if(len > 0)
		 	{
		 		printf("0\n");
			}
			else
			{
				printf("1\n");
			}
		 }
		 else if(text[0] == 't')
		 {
		 	if(len == 0)
		 	{
		 		printf("-1\n");
			}
			else
			{
				printf("%d\n",arr[len]);
			}
		 }
		 else if(text[0] == 's')
		 {
		 	printf("%d\n",len);
		 }
	}
	return 0;
}
