#include"header.h"
#include"declaration.h"

int createQueue(Queue *q)
{
	printf("\n");
	q->queue = (int*)malloc(sizeof(int)*q->size);
	if(!q)
	{
		perror("Malloc");
		exit(EXIT_FAILURE);
	}
	memset(q->queue,0,q->size);
	printf("Queue created!!\n\n");
	return 0;
}
