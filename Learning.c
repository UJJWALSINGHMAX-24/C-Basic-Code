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
        char UserContinue[2];

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

        if (UserAge >= 18 && UserCountry == "Bharat")
        {
            printf("You Can Vote Now.\n");
            printf("You Choose Party For Vote.\n");
            printf("You Are Bharat Member.\n");
        }
        else if (UserCountry != "Bharat")
        {
            printf("You Are Not A Bharat Member.\n");
        }
        else
        {
            printf("Age Minner [ Under 18 ]");
        }
        printf("Thankyou For Vote.\n");

        printf("You Continue Voting Machine Press ( Y / N ). \n");

        if (UserContinue == "N" || UserContinue == "n")
        {
            VotingMachineIsRunning = false;
            printf("Voting Machine Shutdown.");
        }
        else
        {
            printf("New User For Vote\n");
        }
    }

    return 0;
}
