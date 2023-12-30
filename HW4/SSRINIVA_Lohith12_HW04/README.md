# CS 332/532 – 1G- Systems Programming: HW-04

## Name: Shreyas Srinivasa & Venkata Lohithakshith Veerepalli

## Honor Code:

We, SHREYAS SRINIVASA & Venkata Lohithakshith Veerepalli, declare that we have completed this assignment completely and entirely on our own, without any unathorized consultation from others or unathorized access to online websites. We have read the UAB Academic Honor Code and understand that any breach of the UAB Academic Honor Code may result in severe penalties.

Student Signature/Initials: SS / VLV

Date: 4/14/2023

## About the program

- This program is a simple job scheduler that executes non-interactive jobs which can run in the background without user interaction
- The P parameter specifies the maximum number of threads that can be executing at any given moment. Each thread is responsible for carrying out a single job
- There is a queue where jobs are inserted and can wait their turn to execute if the thread limit is reached
- The output and error streams from the job are written to separate files - <jobid>.out and <jobid>.err

### Algorithm

#### Main Thread

Processes user commands submit, showjobs and submithistory

#### Manager Thread

Responsible for dealing out jobs to worker threads. Pops WAITING jobs from the queue and assigns them to newly initialized threads. Number of threads that can be spawned are restricted by the P parameter

#### Worker Thread

Executes the job using the fork exec wait pattern and updates the job status, start and stop time. Standard I/O streams are redirected to files named after the generated job id.

## Instructions

### To Compile

Use any of the following commands:

- `make`
- `gcc -Wall -lpthread -o job_scheduler job_scheduler.c utils.c queue.c`

### To Run

Use the following command:

- `./job_scheduler P`
  - `P` is an integer clipped to the range `[1, 8]`

### Commands

- `submit COMMAND [ARGS]`
  - Add a job with the specified command and arguments to the job queue to be started as soon as possible and print the job's job ID to `stdout`.

- `showjobs`
  - List all jobs that are currently waiting or working by displaying each job's job ID and status.

- `submithistory`
  - List all jobs that were completed during the current session by displaying each job's job ID, thread ID (the ID of the thread the job was completed in), command and arguments, start time, end time, and exit status.
