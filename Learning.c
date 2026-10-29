#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    bool VotingMachineIsRunning = true;

    while (VotingMachineIsRunning)
    {
        char UserName[50];
        int UserAge;
        char UserCountry[50];
        char UserContinue[10];

        printf("----------------------------\n");
        printf("       VOTING MACHINE       \n");
        printf("----------------------------\n\n");

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

        if (UserAge >= 18 && strcmp(UserCountry, "Bharat") == 0)
        {
            printf("\nYou Can Vote Now.\n");
            printf("You Choose Party For Vote.\n");
            printf("You Are Bharat Member.\n\n");
        }
        else if (strcmp(UserCountry, "Bharat") != 0)
        {
            printf("\nYou Are Not A Bharat Member.\n");
        }
        else
        {
            printf("Age Minner [ Under 18 ]\n");
        }
        printf("\nThankyou For Vote.\n");

        printf("\nYou Continue Voting Machine Press ( Y / N ): ");
        fgets(UserContinue, sizeof(UserContinue), stdin);
        UserContinue[strcspn(UserContinue, "\n")] = '\0';

        if (strcmp(UserContinue, "N") == 0 || strcmp(UserContinue, "n") == 0)
        {
            VotingMachineIsRunning = false;
            printf("Voting Machine Shutdown.\n");
        }
        else
        {
            printf("\nNew User For Vote\n");
        }
    }

    return 0;
}