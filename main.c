#include <stdio.h>
#include <stdlib.h>
#include "geometry.h"

#define AreaCube(a) (6*(a)*(a))
#define AreaSphere(radius) (4*PI*(radius)*(radius))
#define AreaCone(r,l) (PI*(r)*(r+l))

int main(int argc, char *argv[])
{
    if (argc<2)
    {
        printf ("Not enough arguments");
        return 1;
    }
    int n=atoi(argv[1]);
    for (int i=0;i<n;i++)
    {
        printf ("Choose:  1- Triangle, 2- Circle, 3- Cube, 4- Sphere, 5- Cone.");
        int choice;
        float a,b;
        float area;
        scanf("%d", &choice);
        switch (choice){
        case 1:
            scanf("%f%f", &a, &b);
            area=AreaTriangle(a, b);
            break;
        case 2:
            scanf ("%f", &a);
            area=AreaCircle(a);
            break;
        case 3 :
            scanf ("%f", &a);
            area=AreaCube(a);
            break;
        case 4:
            scanf ("%f", &a);
            area=AreaSphere(a);
            break;
        case 5:
            scanf ("%f%f", &a, &b);
            area=AreaCone(a,b);
            break;
        default:
            printf("Error, pick a valid choice");
            break;
        }
        printf ("%f", area);
    }
    return 0;
}
