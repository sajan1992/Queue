#include"header.h"
#include"declaration.h"

int enQueue(Queue *q)
{
	int val;
	printf("\n");
	if(q->ri >= (q->size)-1)
	{
		printf("Queue full!!\n\n");
		return 0;
	}
	q->ri++;
	printf("Enter the value:\n");
	scanf("%d",&val);
	*((q->queue)+(q->ri)) = val;
	return 0;
}
