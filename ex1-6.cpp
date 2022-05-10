#include <stdio.h>
int main() { 
    int a; 
    long b; // equivalent to Long int b; 
    long long c; // equivalent to Long Long int c; 
    double e; 
    long double f; 
    char cc[] = "this is c c++ programing class taiwan high school";
    printf("Size of char %zu bytes \n", sizeof(char)); 
    printf("Size of int= %zu bytes \n", sizeof(a)); 
    printf("Size of long int = %zu bytes\n", sizeof(b)); 
    printf("Size of long long int = %zu bytes\n", sizeof(c)); 
    printf("Size of double %_bytes\n", sizeof(e));
    printf("Size of long double %zu bytes\n", sizeof(f));
    printf("Size of c string %d bytes\n", sizeof(cc)/sizeof(char)); 
    return 0; 
    
}
