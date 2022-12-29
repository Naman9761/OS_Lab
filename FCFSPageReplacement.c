#include<stdio.h>

int fsize;
int frm[15];
void display();
void main()
{
 int pg[100],nPage,i,j,pf=0,top=-1,temp,flag=0;
 clrscr();
 printf("\n Enter frame size:");
 scanf("%d",&fsize);
 printf("\n Enter number of pages:");
 scanf("%d",&nPage);

 for(i=0;i< nPage;i++)
 {
  printf("\n Enter page[%d]:",i+1);
  scanf("%d",&pg[i]);
 }
   for(i=0;i< fsize;i++)
    frm[i]=-1;
printf("\n page | \t Frame content ");
for(j=0;j< nPage;j++)
{
 flag=0;
  for(i=0;i< fsize;i++)
  {
   if(frm[i]==pg[j])
   {
    flag=1;
    break;
   }
  }


  if(flag==0)
  {
   if(top==fsize-1)
   {
    top=-1;
   }
   pf++;
   top++;
   frm[top]=pg[j];
  }
 printf("\n %d    |",pg[j]);
 display();
}
 printf("\n total page fault:%d",pf);
}
void display()
{
 int i;
 for(i=0;i< fsize;i++)
  printf("\t %d",frm[i]);
}