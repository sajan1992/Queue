typedef struct
{
	int *queue;
	int fi,ri,size;

}Queue;

Queue* init();
int mainmenu();
int (*mame)();
int createQueue(Queue *);
int (*crqu)(Queue *);
int enQueue(Queue *);
int (*enqu)(Queue *);
int deQueue(Queue *);
int (*dequ)(Queue *);
int Display(Queue *);
int (*disp)(Queue *);
