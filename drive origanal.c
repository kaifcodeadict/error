#include<stdio.h>
#include<conio.h>
struct driver
{
char  name[40];
long int   Lno[40];
char  Rt[100];
 long int   kms[50];
};

int main()
{
 int n,i=1;
 printf("number of drivers work in the agency:");
 scanf("%d",&n);
 struct driver e[i];
 
 for(i;i<=n;i++)
 {
 printf("\n Enter Detail about Driver number %d\n",i);
 
 printf(" Enter driver's name:");
  scanf("%s",&e[i].name);
 printf("\n Enter driver's license number:");
 scanf("%li",&e[i].Lno);  
 printf("\n Enter driver's Rout:");
 scanf("%s",&e[i].Rt);
 printf("\n Enter Kilometers driven by the driver:");
 scanf("%li",&e[i].kms);
}
 
 
 for(i=1;i<=n;i++)
 {
 printf("\n Detail About Driver number %d\n",i);
 printf("   Driver's name:%s\n",e[i].name);
 printf("   Driver's license number:%d\n",e[i].Lno);	
 printf("   Driver's Rout:%s\n",e[i].Rt);	
 printf("   Kilometers driven by the driver:%d\n",e[i].kms);                  	
 }
 
 
 getch();
 	
}
