#include<stdio.h>
#include<conio.h>

void main(){
	int j[10],i,k,de;
	//jobs must be sorted by descending profit
	int d[5]={2,2,1,3,3};
	int p[5]={20,15,10,5,1};
	int n=5;
	for (i=1;i<10;i++)
		j[i]=0;

	for(i=0;i<n;i++)
	{
		de=d[i];
		for(k=de;k>0;k--)
		{
			if(j[k]==0)
			{
				j[k]=i;
				break;
			}
		}
	}
	printf("The sequence of jobs to get maximum profit is :");
	for (i=1;i<10;i++)
		printf("%d ",j[i]);
}
