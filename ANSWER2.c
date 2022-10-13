#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
  char a[10][50],t[50];
  printf("enter 10 city names:\n");
  for(i=0;i<=9;i++)
  {
    gets(a[i]);
  }
  for(i=0;i<=8;i++)
  {
    for(j=i+1;j<=9;j++)
    {
      if(strcmp(a[i],a[j])>0)
      {
          strcpy(t,a[i]);
          strcpy(a[i],a[j]);
          strcpy(a[j],t);
      }
    }
  }
  printf("strings in dictionay way are:\n");
  for(i=0;i<=9;i++)
  printf("%s\n",a[i]);
  return 0;
}