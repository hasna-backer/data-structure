//set
#include<stdio.h>
struct bit
{
unsigned char x:1;
};

int uset[]={1,2,3,4,5,6,7,8,9},size=9;
void main()
{
void readset(struct bit[],int n);
void printset(struct bit[]);
void unionset(struct bit[],struct bit[],struct bit[]);
void interset(struct bit[],struct bit[],struct bit[]);
void difference(struct bit[],struct bit[],struct bit[]);
struct bit a[9]={0};
struct bit b[9]={0};
struct bit c[9]={0};
int x,y;
printf("No elements in set A:\n");
scanf("%d",&x);
readset(a,x);
printf("No elements in set B:\n");
scanf("%d",&y);
readset(b,y);
printf("set A:");
printset(a);
printf("set B:");
printset(b);
unionset(a,b,c);
printf("AUB=");
printset(c);
interset(a,b,c);
printf("A intersection B=");
printset(c);
difference(a,b,c);
printf("A-B=");
printset(c);
}
//to read a set and store a bit string
void readset(struct bit a[],int n)
{
int i,x,k,d;
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&d);
for(k=0;k<size;++k)
if(uset[k]==d)
{
a[k].x=1;
break;
}
}
return;
}
//to print a set from bit string representation
void printset(struct bit a[])
{
int k;
printf("{");
for(k=0;k<size;++k)
if(a[k].x==1)
printf("%d,",uset[k]);
printf("}\n");
return;
}
//to find union of 2 set using bitstring
void unionset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;k++)
c[k].x=a[k].x | b[k].x;
return;
}
//to find intersection of two set using bitstring
void interset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;k++)
c[k].x=a[k].x & b[k].x;

}
//to find difference of two set using bit string
void difference(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;k++)
if(a[k].x==1)
c[k].x=a[k].x ^ b[k].x;
return;
}
