# Project : Queue

# Autor: Sajan Kumar Jha

Description : This project best explains the working of data handling in queue structure.Since we know that queue is a data structure which follows the FIFO algorithm.Here we have used a struct which has the following data member:
                                            
                                            typedef struct
                                            {
                                                int * queue; //pointer which points the array of length equals to size
                                                int fi; //front index
                                                int ri; //rear index
                                                int size; //define the length of queue
                                             }

so as we know that queue follows FIFO scheme,thus the algorithm to perform enqueue is given as:
          
                (Condition for enQueue)
                              
                                if ri(rear index) is >= (size - 1) then Queue is full
                                else ri++;
                                and store value at index ri as *(queue + ri) = val;

Now the algorithm for deQueue is as follows:
          
                (Condition for deQueue)
                              
                                if (fi(front index) == ri(rear index))
                                then {
                                        queue is empty;
                                        fi = ri = -1;
                                        return 0;
                                        }
                                fi++;
                                and read value from queue at index fi;
                                check once again if (fi == ri) then fi = ri = -1;


                                
                                
                               
