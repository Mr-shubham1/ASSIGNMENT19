#include<stdio.h>
int main()
{
    int i,j,count;
    char a[5][50];
    printf("enter 5 strings:\n");
    for(i=0;i<=4;i++)
    {
        fgets(a[i],50,stdin);
    }
    for(i=0;i<=4;i++)
    {
          count=0;
        for(j=0;a[i][j];j++)
        {
            if((a[i][j]=='a')||(a[i][j]=='e')||(a[i][j]=='i')||(a[i][j]=='o')||(a[i][j]=='u'))
            count++;
        }
        printf("no. of vovels in string %d is %d\n",i+1,count);
    }
    return 0;
}