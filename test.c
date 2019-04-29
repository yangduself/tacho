#include<stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>



#define file "1.txt"

int main()
{
	int fd = -1;
	//ssize_t ret = -1;
	char buf[500] = {0};
	memset(buf, 0, sizeof(buf));
	fd = open(file, O_RDONLY);
	if ( fd<0 )
	{
		perror("open:");
		exit(-1);
	}
	
	read(fd, buf, 200);
	
	printf("content is: %s\n", buf);
	printf("the first content is: %c\n", buf[0]);
	return 0;
}