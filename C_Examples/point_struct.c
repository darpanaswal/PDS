#include <stdio.h>
#include<math.h>

typedef struct{
    float x;
    float y;
}point;

double distance(point a,point b)
{
    double d;
    d = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    return d;
}

point middle(point a,point b)
{
    point d;
    d.x = (a.x+b.x)/2;
    d.y = (a.y+b.y)/2;
    return(d);
}

int main()
{
    point a,b;

    printf("Enter coordinates of point a(x and y): ");
    scanf("%f%f", &a.x,&a.y);

    printf("Enter coordinates of point b(x and y): ");
    scanf("%f%f", &b.x,&b.y);

    printf("\nDistance between points is %f\n", distance(a,b));

    printf("\nThe middle point is (%f,%f)\n", middle(a,b).x,middle(a,b).y);

    return 0;
}
