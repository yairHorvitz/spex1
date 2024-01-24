int isPrime(int x)
{
    if (x<1){return 0;}
    if(x==1){return 1;}
for(int i=2;i<x;i++)
{   
if(x%i==0){return 0;}
    return 1;
}
}


int isStrong(int x)
{
int sum =0;
int dig=0;
int factorialDig=1;
while(x>=1){
    dig =x%10;
    for (int  i = 1; i <= dig; i++){factorialDig=factorialDig*i;}
    sum=sum+factorialDig;
    if(sum>x){return 0;}
    x= x/10;
}
if(sum==x)
return 1;
else return 0;
}