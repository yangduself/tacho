//main, implementation of tach algrothim

#include "info.h"
#define DEBUG
int fsamp = 1000; //sample rate
//char buf[2000];


int main (void)
{
	float t_base = 0;
	float t_period = 0;
	//float t_period; //we use each 0.01s as the point to estimate RPM
	//int i = 20; //second 0.01s
	t_base = (float)1/(float)fsamp;
	//t_period = 10 * t_base;
	time_t old_time = 0;
	time_t new_time = 0;
    
	readdata(file);
	//one option:multi-thread for accuract computation
	//parent thread compute time period
	//child thread compute how many '1' we got
	// second option: just use one thread
	
	old_time = time(NULL);
	usleep(1000);
	new_time = time(NULL);
	
	
	
	#ifdef DEBUG
	printf("content is: %s\n", buf);
	printf("the first content is: %c\n", buf[0]);
	printf("t_base is: %f\n", t_base);
	printf("t_period is: %f\n", t_period);
	printf("old_time is:%d.\n", (int)old_time);
	#endif
	
	return 0;
}