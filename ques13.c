#include <stdio.h>

#include <string.h>
void strindex( char* str , char* str2 )
{
    
    	int n = strlen(str);
	int n2 = strlen(str2);
	int count=0 , index=0;

	for(int i =n-n2 ;i <n; i++){
	    count =0;
	    for(int j =0 ;j<n2; j++){
			
			if(str[i+j]==str2[j])
		    {
			    
			    count++;
			   
			    
			}
		
    	}	
		if(count==n2)
		{
		    printf("1");
		    break;
		}
	}
	if(count<n2)
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

	

	strindex(str , str2);

return 0;
}

