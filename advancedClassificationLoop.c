#define maxSize 10
int isPolindrom(int x)
{
int arr1[maxSize];
int arr2[maxSize]; 
int count=0;
int copyX=x;
while (x>0)
{
    count++;
    copyX/10;
}

for(int i=0;i<maxSize;i++)
{
arr1[i]=x%10;
arr2[count-i]=x%10;
}
for(int i=0;i<maxSize;i++)
{
if(arr1[i]!=arr2[i]){return 0;}
}
return 1;






}
 


int isArmStrong(int x)
{
int countDigits=0;
int sum=0;
int copyX=x;
int copyX2=x;
int dig=0;
while (x>0)
{
    countDigits++;
    copyX/10;
}
int copyCountDigits=countDigits;
while (copyCountDigits>=0)
{
   dig =copyX2%10;
   sum = sum+dig^countDigits;
   if(x<sum){return 0;}
   copyX2/10;
   copyCountDigits--;
}
if(sum==x){return 1;}
else {return    0;}


}
