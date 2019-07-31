#include <stdio.h>
 
int main()
{
	int arr[10], a[10], i, j, Count, Size;
	
	scanf("%d", &Size);
	
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
    	a[i] = -1;
   	}     
 
	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			a[j] = 0;
    		}
    	}
    	if(a[i] != 0)
    	{
    		a[i] = Count;
		}
	}

 	
 	for (i = 0; i < Size; i++)
  	{
  		if(a[i] == 1)
  		{
  			printf("%d\t", arr[i]);
		}		
  	}	     
 	return 0;
}
