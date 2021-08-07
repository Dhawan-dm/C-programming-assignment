#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char s[])
{
    int l = 0, h = strlen(s) - 1;
  
    
    for (int i = 0; i <= h; i++)
        s[i] = tolower(s[i]);
  
    
    while (l <= h) {
  
    
    
        if (!(s[l] >= 'a' && s[l] <= 'z'))
            l++;
  
    
        else if (!(s[h] >= 'a' && s[h] <= 'z'))
            h--;
  
    
        else if (s[l] == s[h])
            l++, h--;
  
    
    
        else
            return false;
    }
  
    
    return true;
}
  

int main()
{
    char s[100];
     fgets(s, 100, stdin);
  
    if (isPalindrome(s))
        printf("true");
    else
        printf("false");
  
    return 0;
}
