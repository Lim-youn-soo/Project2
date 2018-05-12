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

}

 

void filestat2(void)

{

}

 

void filetime1(void)

{

}

 

void filetime2(void)

{

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

}

 

void timecmp(void)

{

}
