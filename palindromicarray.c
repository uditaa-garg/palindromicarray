#include<stdio.h>
#include<stdlib.h>

int ispalindrome(int x){
int s=0,m;
m = x;
    while(m>0){
       s = s*10 +(m%10);
       m = m/10;
    }
     if(x==s){
    
     return 1;
   }
   else{ 
    return 0;
   }

}
int main(){
    int n,*a,i,count,m,s=0,sum;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("enter the elements: ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);

    }
   
   for(i=1;i<=n;i++){
      count = ispalindrome(a[i]);
      sum = sum +count;
   }
   if(sum==n){
    printf("palindromic");

   }
   else{
    printf("not palindromic");
   }
  printf("\n");
  printf("no of palindromic nos are %d",sum);
  

}
