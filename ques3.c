
#include<stdio.h>
 
int main()
{
    char str[200];
    int v=0,c=0; // v = vowels , c = constants; 
    
 
   scanf("%[^\n]%*c", str); 
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
        {
            v++;
        }
        
	else //anything except vowels will be considered as constants 
        {
            c++;
        }
        
    }
 
    printf("\nVowels = %d",v);
    printf("\nConsonants = %d",c);
    
  return 0;  
}
