#include<stdio.h>



int main()
{
    int i,j;
    int n;
    scanf("%d",&n);		
    int s=n-1;  //space in  the pyramid
    
    for(i=0;i< n;i++)
    {
	    for(j=0;j<s;j++)
	    {
		    printf(" ");
	    }
	    
	    
	    for(j=0;j<=i;j++)
	    {
		    printf("#");
		    printf(" "); // for space after hash
	    }
	
	    
	    printf("\n");
	
    

	s--;	//to decrese the space in starting of the next line in pyramid
    }
    return 0;
}
