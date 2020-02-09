#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

int n,i,total=0,size=0,sum=0;

printf("enter the n value\n");
scanf("%d",&n);

int array[n-1];

printf("enter the elements into the array\n");

for(i=0;i<n-1;i++) {
scanf("%d",&array[i]);
}

/*for(i=0;i<n-1;i++) {
printf("%d\n",array[i]);
}*/

for(i=1;i<=n;i++){
total=total+i;
}

for(i=0;i<n-1;i++) {
sum=sum+array[i];
}

printf("The missing term is %d\n",total-sum);

}
