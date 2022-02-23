#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle);

int main(){
  float x1, y1, x2, y2, x3, y3, istriangle;
  input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
  istriangle = is_triangle(x1, y1, x2, y2, x3, y3);
  output(x1, y1, x2, y2, x3, y3, istriangle);
  return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("Enter (x1,y1): ");
  scanf("%f%f", x1, y1);
  printf("Enter (x2,y2): ");
  scanf("%f%f", x2, y2);
  printf("Enter (x3,y3): ");
  scanf("%f%f", x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  int area = 0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle){
  if(istriangle)
    printf("Three points (x1=%f, y1=%f), (x2=%f, y2=%f),(x3=%f, y3=%f) forms a triangle.\n",x1, y1, x2, y2, x3, y3);
  else
    printf("Three points (x1=%f, y1=%f), (x2=%f, y2=%f),(x3=%f, y3=%f) does not form a triangle.\n",x1, y1, x2, y2, x3, y3);
}