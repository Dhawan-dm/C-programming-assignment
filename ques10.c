#include <stdio.h>

#include <string.h>


int main()
{
        char str[100];
        char str2[100];
	scanf("%[^\n]%*c", str);
	scanf("%[^\n]%*c", str2);

	

	int n = strlen(str);
	int n2 = strlen(str2);

	for(int i =0 ;i <n; i++){
	    
	    for(int j =0 ;j<n2; j++){
			
			if(str[i]==str2[j])
			{
			    str[i]=' ';
			}
    	}	
		
	}
	for(int i = 0; i<n ;i++)
	{
	    if(str[i]!=' ')
	    {
	        printf("%c",str[i]);
	    }
	}



   	

   	return 0;
}

