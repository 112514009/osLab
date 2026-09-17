# PROGRAM 6 : INTER-PROCESS COMMUNICATION USING PIPES AND FIFO

## AIM :
To implement inter-process communication between processes using:
1. Unnamed pipes (pipe())
2. Named pipes / FIFO (mkfifo()) 
and exchange data between related and unrelated processes.

## CONTEXT :
This program demonstrates Inter-Process Communication (IPC) using an unnamed pipe in the Linux operating system. 
We explore,  Pipe: It is a communication mechanism that allows two related processes (a parent and its child) to exchange data.

## LINUX SYSTEM CALLS USED

| System Call | Function |
|---|---|
| `pipe()` | Creates an unnamed pipe for communication between related processes. |
| `fork()` | Creates a child process from the parent process. |
| `read()` | Reads data from the pipe (or a file descriptor). |
| `write()` | Writes data to the pipe (or a file descriptor). |
| `close()` | Closes the read or write end of the pipe and releases resources. |

## SOURCE CODE :
**File :** [pipe_demo](https://github.com/Balakrishna-0907/osLab/blob/4528c752ceaf50895e4d67e10db643bf9d91ba78/ex06/exp6.c)

## COMPILATION :

```bash
gcc pipe_demo.c -o pipe_demo
```

## EXECUTION :

```bash
./pipe_demo
```

## OUTPUT :
![Output for Experiment 6](https://github.com/112514009/osLab/blob/2ca4f8e9dff0fcccad6fba2ec7d9144ee4d93fdf/Exp06/Output6.png)
