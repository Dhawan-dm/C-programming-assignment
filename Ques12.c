#include<stdio.h>
#define MAXLINE 100

#define YES 1
#define NO 0


int Sgetline(char str[],int l)
{
    int x,i;

    for(i=0; i < l-1 ; i++)
    {   
        x= getchar();
        if(x==EOF)
        {
            break;
        }
        if(x=='\n')
        {
            break;
        }
        str[i] =x;
    }
    if(x=='\n')
    {
        str[i] =x;
        i++;
    }
    str[i] = '\0';

    return i;
}

int htoi(char str[])
{
    int dighex,i,hex,n;  //hexadigit = dighex
    i = 0;
    if( str[i] == '0')
    {
        i++;
        if(str[i] == 'x' || str[i] == 'X')
            i++;
    }

    n = 0;
    hex = YES;

    for(;hex==YES;++i)
    {
        if(str[i] >='0' && str[i] <='9')
        {
            dighex= str[i] - '0';
        }
        else if(str[i] >='a' && str[i] <='f')
        {
            dighex= str[i] -'a' + 10;
        }    
        else if(str[i] >='A' && str[i] <='F')
        {
         
            dighex= str[i] -'A' + 10;
        }
        else
        {
            hex = NO;
        }
        
        if(hex == YES)
            n = 16 * n + dighex;
    }
    return n;
}

int main(void)
{
    char str[MAXLINE];
    int value;

    Sgetline(str, MAXLINE);
    value=htoi(str);

    printf("%d",value);

    return 0;
}

