#include<stdio.h>
#include<stdlib.h>
struct node//node
{
int data;
struct node *left,*right;
};
struct node *start=NULL;
struct node *t;


void main()//main
{
void insert(int data);//insert function decleration
struct node *search(int data);//search function declaration
void delete(int data);//delete function decleration


int data,c;
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

case 2: printf("enter data to be searched:");
scanf("%d",&data);
t=search(data);
if(t==NULL)
printf("data not found\n");
else
printf("data found\n");
break;

case 3: printf("enter data to be deleted:");
scanf("%d",&data);
printf("%d\t",data);
delete(data);
break;

case 4:exit(1);
}
}while(1);
}

void insert(int data)//to insert a node at the beginning of a doubly list
{
struct node *t;
t=(struct node*) malloc(sizeof(struct node));
t->data=data;
if(start==NULL)
{
t->left=t->right=NULL;
}
else
{
t->left=NULL;
t->right=start;
start->left=t;
}
start=t;
}


struct node *search(int data)//to search in adoubly list
{
struct node *t=start;
while(t!=NULL && t->data!=data)
t=t->right;
return t;
}


void delete(int data)//delete function
{

t=search(data);
 if(t==0)
printf("not found\n");
else
{

if(t==start)//one and only node
if(t->right==NULL)

start=NULL;
else
{
t->right->left=t->left;
start=t->right;
}
else if(t->right==NULL)
t->left->right=t->right;
else
{
t->left->right=t->right;
t->right->left=t->left;
}
free(t);
printf("deleted\n");
}
}

