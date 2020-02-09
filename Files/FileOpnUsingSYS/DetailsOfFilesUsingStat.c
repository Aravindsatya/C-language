/*
 *
 * Program is to check the all informationn of a file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>


int main(void) {

	struct stat ptr;
	
	int fd; 
	fd = stat("a.txt",&ptr);
	if(fd == -1) {
		perror("fd");
		exit(1);
	}
	else {
		printf("Id Num :%ld\n",ptr.st_dev);
		printf("Inode Num :%ld\n",ptr.st_ino);
		printf("Mode :%ld\n",(long)ptr.st_mode);
		printf("Num of heardLinks :%ld\n",ptr.st_nlink);
		printf("user Id :%ld\n",(long)ptr.st_uid);
		printf("group Id :%ld\n",(long)ptr.st_gid);
		printf("device Id :%ld\n",ptr.st_rdev);
		printf("Total Size of file :%ld\n",ptr.st_size);
		printf("Block size :%ld\n",ptr.st_blksize);
		printf("Number of 512Blocks :%ld\n",ptr.st_blocks);

		printf("***********************************\n");
		printf("Last status change:       '%s\n", ctime(&ptr.st_ctim.tv_sec));
                printf("Last file access:         %s\n", ctime(&ptr.st_atime));
                printf("Last file modification:   %s\n", ctime(&ptr.st_mtime));

	}

	return 0;
}
