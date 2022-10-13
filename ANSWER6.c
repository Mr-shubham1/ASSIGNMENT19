#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j;
    char a[5][50];
    strcpy(a[0],"asdffdsa");
    strcpy(a[1],"shubham");
    strcpy(a[2],"kasak");
    strcpy(a[3],"abhinav");
    strcpy(a[4],"abcba");
    printf(" palindrome strings are:\n");
    for(i=0;i<=4;i++)
    {
       l=strlen(a[i]);
       for(j=0;j<l/2;j++)
       {
        if(a[i][j]==a[i][l-j-1])
        continue;
        else
        break;
       }
       if(j==l/2)
       puts(a[i]);
    }
    return 0;
}