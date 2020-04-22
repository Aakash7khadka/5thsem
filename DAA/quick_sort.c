#include <stdio.h>

//function for quicksort
void quicksort(int a[],int l,int r)
{
	int pindex;
	if(l<r)
	{
		pindex=partition(a,l,r);
		quicksort(a,l,pindex-1);
		quicksort(a,pindex+1,r);
	}
}
int partition(int a[],int l,int r)
{
	int pivot,i,j,temp;
	pivot=a[l];
	
	
	
	i=l;
	j=r+1;
	
	while(i<j)
	{
		do{
		
			i++;
			
		}while(a[i]<pivot );
		
		do{
		
			j--;
		}while(pivot<a[j]);
		
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	a[l]=a[j];
	a[j]=pivot;
	
	return(j);
	
}
// function to print the array
void printArray(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
 

void main()
{
	int arr[50],i,n;
 	printf("Enter the size of array:");
 	scanf("%d",&n);
 	
 	printf("Enter the elements of array:");
 	for(i=0;i<n;i++)
 		scanf("%d",&arr[i]);
 		
	
 
 	
 
    printf("Given array: \n");
    printArray(arr, n);
    
    // calling quick sort
    quicksort(arr, 0, n - 1);
 
    printf("\nSorted array: \n");
    printArray(arr, n);
}
