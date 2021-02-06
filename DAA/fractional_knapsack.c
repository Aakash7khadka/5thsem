#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,n;
	float w[10],p[10],ratio[10],x[10],temp,m,U;
	printf("Enter the number of objects");
	scanf("%d",&n);
	
	printf("Enter the weights and their corresponding profits");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&w[i],&p[i]);
	}
	
	for(i=0;i<n;i++)
	{
		ratio[i]=(p[i]/w[i]);
	}
		
		
		
	 for(i=0; i<n; i++)
	 {
   		 for(j=i+1;j< n; j++)
    	{
		      if(ratio[i]<ratio[j])
		      {
		      temp= ratio[j];
		      ratio[j]= ratio[i];
		      ratio[i]= temp;
		
		     temp= w[j];
		     w[j]= w[i];
		     w[i]= temp;
		
		     temp= p[j];
		     p[j]= p[i];
		     p[i]= temp;
            }
       }
    }
    
		    
	   printf("Enter the size of knapsack:");
	   scanf("%f",&m);
	   
	for(i=0;i<n;i++)
	{
		x[i]=0;
	}
	   	
	U=m;
	for(i=0;i<n;i++)
	{
		if(w[i]>U)
			break;
		U-=w[i];
		x[i]=1.0;
		
	}
	if(i<n)
		x[i]=U/w[i];
	
	printf("The fractional knapsack is :\n");
	for(i=0;i<n;i++)
		printf("Weight(%f)->fraction(%f) \n",w[i],x[i]);
	
	   	
	   
}
