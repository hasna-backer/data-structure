// 2 way merging
#include<stdio.h>
void main()
{
void read(int[],int);//function decleration for reading an array
void display(int[],int);//function decleration for displaying
void merge(int[],int[],int[],int,int);//function decleration for merging
int a[50],b[50],c[100],n,m;
printf("enter no. of elements in 1st array");
scanf("%d",&n);
printf("enter elements to first array");
read(a,n);//fn call

printf("enter no. of elements in second array");
scanf("%d",&m);
printf("enter elements to second array");
read(b,m);//fn call


merge(a,b,c,n,m);
printf("merged array is ");
display(c,m+n);
}

void read(int s[],int k)//function defenition for reading an array
{
int i;
for(i=0;i<k;i++)
{
scanf("%d",&s[i]);

}
return;
}



void display(int s[],int k)//function defenition for displaying
{
int i;
for(i=0;i<k;i++)
{
printf("%d\t",s[i]);

}
return;
}


void merge(int a[],int b[],int c[],int n,int m)//function decleration for merging
{
int i,j,k;
i=j=k=0;
while(i<n && j<m)//for iteration 

if(a[i]<b[j])//to compare and fill in the third array
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}



while(i<n)//for remaining elements in first array
{
c[k]=a[i];
k++;
i++;
}
while(j<m)//for remaining elements in second array
{
c[k]=b[j];
k++;
j++;
}
return;
}




