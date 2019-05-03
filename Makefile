
CC = gcc

	

all : main.c readdata.c 
	$(CC)  main.c  readdata.c -o tach
	

clean:
	rm tach -rf
