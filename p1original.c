#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
void find_distance(float x1, float y1, float x2, float y2, float *dist);
void output(float x1, float y1,float x2, float y2, float dist);

int main(){
  float x1, x2, y1, y2, dist;
  input(&x1, &y1, &x2, &y2);
  find_distance(x1,y1,x2, y2,&dist);
  output(x1,y1,x2, y2,dist);

  return 0;
}
void input(float *x1, float *y1, float *x2, float *y2){
  printf("Enter x1 ,y1, x2, y2: ");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *dist){
  *dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
void output(float x1, float y1,float x2, float y2, float dist){
  printf("The distance between point(%f, %f) and (%f, %f) is %f\n",x1,y1,x2,y2,dist);
}