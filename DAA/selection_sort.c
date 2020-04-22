#include<stdio.h>
 
int main()
{
	int a[50],n,i,j,temp,least,p;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;++i)
		{
			least=a[i];
			p=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					least=a[j];
					p=j;
				}
			}
		
				temp=a[p];
				a[p]=a[i];
				a[i]=temp;
		}
		
			
	printf("\nArray after sorting: ");
	for(i=0;i<n;++i)
		printf("%d ",a[i]);
 
	return 0;
}
