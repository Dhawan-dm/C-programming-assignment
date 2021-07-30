#include<stdio.h>    
#include<stdlib.h>  
int main(){  
    
    int a[100][100],b[100][100],res[100][100],row,col,i,j,k;    
    
    scanf("%d",&row); 
    scanf("%d",&col);
    
    
    for(i=0;i<row;i++)    
    {    
        
        for(j=0;j<col;j++)    
        {   
            
            scanf("%d",&a[i][j]);    
        }
        
    }    
    
    for(i=0;i<row;i++)    
    {    
        for(j=0;j<col;j++)    
        {   
            
            
            scanf("%d",&b[i][j]);    
        }    
    }    
    
    for(i=0;i<row;i++)    
    {    
        
        for(j=0;j<col;j++)    
        {
            
         res[i][j]=0;    
            for(k=0;k<col;k++)    
            { 
                
                res[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
     
    for(i=0;i<row;i++)    
    {    
        
        for(j=0;j<col;j++)    
        {
            
            printf("%d\t",res[i][j]);    
        }  
        
    printf("\n");    
    }  
    
return 0;  
}  


