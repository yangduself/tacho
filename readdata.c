//assuming we have the data from tachmometer which is digital data
//the data is saved in the 1.txt
//like the documentation mentions, the format of decoder output is 1001010101010001
#include "info.h"

//char buf[2000];
int readdata(char* filename)
{
	
	//ssize_t ret = -1;
	
	int fd = -1;
	
	memset(buf, 0, sizeof(buf));
	fd = open(file, O_RDONLY);
	if (fd<0)
	{
		perror("open:");
		exit(-1);
	}
	
	read(fd, buf, 10000);
	
	//printf("content is: %s\n", buf);
	//printf("the first content is: %c\n", buf[0]);
	//return 0;
}
/*
int main (void)
{
	readdata(file);
	return 0;
	
}
*/