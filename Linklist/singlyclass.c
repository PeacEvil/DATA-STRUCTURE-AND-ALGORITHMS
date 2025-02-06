#include<stdio.h>
#include<stdlib.h>
int ch;
struct node{
    int data;
    struct node *next;
};
struct node* head = NULL;
struct node* createnode(int data) // Function to create a new Node
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void display()
{
    struct node* temp;
    temp = head;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    
}
void insertAtBeginning(struct Node** head, int data) 
{
    struct node* newnode = createnode(data);
    newnode->next = *head;
    *head = newnode;
}
void menu ()
{
    printf("Menu\n");
    printf("_______");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit");
    printf("\nEnter your choice:");
	scanf("%d",&ch);
}
int main()
{
    
    while (1)
    {
        menu();
        switch (ch)
        {
        case 1:
        break;
        case 2:
        break;
        case 3:
        display();
        break;
        case 4:
        break;
        case 5:
        printf("Exiting the program....");
        exit(0);
        
        default:
            break;
        }
    }
    
    return 0;

}