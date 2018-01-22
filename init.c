#include"header.h"
#include"declaration.h"

Queue* init()
{
	Queue *q;
	q=(Queue*)malloc(sizeof(Queue));
	q->queue = NULL;
	q->fi = -1;
	q->ri = -1;
	printf("Enter the size of Queue:");
	scanf("%d",&q->size);
	//--------------Initialization begins-----------------------
	
	  mame = mainmenu;
	  crqu = createQueue;
	  enqu = enQueue;
	  dequ = deQueue;
	  disp = Display;
	return q;
}
