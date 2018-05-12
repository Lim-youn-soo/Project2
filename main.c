#include <stdio.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <time.h>

 

struct stat stat1, stat2;

struct tm *time1, *time2;

 

void filestat1(void);

void filestat2(void);

void filetime1(void);

void filetime2(void);

void sizecmp(void);

void blockcmp(void);

void datecmp(void);

void timecmp(void);

 

int main(void)

{

   filestat1();

   filestat2();

   filetime1();

   filetime2();

   sizecmp();

   blockcmp();

   datecmp();

   timecmp();

}

 

void filestat1(void)

{
	stat("text1", &stat1);
	time1 = localtime(&stat1.st_mtime);
	printf("text1 information\n");
	printf("size:%d\n", (int)stat1.st_size);
	printf("blocks:%d\n", (int)stat1.st_blocks);
	printf("month:%d\n", time1->tm_mon+1);
	printf("date:%d\n", time1->tm_mday);
	printf("hour:%d\n", time1->tm_hour);
	printf("min:%d\n", time1->tm_min);
	printf("\n");

}

 

void filestat2(void)

{
	stat("text2", &stat2);
	time2 = localtime(&stat2.st_mtime);
	printf("text2 information\n");
	printf("size:%d\n", (int)stat2.st_size);
	printf("blocks:%d\n", (int)stat2.st_blocks);
	printf("month:%d\n", time2->tm_mon+1);
	printf("date:%d\n", time2->tm_mday);
	printf("hour:%d\n", time2->tm_hour);
	printf("min:%d\n", time2->tm_min);
	printf("\n");
}

 

void filetime1(void)

{

}

 

void filetime2(void)

{

}

 

void sizecmp(void)

{

}

 

void blockcmp(void)

{

}

 

void datecmp(void)

{

}

 

void timecmp(void)

{

}

