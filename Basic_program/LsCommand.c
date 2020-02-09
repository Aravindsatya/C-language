#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char* argv[])
{
	DIR *dp;
	struct dirent *ptr;
	char (*p)[20]={0},temp[20];
//	char *p[20]={0},temp[20];
	int i,j,cnt=0;
	dp=opendir(argv[1]);
	while(ptr=readdir(dp))
	{
		if(ptr->d_name[0]!='.')
		{
			p=realloc(p,(cnt+1)*20);
			strcpy(temp,ptr->d_name);
			strcpy(p[cnt++],temp);
		printf("%s\t",ptr->d_name);
		}
	}
/*	printf("\t");
	for(i=0;i<cnt;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{
				strcpy(temp,p[i]);
				memset(p[i],'\0',20);
				strcpy(p[i],p[j]);
				memset(p[j],'\0',20);
				strcpy(p[j],temp);
			}
		} 
		puts(p[i]);
	}
	for(i=0;i<cnt;i++)
		printf("%s\t",p[i]);
*/	printf("\n");
}
