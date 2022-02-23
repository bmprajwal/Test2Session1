#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void eratosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main(){
  int n = input_array_size();
  int a[n];
  init_array(n, a);
  eratosthenes_sieve(n, a);
  output(n, a);
  
  return 0;
}
int input_array_size(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
void init_array(int n, int a[n]){
  for(int i=0; i<n; i++)
    a[i] = i + 2;
}
void eratosthenes_sieve(int n, int a[n]){
  for(int i=0; i<n; i++){
    if(a[i]!=0)
      for(int j=2*a[i]-2; j<n; j+=a[i])
        a[j] = 0;
  }
}
void output(int n, int a[n]){
  printf("Prime numbers upto %d are ", n);
  for(int i=0; i<n-1; i++){
    if(a[i]!=0)
      printf("%d, ", a[i]);
  }
  printf("\n");
}