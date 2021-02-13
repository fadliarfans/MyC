#include<stdio.h>
#define phi 3.14
main()
{
float jari,luas,keliling; 
  printf("Masukanjari-jari lingkaran = "); 
  scanf("%f",&jari);
  luas=phi*jari*jari;  
  keliling=2*phi*jari;
  printf("Luas lingkaran = %f \n",luas);
  printf("Keliling lingkaran = %f \n",keliling);
}
