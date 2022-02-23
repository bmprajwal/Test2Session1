#include <stdio.h> 

int input_number();
int is_prime(int n);
void output(int n, int is_prime);

int main(){
  int n = input_number();
  int isprime = is_prime(n);
  output(n, isprime);

  return 0;
}
int input_number(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
int is_prime(int n){
  int count = 0;
  for(int i=1; i<=n;i++){
    if(n%i==0)
    count++;
  }
   return count;
}
void output(int n, int isprime){
  if(isprime<=2)
    printf("%d is a prime number.\n",n);
  else
    printf("%d is not a prime number.\n",n);
}