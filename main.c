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
        stat("text1", &stat1);
        time1 = localtime(&stat1.st_mtime);
        printf("text1's time info: %d.%d %d:%d\n ",time1->tm_mon+1, time1->tm_mday, time1->tm_hour, time1->tm_min);
}

void filetime2(void)
{
        stat("text2", &stat2);
        time2 = localtime(&stat2.st_mtime);
        printf("text2's time info: %d.%d %d:%d\n",time2->tm_mon+1, time2->tm_mday, time2->tm_hour, time2->tm_min);


}
 

void sizecmp(void)

{
         int size1, size2;
		          stat("text1", &stat1);
		         stat("text2", &stat2);
		  
		         size1=(int)stat1.st_size;
		         size2=(int)stat2.st_size;
		         printf("size compare\n");
		 
		         if(size1>size2)
		             printf("text1 is bigger\n");
		         else if(size1==size2)
		             printf("sizes are equal\n");
		         else
		             printf("text2 is bigger\n");        
				 return;


}

 

void blockcmp(void)

{
		int size1, size2;
		stat("text1", &stat1);
		stat("text2", &stat2);
					       
		size1=(int)stat1.st_blocks;
		size2=(int)stat2.st_blocks;
		printf("block compare\n");
									   
	    if(size1>size2)
			printf("text1 is bigger\n");
		else if(size1==size2)
			printf("sizes are equal\n");
		else
			printf("text2 is bigger\n");
		return;
}

 

void datecmp(void)

{
		struct tm* ptr1;
		struct tm* ptr2;
		time_t time1;
		time_t time2;
						
		stat("text1", &stat1);
		stat("text2", &stat2);

		time1=stat1.st_mtime;
		time2=stat2.st_mtime;

		ptr1=localtime(&time1);
		ptr2=localtime(&time2);
		printf("time compare\n");

		if(ptr1->tm_mon > ptr2->tm_mon)
			printf("text1 is early\n");
		else if(ptr1->tm_mon < ptr2->tm_mon)
			printf("text2 is early\n");
		else
		{
			if(ptr1->tm_mday > ptr2->tm_mday)
				printf("text1 is early\n");
			else if(ptr1->tm_mday < ptr2->tm_mday)
				printf("text2 is early\n");
			else
				printf("same time\n");
		}
		return;
}

void timecmp(void){ 
        int time2_hour = time2->tm_hour;
        int time2_min = time2->tm_min;


        stat("text1", &stat1);
        time1 = localtime(&stat1.st_mtime);
        int time1_hour = time1->tm_hour;
        int time1_min = time1->tm_min;


        printf("\ntime compare\n");

        if(time1_hour < time2_hour){
                printf("text2 is early\n");
        }
        else if(time1_hour > time2_hour){
                printf("text1 is early\n");
        }
        else{
                if(time1_min < time2_min){
                        printf("text2 is early\n");
                }
                else if(time1_min > time2_min){
                        printf("text1 is early\n");
                }
                else{
                        printf("same time\n");
                }
        }
}
