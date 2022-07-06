#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
   int width;
   int length;
   int perimeter;
   int area;
};

int main(){

    struct Rectangle *ptr;
    int i, n;

    printf("Enter the number of rectangle: ");
    scanf("%d", &n);
    
    ptr = (struct Rectangle*) malloc(n * sizeof(struct Rectangle));

    for(i = 0; i < n; ++i){
       printf("Enter %d length and width : ",i+1);
       scanf("%d %d", &(ptr+i)->length, &(ptr+i)->width);
   }
    printf("\n");
    printf("-----------------------\n");
    printf("Displaying Information:\n");
    for(i = 0; i < n; ++i){
        (ptr+i)->perimeter = ((ptr+i)->length + (ptr+i)->width)*2;
        (ptr+i)->area = (ptr+i)->length * (ptr+i)->width;
        printf("%d Rectangle \tPerimeter: %d\tArea: %d\n", i+1, (ptr+i)->perimeter, (ptr+i)->area);
    }
       
    return 0;
}
