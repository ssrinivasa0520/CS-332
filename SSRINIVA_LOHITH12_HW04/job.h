#include <pthread.h>

typedef struct job
{
    int jid;        
    pthread_t tid;  
    char *command;      
    char *status;     
    int exit_status;      
    char *start_time;    
    char *stop_time;     
    char fout[100]; 
    char ferr[100];
} job;