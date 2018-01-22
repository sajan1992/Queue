#include"header.h"
#include"declaration.h"

int main()
{
	Queue *q;
	q = init();
	int choice;
	while(1)
	{
		choice = (mame)();
		switch(choice)
		{
			case 1:
				if(q->queue)
					printf("\nQueue already created\n\n");
				else
					(crqu)(q);
				break;
			case 2:
				if(!q->queue)
					printf("\nQueue Empty\n\n");
				else
					(enqu)(q);
				break;
			case 3:
				if(!q->queue)
					printf("\nQueue Empty\n\n");
				else
					(dequ)(q);
				break;
			case 4:
				if(!q->queue)
					printf("\nQueue Empty\n\n");
				else
					(disp)(q);
				break;
			case 0:
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice!\n\n");
		}
	}
	return 0;
}
