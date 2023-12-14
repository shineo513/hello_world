/*#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,s=0;
	for (i=2;i<1000;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)s=s+j;
		}
		if(i==s)printf("%d\n",i);
	}
	
	return 0;
}*/

/*#include<stdio.h>
int main()
{
   int i,j,sum;
   for(i=2;i<=1000;i++)
   {
 sum=0;
 for(j=1;j<i;j++)
 {   
  if(i%j==0)//符合即j为i的因子
  sum+=j;//sum为因子之和
     
 }
    if(i==sum)//该数等于它的因子之和
 printf("%d\n",i);
   
    
   }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	double sum=0,temp;
	printf("the number of students:");
	scanf("%d",&n);
	if(n<0){
		printf("the scores:average=%.2f",sum);
	}
	else{
		for(i=0;i<n;i++){
			scanf("%lf",&temp);
			sum+=temp;
		}
		printf("the scores:average=%.2f",sum/n);
	}
		return 0;
}
