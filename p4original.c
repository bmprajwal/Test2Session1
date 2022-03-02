//Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n = input();
  int fibo = find_fibo(n);
  output(n, fibo);

  return 0;
}
int input(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
int find_fibo(int n){
  int a = 0, b = 1, c = 0;
  if (n==1)
    return a;
  else if(n==2)
    return b;
  else if(n<=0)
    return -1;
    
  else{
    for(int i = 2; i<n; i++){
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  }
}
void output(int n, int fibo){
  if(fibo!=-1)
   printf("The %dth fibonacci number is %d.\n", n, fibo);
  else 
   printf("Invalid input!\n");
}