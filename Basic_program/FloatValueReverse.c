/*----------------------------------------------------------------------------------------------------------

 Aravind Maddala   dvsaravindd@gmail.com       cell:9959989615

PURPOSE:

	-this programe mainly deals with reverse of given float value.The input is taken as string and converted to float using aToFloat function  and then reversed the value to get the desired output 

--------------------------------------------------------------------------------------------------------*/	

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//it counts the no of digits before . operator in the given value 
int countNoOfDigits(char *p) {
	int i,count=0;
	for(i=0;i<strlen(p);i++) {
		if(p[i]!=46) {
			count++;
		}
		if(p[i]==46) {
			break;
		}
	}
	return count;
}
//it converts the string the float 

float aToFloat(char *p)
{
	int i,a,cnt=0,int_value=0,count,s=1;

	float b=0,d=0.1,float_value=0;

	a=atoi(p);

	count=countNoOfDigits(p);
	count=pow(10,count);

	for(i=0;i<strlen(p);i++)
	{
		if(p[i]!=46 && cnt<1) {

		float_value+=(float) (p[i]-48)/count;
		count=count/10;
		}
		 if(p[i]==46)
		{
			cnt++;
			i++;
		}
		if(cnt==1)
		{
			int_value=int_value+(p[i]-48)*s;
			b=b+(p[i]-48)*d;
			d=d*0.1;
			s=s*10;
		}

	}
	printf("entered  float value  is   %f\n",a+b);
	return int_value+float_value;
}
	
int main()
{
	char str[20];
	float result;
	printf("enter a float value \n");
	scanf("%s",str);
	printf("\n");
	result=aToFloat(str);
	printf("\n");
	printf("the value of float after reverse is %f\n",result);
	return 0;

}
/***************************output****************************
 
enter a float value
456.987

entered  float value  is   456.987000

the value of float after reverse is 789.654
**************************************************************/

