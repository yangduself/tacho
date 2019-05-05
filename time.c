#include "info.h"


long int getCurrentTime_in_ms()  
{  
   struct timeval tv;  
   gettimeofday(&tv,NULL);  
   return tv.tv_sec * 1000 + tv.tv_usec / 1000;  
} 


int main (void)
{
	long int time = 0;
	time = getCurrentTime_in_ms();
	
	printf("time is %ld\n", time);
	
	return 0;
	
}