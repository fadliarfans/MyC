#include <stdio.h>
main()
{
   double radius, keliling, luas;
   
   printf("Masukkan jari-jari lingkaran : ");
   scanf("%lf",&radius);
   
   keliling = 2 * 3.14 * radius;
   luas = 0.5 * 3.14 * radius * radius; 
   printf("\nData lingkaran\n");
   printf("Jari-jari = %8.2lf\n", radius);
   printf("Keliling  = %8.2lf\n", keliling);
   printf("Luas      = %8.2lf\n", luas);
   
   
}
