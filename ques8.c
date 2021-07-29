#include <stdio.h>

#include <string.h>


int main()
{
        char str[]="Hello World";
	

	

	int n = strlen(str);

	for(int i =n-1 ;i >=0; i--){
			
		printf("%c",str[i]);	
		
	}



   	

   	return 0;
}
