

#include <stdio.h>



void mergeSort(int a[], int p, int r)
{// merge sort function
    int q;
   
    if(p < r)
    {
    	
        q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
        
    }
}


void merge(int a[], int p, int q, int r)
{// function to merge the subarrays
	int size=sizeof(a);
    int b[size];   //same size of a[]
    
    int i, j, k;
    
    k = 0;
    i = p;
    j = q + 1;
    while(i <= q && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];    // same as b[k]=a[i]; k++; i++;
        }
        else
        {
            b[k++] = a[j++];
        }
    }
  
    while(i <= q)
    {
        b[k++] = a[i++];
    }
  
    while(j <= r)
    {
        b[k++] = a[j++];
    }
  	
  	k=0;
    for(i=p; i<=r; i++)
    {
    
        a[i] = b[k++];  // copying back the sorted list to a[]
        
    } 
}


void printArray(int a[], int size)
{// function to print the array
	
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
 
void main()
{
    int arr[50],len,i,n;
 	printf("Enter the size of array:");
 	scanf("%d",&n);
 	
 	printf("Enter the elements of array:");
 	for(i=0;i<n;i++)
 		scanf("%d",&arr[i]);
 		
	
 
 	
 
    printf("Given array: \n");
    printArray(arr, n);
    
    // calling merge sort
    mergeSort(arr, 0, n - 1);
 
    printf("\nSorted array: \n");
    printArray(arr, n);
    
}
