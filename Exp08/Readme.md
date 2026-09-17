# PROGRAM 8 : CPU SCHEDULING ALGORITHMS

## AIM :
To simulate CPU scheduling algorithms (FCFS, SJF, Priority, Round Robin) and compare their performance. Students can evaluate waiting time, turnaround time, and scheduling efficiency (Process management)

## CONTEXT :
This program demonstrates the First Come, First Served (FCFS) CPU scheduling algorithm, one of the simplest process scheduling algorithms used by operating systems. The process that arrives first is allocated the CPU first and runs until completion (non-preemptive scheduling).

## CONCEPTS IN FCFS ALGORITHM

| Term | Meaning | Formula |
|---|---|---|
| Arrival Time (AT) | Time at which a process enters the ready queue | Given as input |
| Burst Time (BT) | CPU time required by a process | Given as input |
| Start Time (ST) | Time at which the process starts execution | `ST = max(Previous CT, AT)` |
| Completion Time (CT) | Time at which a process finishes execution | `CT = ST + BT` |
| Turnaround Time (TAT) | Total time spent by a process in the system | `TAT = CT - AT` |
| Waiting Time (WT) | Time spent waiting in the ready queue | `WT = TAT - BT` |
| Average Turnaround Time | Average turnaround time of all processes | `ΣTAT / n` |
| Average Waiting Time | Average waiting time of all processes | `ΣWT / n` |

## SOURCE CODE :
**File :** [CSAL.c](https://github.com/112514009/osLab/blob/5cd23753f8b6d7b072af1b3ae4736b676ec0362b/Exp08/CSAL.c)

## COMPILATION :

```bash
gcc CSAL.c -o CSAL
```

## EXECUTION :

```bash
./CSAL
```

## OUTPUT :
![Output for Experiment 8](https://github.com/112514009/osLab/blob/0dce2d8f68ce341b0c5d9fc95b933874b5ac2d49/Exp08/Output8.png)
