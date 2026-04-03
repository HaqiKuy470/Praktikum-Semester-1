#include <stdio.h>

int main() {
    int a=8, b=4, x=8, y=4;
    
    printf("Nilai A = %d",a);
    printf("\nNilai ++A = %d",++a);
    printf("\nNilai A = %d",a);
    
    printf("\nNilai B = %d",b);
    printf("\nNilai --B = %d",--b);
    printf("\nNilai B = %d",b);
    
    
    printf("\n\nNilai X = %d",x);
    printf("\nNilai X++ = %d",x++);
    printf("\nNilai X = %d",x);  
    printf("\nNilai Y = %d",y);
    printf("\nNilai Y-- = %d",y--);
    
    printf("\nNilai X = %d",y); 
    
    getch();
    return 0;
}	