#include <stdio.h> 
int main() { 
int num, d1, d2, d3, d4; 
printf("Enter a 4-digit number: "); 
scanf("%d", &num); 
d4 = num % 10;            
d3 = (num / 10) % 10;     
d2 = (num / 100) % 10;    
d1 = num / 1000;          
if ((d1 + d4) == (d2 * d3)) 
printf("Magic Number"); 
else 
printf("Not a Magic Number"); 
return 0; 
}
