#include <stdio.h>
#include <stdlib.h>
struct Node{     //  creating a node
int data;
struct Node* next;
};
 struct Node* Start=NULL;       //initializing the head pointer
struct Node* createNode(){
struct Node* n;
n=(struct Node*)malloc(sizeof(struct Node));
return n;
}
void insertNode(){          //function to add a node
struct Node * temp;
struct Node * t;
temp=createNode();
printf("Enter a number: ");
scanf("%d",&temp->data);
temp->next=NULL;
if(Start==NULL)
{
    Start=temp;
}
else
{
    t=Start;
    while((t->next)!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
}
}
void deleteNode(){      //function to delete a node
    struct Node* r;
if(Start==NULL)
    printf("List is empty\n");
else
    {
        r=Start;
        Start=Start->next;
        free(r);

}
}
void viewNode(){        //function to view a node
struct Node* t;
if(Start==NULL)
    printf("List is empty\n");
else
{
     t=Start;
     while(t!=NULL)
     {
         printf("%d ",t->data);
         t=t->next;
     }
}
}
int menu(){
int ch;
printf("\n1.Add value to the list\n");
printf("2.Delete first value\n");
printf("3.View list\n");
printf("4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
return ch;
}
void main()
{
    while(1){
        switch(menu())
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewNode();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid entry");
        }
    }
}
