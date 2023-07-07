#include<stdio.h>
int main()  
{                          
int a[100],i,size,max,mini; 

printf("enter the size");
scanf("%d", & size)
for(i=0; i<size; i++;)
{
    scanf("%d", & a[i]);   

}                 
   max= a[0];
   mini= a[0];
   for (i=0; i<size; i++);
{
    if (a[i]>max)
    {
       max= a[i]; 
    }
} 

if(a [i]>mini)
 {
    mini= a[i];

 }
 printf("maximum value : %d\n",max);
 printf("minimum value : %d\n",mini);
 return 0; 
}                                     
 



