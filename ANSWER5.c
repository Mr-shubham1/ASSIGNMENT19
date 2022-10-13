#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char email[5][50];
    printf("enter 5 email id's");
    for(i=0;i<=4;i++)
    {
     gets(email[i]);
    }
    printf("email id's in which '@' is NOT present are:\n");
    for(i=0;i<=4;i++)
    {
        if(strchr(email[i],'@')==0)
        {
            puts(email[i]);
            count++;
        }
    }
    if(count==0)
    printf(" '@' is present in all email id's");
    return 0;
}