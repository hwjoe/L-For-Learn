#include <stdio.h>

int main(void)
{
	int num[5],i,j,k,l,temp;

	for(i=0;i<5;i++)
		scanf("%d",&num[i]);

	for(j=0;j<4;j++)
	{
		for(k=0;k<4;k++)
		{
			if(num[k]>num[k+1])
			{
				temp=num[k];
				num[k]=num[k+1];
				num[k+1]=temp;
			}
		}
	}

	for(l=0;l<5;l++)
		printf("%d ",num[l]);

	return 0;
}
