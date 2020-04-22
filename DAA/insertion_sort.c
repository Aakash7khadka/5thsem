#include<stdio.h>
void insertion_sort(int a[],int n)
{
	
	int i,key,j;
	
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	for(i=0;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0 && a[j]>key;j--)
		{
			a[j+1]=a[j];
			
		}
		a[j+1]=key;
	}
	printf("The sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void main()
{
	int i;
	int a[]={3,2,6,4,7};
	int n=sizeof(a)/sizeof(int);
	insertion_sort(a,n);
	
}
