#include <stdio.h>
int main(){
char a;
int i,j,no,b,c,as=97,d;
char n[100];
printf("Enter the value no ");
scanf("%d",&no);        
b=2*no;
c=b-1;
for(i=0;i<b;i++)
{
n[i]=as;
as++;
}
d=c;
j=2*no-1;
 while(d!=0)
{
printf("\n The children pairs for day %d",d);
for(int i=0;i<2*no;i++)
{
printf("\n %c %c",n[i],n[j]);
j--;
}
for(int i=0;i<2*no;i++)
{ 
char temp;
if(i==0)
{
temp=n[i];
}
n[i]=n[i+1];
if(i==(2*no)-1)
{
n[i]=temp;
}}
d--;
}
return 0;
}

  


   

