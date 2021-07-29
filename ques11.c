#include <stdio.h>

#include <string.h>
void any( char* str , char* str2 )
{
    
    	int n = strlen(str);
	int n2 = strlen(str2);
	int count=0;

	for(int i =0 ;i <n; i++){
	    
	    for(int j =0 ;j<n2; j++){
			
			count=1;
			if(str[i]==str2[j])
			{
			    count=0;
			    printf("%d",i);
			    break;
			    
			}
		
    	}	
		if(count==0)
		{
		    break;
		}
	}
	if(count==1)
	{
	    printf("-1");
	}
    
}


int main()
{
        char str[100];
        char str2[100];
	scanf("%[^\n]%*c", str);
	scanf("%[^\n]%*c", str2);

	

	any(str , str2);

return 0;
}
