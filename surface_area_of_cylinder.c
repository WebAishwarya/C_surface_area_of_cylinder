#include <stdio.h>

int main() 
{
    float radius = 992;
    float height = 1150;
    float surface_area_of_cylinder;
    
    surface_area_of_cylinder = 2 * 3.14 * radius * (radius + height);
    
    printf("Value of radius is : %.2f\nValue of height is : %.2f\n\n", radius,height);
    printf("Surface area of the cylinder : %.2f\n", surface_area_of_cylinder);
    
    return 0;
}
