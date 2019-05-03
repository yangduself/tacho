#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h> 
#define file "2.txt" //digital data

#define DEBUG
int readdata(char* filename);
long int getCurrentTime_in_ms(); 
char buf[2000];
