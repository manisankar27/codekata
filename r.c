 #include <conio.h>
 
  
 
int main()
{
    int a[10000],b[10000],i,j,n,c=0 ;
   
    //printf("Enter size of the array : ");
    scanf("%d", &n);
 
    //printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
  for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
     
            {
        	   if(a[i]==a[j])
        	    {
			       c++;
			       a[j]=-1;
		       }
	       }
 		}
         
    }
     printf("%d",c);
    return 0;
}
