#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char UserName[50];
    int UserAge;
    char UserCountry[50];

    printf("Enter Your Name : ");
    fgets(UserName, sizeof(UserName), stdin);

    UserName[strcspn(UserName, "\n")] = '\0';

    printf("Enter Your Age : ");
    scanf("%d", &UserAge);

    while (getchar() != '\n')
        ;

    printf("Enter Your Country Name : ");
    fgets(UserCountry, sizeof(UserCountry), stdin);
    UserCountry[strcspn(UserCountry, "\n")] = '\0';

    printf("\n--- Details ---\n");
    printf("Name: %s\n", UserName);
    printf("Age: %d\n", UserAge);
    printf("Country: %s\n", UserCountry);

    return 0;
}
