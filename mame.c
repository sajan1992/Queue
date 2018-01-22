#include"header.h"
#include"declaration.h"

int mainmenu()
{
	int choice;
	printf("Queue-Menu\n");
	printf("|_1.create_queue\n");
	printf("|_2.enqueue\n");
	printf("|_3.dequeue\n");
	printf("|_4.display\n");
	printf("|_0.exit\n");

	printf("|_Enter your choice -> ");
	scanf("%d",&choice);
	return choice;
}
