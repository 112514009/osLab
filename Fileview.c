#include <stdio.h>
#include <stdlib.h> 

int main() {     
    system("echo 'Linux Lab Program' > sample.txt");

    printf("cat:\n");    
    system("cat test.txt");

    printf("\nhead:\n");  
    system("head test.txt");

    printf("\ntail:\n");   
    system("tail test.txt");

    printf("\nmore:\n");   
    system("more test.txt");
     
    printf("\nless:\n");   
    system("less test.txt");

    return 0; 
} 