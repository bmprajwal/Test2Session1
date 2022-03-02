#include<stdio.h>
#include<math.h>
typedef struct _point 
{
   float x,y;
}Point;
typedef struct _line
{
   Point p1,p2;
   float distance;
}Line;
typedef struct _polygon 
{
  int n;
  Line l[100];
  float perimeter;
}Polygon;
int input_n()
{
  int n;
  printf("Enter the no. of sides of a polygon:\n");
  scanf("%d",&n);
  return n;
}
Point input_point()
{
  Point t;
  printf("Enter the coordinates\n");
  scanf("%f%f",&t.x,&t.y);
  return t;
}
float dis(Point p1,Point p2)
{
  float distance=0.0;
  distance=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
  return distance;
}
Line input_line()
{
  Line t;
  t.p1=input_point();
  t.p2=input_point();
  t.distance=dis(t.p1,t.p2);
  return t;
}
void input_n_lines(int n, Line l[])
{
  for(int i=0;i<n;i++)
    l[i]=input_line();
}
void input_polygon(int n, Polygon *p)
{
  p->n=n;
  input_n_lines(p->n,p->l);
  p->perimeter=0.0;
}
void find_perimeter(Polygon *p)
{
  for(int i=0;i<p->n;i++)
      p->perimeter+=p->l[i].distance;
}
void output(Polygon p)
{
    printf("The perimeter of the polygon with side %d is %f\n",p.n,p.perimeter);
}
int main()
{
  int n=input_n();
  Polygon p;
  input_polygon(n,&p);
  find_perimeter(&p);
  output(p);
  return 0;
}