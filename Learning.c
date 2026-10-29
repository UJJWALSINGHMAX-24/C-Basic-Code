#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Voter
{
    char name[50];
    int age;
    char country[50];
    bool canVote;
};

int main()
{
    bool VotingMachineIsRunning = true;
    struct Voter history[100];
    int voterCount = 0;

    while (VotingMachineIsRunning)
    {
        char UserName[50];
        int UserAge;
        char UserCountry[50];
        char UserContinue[10];

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

        bool eligible = false;

        if (UserAge >= 18 && strcmp(UserCountry, "Bharat") == 0)
        {
            printf("You Can Vote Now.\n");
            printf("You Choose Party For Vote.\n");
            printf("You Are Bharat Member.\n");
            eligible = true;
        }
        else if (strcmp(UserCountry, "Bharat") != 0)
        {
            printf("You Are Not A Bharat Member.\n");
        }
        else
        {
            printf("Age Minner [ Under 18 ]\n");
        }
        printf("Thankyou For Vote.\n");

        strcpy(history[voterCount].name, UserName);
        history[voterCount].age = UserAge;
        strcpy(history[voterCount].country, UserCountry);
        history[voterCount].canVote = eligible;
        voterCount++;

        printf("You Continue Voting Machine Press ( Y / N ): ");
        fgets(UserContinue, sizeof(UserContinue), stdin);
        UserContinue[strcspn(UserContinue, "\n")] = '\0';

        if (strcmp(UserContinue, "N") == 0 || strcmp(UserContinue, "n") == 0)
        {
            VotingMachineIsRunning = false;
            printf("\n--- VOTING HISTORY ---\n");
            for (int i = 0; i < voterCount; i++)
            {
                printf("%d. Name: %s | Age: %d | Country: %s | Status: %s\n",
                       i + 1,
                       history[i].name,
                       history[i].age,
                       history[i].country,
                       history[i].canVote ? "Voted" : "Not Allowed");
            }
            printf("----------------------\n");
            printf("Voting Machine Shutdown.\n");
        }
        else
        {
            printf("New User For Vote\n\n");
        }
    }

    return 0;
}