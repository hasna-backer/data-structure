#include<stdio.h>
#include<stdlib.h>
#define size 5

int front=0;
int rear=0;
int q[size];
int flag;
void main()//main
{
void insert(int data);//insert function decleration
int search(int data);//search function declaration
int delete();//delete function decleration


int data,c,t;
do
{
printf("1.insert\n");
printf("2.search\n");
printf("3.delete\n");
printf("4.exit\n");
printf("select your choice\n");
scanf("%d",&c);
switch(c)
{
case 1: printf("enter data:");
scanf("%d",&data);
insert(data);
break;

case 2: printf("enter datato be searched:");
scanf("%d",&data);
t=search(data);
if(t==0)
printf("data not found\n");
else
printf("data found\n");
break;

case 3: 
data=delete(data);
if(flag==1)
printf("deleted data is %d\n",data);
break;
case 4:exit(1);
}
}while(1);
}


void insert(int data)//insert function decleration
{
int t;
t=(rear+1)%size;
if(front==t)
{
printf("queue is full\n");
}
else
{
rear=t;
q[rear]=data;
printf("item inserted\n");
}
}


int search(int data)//search function declaration
{
int f,r;
f=front;
r=rear;
while(f!=r)
{
f=(f+1)%size;
if(q[f]==data)
{
return 1;
}
}
return 0;
}


int delete()//delete function decleration
{
int r;
if(front==rear)
{
printf("queue is empty\n");
flag=0;
}
else
{
front=(front+1)%size;
flag=1;
return q[front];

}
}



