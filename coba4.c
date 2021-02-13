#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    scanf("%s",&name);
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
