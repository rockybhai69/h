#include<stdio.h>
#include<stdlib.h>
int main(){
int i,p,p1,p2,p3,sd[10],rcvd[10];
printf("Enter 4 bits one by one\n");
scanf("%d",&sd[0]);
scanf("%d",&sd[1]);
scanf("%d",&sd[2]);
scanf("%d",&sd[4]);
sd[6] = sd[0]^sd[2]^sd[4];
sd[5] = sd[0]^sd[1]^sd[4];
sd[3] = sd[0]^sd[1]^sd[2];
printf("Data sent : ");
for(i=0;i<7;i++)
printf("%d", sd[i]);
printf("\nEnter received data one bit by 1\n");
for(i=0;i<7;i++)
scanf("%d",&rcvd[i]);
p1 = rcvd[6]^rcvd[0]^rcvd[2]^rcvd[4];
p2 = rcvd[5]^rcvd[0]^rcvd[1]^rcvd[4];
p3 = rcvd[3]^rcvd[0]^rcvd[1]^rcvd[2];
p = 4*p3+2*p2+p1;
if(p==0){
printf("No error\n");
}
else{
printf("Error at position %d\n",(7-p+1));
printf("Data sent : ");
for(i=0;i<7;i++)
printf("%d", sd[i]);
printf("\nData received : ");
for(i=0;i<7;i++)
printf("%d", rcvd[i]);
rcvd[7-p] = 1-rcvd[7-p];
printf("\nCorrected Data : ");
for(i=0;i<7;i++)
printf("%d", rcvd[i]);
printf("\n");
}
}
