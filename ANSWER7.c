#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char a[]={"123.23.134.0"};
    char *b =strtok(a,".");
    while(b!=NULL)
    {
        int x;
        x=atoi(b);
        if((x>=0)&&(x<=255))
        {
        printf("%d ",x);
        count++;
        }
        b=strtok(NULL,".");
    }
    if(count==4)
    printf("\nvalid ip address");
    return 0;
}