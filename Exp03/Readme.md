# PROGRAM 3 : LINUX FILE AND DIRECTORY OPERATIONS USING C SYSTEM CALLS

## AIM :
 To implement basic file and directory operations using Linux system calls such as `open()`, `read()`, `write()`, `close()`, `stat()`, `mkdir()`, `opendir()`, and `readdir()`. 

## CONTEXT :
This C program demonstrates the use of Linux system calls for performing file and directory operations.

## LINUX SYSTEM CALLS USED :

| System Call | Function |
|---|---|
| `open()` | Opens an existing file or creates a new file and returns a file descriptor. |
| `write()` | Writes data from memory to a file. |
| `read()` | Reads data from a file into a buffer. |
| `close()` | Closes an opened file descriptor and releases resources. |
| `stat()` | Retrieves information about a file, such as size, permissions, and number of links. |
| `mkdir()` | Creates a new directory with the specified permissions. |
| `opendir()` | Opens a directory stream for reading its contents. |
| `readdir()` | Reads one directory entry at a time from the opened directory. |
| `closedir()` | Closes the opened directory stream. |


## SOURCE CODE :
**File :** [file_operation.c](https://github.com/112514009/osLab/blob/e3c8c16249f6da4c9fa961975e5dca5bb5e8b001/Exp03/file_operation.c)

## COMPILATION :

```bash
gcc file_operation.c -o file_operation
```

## EXECUTION :

```bash
./file_operation
```

## OUTPUT :
![Output for Experiment 3](https://github.com/Balakrishna-0907/osLab/blob/4b613f0f6f32125e40dce4d580984758b52d3cf8/ex03/output.png)

