#include <stdio.h> 
#include <math.h> 

struct point{
float x, y;
};
typedef struct point Point;

struct line{
Point p1,p2;
float distance;
};
typedef struct line Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main(){
  Line l = input_line();
  find_length(&l);
  output(l);

  return 0;
}
Point input_point(){
  Point p;
  scanf("%f%f", &p.x, &p.y);
  return p;
}
Line input_line(){
  Line t;
  printf("Enter the co-ordinates(x,y): ");
  t.p1 = input_point();
  t.p2 = input_point();

  return t;
}
void find_length(Line *l){
  l->distance = sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
}
void output(Line l){
   printf("The length of the line with coordinates\n%f,%f\n%f,%f\nis %f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}