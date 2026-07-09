# include<stdio.h>
#include<math.h>
int main(){
float a,b,result;
char op;
printf("Enter two numbers:");
scanf("%f%f",a,b);
switch(op){
case1:result=a+b
printf("result=%.2f);
break;
case2:result=a-b
printf("result=%.2f");
break;
case3:result=a*b
printf("result=%.2f");
break;
case4:result=a\b
printf("result=%.2f");
break;
case5:result=a%b
printf("result=%.2f");
break;
case6:result=sqrt(a)
printf("result=%.2f");
break;
case7:result=pow(a,b)
printf("result=%.2f");
break;
case8:int i,n,fact=1;
scanf("%d",n);
for(i=1;i<=n;i++){
fact=fact*i;
result=fact;
}
printf("result=%.2f");
break;
default: printf("Invalid");
}
return0;
}
