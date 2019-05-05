Usage:
make clean
make
./tach

OS: Ubuntu 14.04
compiler: gcc version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04.3)

The code mainly includes: main.c readdata.c info.h time.c test.c 1.txt 2.txt

Basically, I would like to design a code that can mimic to compute RPM in the embedded system.

First of all, the decoded tacho data is generated by matlab, ratio of 1 and 0 is 1:9, total 10000 samples represent 10s in fsamp = 1000.
I made the 2.txt that can be read by C.
Using the pointer operation like fetching data from the data in memory which is generated by ADC. Therefore, the data is only consist of '0' and '1'(on the shaft).
Using the Linux kernel date/time to mimic clock/timer in microcontroller.

readata.c read the data in 2.txt then save them in the cache buf[10000].

info.h includes all the headers, global variable and the pre-defined value.
main.c is the main code to deal with the decoded data and compute the RPM in each time period.

Using printf to Debugging because in the coding period, I met some errors called Segmentation fault (core dumped) which is not easy to find the mistake
in the code. I use printf as the basic debugging method to locate the errors.

the DEBUG is defined in info.h, if you want to it running in the DEBUG mode, just define DEBUG, if not, just delete that line.

for the time period, using sleep(1)-> 1s, usleep(500000)-> 0.5s.

Otherwise, test.c and time.c only used for testing of time and read data.

Algorithm: just using the rad/time_period to compute the period is near 1s. I am going to use a method like weighted estimated algorithm, eg:
1 2 3 4 5 6 7 are the time point, if I want to compute #4's RPM, it can be estimated by the 1 2 3 points' RPM. However, I did not find the materials too much
on the internet.


