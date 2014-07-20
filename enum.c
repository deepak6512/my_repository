#include<stdio.h>
void main()
{
enum name{dee,pak,mac,hilad};
enum name a;
printf("Enter the choice\n");
scanf("%d",&a);
switch(a)
{
case dee:
printf("dee");
break;
case pak:
printf("pak");
break;
case mac:
printf("mac");
break;
case hilad:
printf("hilad");
break;
default :
printf("Rong choice");
}
}
