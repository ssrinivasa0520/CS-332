#include "utils.h"
#include "queue.h"

void submit(int *counter, char *input);
void show_jobs(job *jobs, int n);
void submit_history(job *jobs, int n);
void run();
void *job_manager(void *args);
void *job_runner(void *args);
job create_job(char *command, int jid);