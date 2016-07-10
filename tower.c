#include<stdio.h>
int tower(int no,char src,char temp,char des)
{
if(no==1)
{
printf("\n %d disk moved from %c-->%c,no,src,des);
return 0;
}
tower(no-1,src,des,temp);
printf("\n %d disk is moved from%c-->%c,no,src,des);
tower(no-1,temp,src,des);
}
int main()
{
int no;
char src='a',temp='b',des='c';
printf("enter the no of disk:");
scanf("%d",&no);
tower(no,src,temp,des);
return 0;
}
