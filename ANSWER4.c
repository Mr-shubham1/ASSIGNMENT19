#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[15][50],b[50];
    strcpy(a[0],"shubham");
    strcpy(a[1],"ahinav");
    strcpy(a[2],"ashutosh");
    strcpy(a[3],"anugrah");
    strcpy(a[4],"shreyansh");
    strcpy(a[5],"raghvendra");
    strcpy(a[6],"shivam");
    strcpy(a[7],"anant");
    strcpy(a[8],"prashu");
    strcpy(a[9],"abhishek");
    strcpy(a[10],"nikhil");
    strcpy(a[11],"neeraj");
    strcpy(a[12],"harsh");
    strcpy(a[13],"vaibhav");
    strcpy(a[14],"anand");
    for(i=0;i<=14;i++)
    {
        puts(a[i]);
    }
    printf("enter the name you want to check:\n");
    gets(b);
    for(i=0;i<=14;i++)
    {
        if(strcmp(a[i],b)==0)
         {
            printf("name you enter is available");
            break;
         }
         
    }
    if(i==15)
    printf("name you enter is NOT available");
    return 0;

}