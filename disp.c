#include"header.h"
#include"declaration.h"

int Display(Queue *q)
{
	int i;
	printf("\n");
	if(q->fi == q->ri)
		printf("Queue over!\n");
	
	for(i=q->fi+1;i<=q->ri;i++)
		printf("\t| %d ---> %d |\n",i,*((q->queue)+i));
	
	printf("\n");
	return 0;
}
