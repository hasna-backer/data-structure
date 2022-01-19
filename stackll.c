//stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *sp=(struct node*)0;
int f;



void main()//main
{
void push(int);
int pop();
int search(int);

int c,d,t,m;
do
{
printf("1.push\n");
printf("2.pop\n");
printf("3.search\n");
printf("4.exit\n");
printf("select your choice\n");
scanf("%d",&c);
switch(c)
{
case 1: printf("enter data to push\n:");
scanf("%d",&d);
push(d);
break;

case 2: 

d=pop();
if(f==1)
printf("popped item is%d\n",d);
break;

case 3: printf("enter data to search\n:");
scanf("%d",&d);
t=search(d);
if(t==0)
printf("data found\n");
else
printf("data not found\n");
break;

case 4:exit(1);
}
}while(1);
}



void push(int data)
{
struct node*t;
t=(struct node*) malloc(sizeof(struct node));
t->data=data;
t->next=sp;
sp=t;
}




int pop()
{
int a;

struct node *t;
if(sp==NULL)
{
f=0;
printf("empty stack\n");
}
else
{
a=sp->data;
t=sp;
sp=sp->next;
free(t);
f=1;
return a;
}
}

int search(int data)
{
struct node *t;
t=sp;
while(t!=NULL)
{
if(t->data==data)
{

return 0;
}
t=t->next;

}
return 1;
}


