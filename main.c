//main, implementation of tach algrothim

#include "info.h"
#define DEBUG
int fsamp = 1000; //sample rate
//char buf[2000];


int main (void)
{
	float t_base = 0;
	long int t_period = 0;
	//float t_period; //we use each 0.01s as the point to estimate RPM
	//int i = 20; //second 0.01s
	t_base = (float)1/(float)fsamp;
	
	long int old_time = 0;
	long int new_time = 0;
    int count = 0;
	int i = 0;
	int rpm;
	char *p = NULL;
	
	
	p = buf;
	//*q = '1';
	readdata(file);
	
	//one option:multi-thread for accuract computation
	//parent thread compute time period
	//child thread compute how many '1' we got
	// second option: just use one thread
	#ifdef DEBUG
	printf("content is: %s\n", buf);
	printf("the first content is: %c\n", buf[1]);
	printf("t_base is: %f\n", t_base);
	
	#endif
	
	while(1)
	{
			old_time = getCurrentTime_in_ms();
			printf("before sleep.\n");
			sleep(1);
			printf("after sleep.\n");
			new_time = getCurrentTime_in_ms();
			printf("new time is %ld\n", new_time);
			t_period = (new_time - old_time);
			printf("t_period is %ld\n", t_period);
			for(i=0;i<t_period;i++)
			{
					if('1' == *p)
					{
						count++;
					}
			
				  p++;
			}
			
			printf("count is %d\n", count);
			printf("finish cycle.\n");
			rpm = ((float)count/(float)t_period)*6000;
			
			#ifdef DEBUG
			printf("RPM is: %d\n", rpm);
			#endif
			count = 0;
			
	}		
			return 0;
			
}


long int getCurrentTime_in_ms()  
{  
   struct timeval tv;  
   gettimeofday(&tv,NULL);  
   return tv.tv_sec * 1000 + tv.tv_usec / 1000;  
}  
