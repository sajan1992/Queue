#include"header.h"
#include"declaration.h"

int deQueue(Queue * q)
{
	printf("\n");
	if(q->fi == q->ri)
	{
		printf("Queue over!\n\n");
		q->fi = q->ri = -1;
		return 0;
	}
	q->fi++;
	printf("Dequeued %d from Queue!\n",*((q->queue)+(q->fi)));
	if(q->fi == q->ri)
		q->fi = q->ri = -1;
	return 0;
}
