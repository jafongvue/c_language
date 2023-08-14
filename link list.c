#include <stdio.h>
#include <conio.h>
typedef struct list
{
 	int entry;
 	struct list *next;
}
NODE;
NODE * createNode(int item)
{
 	NODE *newNode=NULL;
 	newNode=(NODE *)
 	malloc(sizeof(NODE));
 	newNode->next=NULL;
	newNode->entry =item;
 	return newNode;
}
NODE *insertNodeHead(NODE *head, int item)
{
	 NODE *newNode=NULL;
	 newNode=createNode(item);
	 if(head!=NULL)
	 newNode->next=head;
	 return newNode;
}
NODE *insertNodeTail(NODE *head, int item)
{
	NODE *newNode= NULL, *runNode= head;
 	newNode=createNode(item);
 	if(head== NULL)
 	return newNode;
	else
	{
		 while(runNode->next != NULL)
 		runNode=runNode->next;
 		runNode->next = newNode;
	}
 	return head;
}
NODE *insertNodeBetween(NODE *head, int item, int position)
{
	 NODE *newNode=NULL,*runNode=head, *prevNode=NULL;
	 newNode=createNode (item);
 	if(head==NULL)
	return newNode;
 	else
 	{
 		while(runNode->next != NULL && runNode->entry!=position)
 		{
 			prevNode=runNode;
	 		runNode=runNode->next;
 		}
 		if(runNode->entry==position)
		{
 			if(prevNode==NULL)
 			{ // found at head
 				head=newNode;
 				head->next=runNode;
 			}
 			else
 			{
 				newNode->next=runNode;
 				prevNode->next=newNode;
 			}
 		}
 	}
	if(runNode==NULL)
 	printf("Data not found... In\n");
 	return head;
}
NODE * deleteNode(NODE *head, int data)
{
 	NODE *prevNode= NULL, *runNode= head;
	while(runNode!= NULL)
	{		
 		if(runNode->entry==data)
 		{
 			if(prevNode==NULL) // found at head
 			head=head->next;
 			else
 			prevNode->next=runNode->next;
 			free(runNode);
 			printf("Node deleted !!!!\n");
 			break;
 		}
 		prevNode=runNode;
 		runNode=runNode->next;
 	}
 	if(runNode==NULL)
 	printf("Data not found...In");
 	printf("\n\n");
 	return head;
}
void displayNodes(NODE *head)
{
 	NODE *runNode=head;
 	while(runNode!=NULL)
 	{
 		printf("[%d]->", runNode->entry );
 		runNode=runNode->next;
 	}
 	printf("NULL\n\n\n");
}
void main(void)
{
 	NODE *head=NULL;
 	int choose=0;
 	int input, position;
 	while (choose !=6)
	{
 		printf("1. insert node at head\n");
 		printf("2. insert node at tail\n");
 		printf("3. insert between node\n");
 		printf("4. delete node\n");
 		printf("5. display linked list\n");
 		printf("6. exit program\n\n");
 		printf("choose number:");
 		scanf("%d",&choose);
 		system("cls");
 		if (choose == 1 || choose == 2|| choose ==3)
 		{
 			printf("input data for insert:-> ");
 			scanf("%d",&input);
 			if(choose == 3)
 			{
 				printf("input position node for insert: ");
 				scanf("%d",&position);
 			}
	 	}		
 		else if (choose == 4)
	 	{
			printf("input data for delete:-> ");
 			scanf("%d",&input);
 		}
 		switch (choose)
 		{
    		case 1:system("cls"); head = insertNodeHead(head, input); break;
    		case 2:system("cls");head = insertNodeTail(head, input);break;
    		case 3:head = insertNodeBetween(head, input, position);break;
    		case 4:head = deleteNode (head, input);break;
    		case 5:displayNodes (head);break;
 		}
 	}
}
