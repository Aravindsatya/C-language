
#include <stdio.h> 
#include <dirent.h> 
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define SIZE 1024

int main(void) 
{ 
    struct dirent *de;  // Pointer for directory entry 
    int flag=0,size;
    FILE *fp;
    char buffer[SIZE];
    char name[]="LsCommand.c";

    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("/home/aravind/C/TrainingatHYD"); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory" ); 
        return 0; 
    } 
    
    // for readdir() 
    while ((de = readdir(dr)) != NULL) {
          //  printf("%s\n", de->d_name); 
  	    
	    if(!strcmp(de->d_name,name)) {
		    printf("File Found\n");
		    memset(buffer,'\0',SIZE);
		    fp = fopen(de->d_name,"r");  //open the founded file in readonly mode
		    if(fp == NULL) {
			    perror("fopen");
			    return 1;
		    }
		    if((size = fread(buffer,SIZE,1,fp)) != EOF) {
				perror("fread");
				//exit(1);
		    }
		    printf("size of file is :%d\n",size);
		    write(1,buffer,SIZE);
		   // puts(buffer);
		    fclose(fp);
		    flag=1;
		    break;
	    }
	    else
		    continue;
    }
    if(flag==0)
	    printf("File not found\n");
    closedir(dr);     
    return 0; 
} 

