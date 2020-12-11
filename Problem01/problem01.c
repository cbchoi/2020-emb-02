#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int count_text(char* path)
{
	/* 




	Put your code here 




	Hint 1) apply count_text recursively
	Hint 2) exclude directory ".", "..".
	        Use this code. 
	        if (strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, ".."))
			{
					
			}

	*/
	
	printf("%s: Total %d characters are found.\n", path, count);
	return count;
}

int main()
{
	count_text("./data");
	return 0;
}