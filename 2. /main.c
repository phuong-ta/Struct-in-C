#include <stdio.h>
 
// wrap the multiple values into a struct
struct Tuple {
    int a, b;
    char c;
};
 
int word(){
    char x;
    printf("enter a word ");
    scanf("%c",&x);
    return x;
} 
// Function to return multiple values using struct
struct Tuple initialize()
{   
    int x ;
    int y ;
    char z = word();
    printf("enter first and second number ");
    scanf("%d %d",&x, &y);
    
    struct Tuple tuple = { x, y, z };
    return tuple;
}
 
// Return multiple values from a function in C
int main(void)
{
    int a, b;
    char c;
 
    struct Tuple tuple = initialize();
    a = tuple.a;
    b = tuple.b;
    c = tuple.c;

    printf("a = %d, b = %d, c = %c\n", a, b, c);
 
    return 0;
}