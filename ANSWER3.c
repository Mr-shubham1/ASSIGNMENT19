 #include<stdio.h>
 int main()
 {
  int n,i;
  printf("how many strings you want to enter:\n");
  scanf("%d",&n); 
  char a[n][50]; 
  printf("enter %d strings:\n",n);
  for(i=0;i<=n;i++)
  {
    gets(a[i]);
  }
  printf("strings are:\n");
  for(i=0;i<=n;i++)
  puts(a[i]);
 }