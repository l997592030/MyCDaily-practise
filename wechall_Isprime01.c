#include<stdio.h>
#include<math.h>
/*寻找前两个比100万大的素数，并要求该数各个数位上的数之和也为素数*/

/*函数名：判断素数*/ 
int Isprime(m)
{
	int div;
	int flag = 1;
	if(m == 1) flag = 0;
	for(div = 2;div<=sqrt(m);div++)
	{
		if(m%div == 0){
			flag = 0;
			break; 
		}
	}
	return flag;
 } 
 /*函数名：求各个数位上数之和*/
 int Sum(m)
 {
 	int f = m;
 	int sum = 0;
 	while(f>0){
 	sum+=(f%10);
 	f/=10;	
	}
 	return sum;
  } 
 /*主函数*/ 
int main(void)
{
	int x;//当前数 
	int n;//找到的素数个数
	n = 1,x = 1000000;
	while(n<=2){
		if(Isprime(x)&&Isprime(Sum(x)))
		{
			printf("%d",x);
			n++;
		}
		x++;
	} 
 } 
