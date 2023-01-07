#include <stdio.h>
#include <conio.h>
int you, computer;
char ch;
menu()
{
    printf("\n1.select Rock");
    printf("\n2.select Paper");
    printf("\n3.select scissor");
    printf("\n4.Exit");
    printf("\nEnter your choice");
    scanf("%d", &ch);
    return (ch);
}
void setup()
{
label:
    computer = rand() % 4;
    if (computer == 0)
        goto label;
    you = menu();
}
void MakeLogic()
{
    switch (you)
    {
    case 1:
        if (computer == 1)
        {
            printf("\nGame Draw");
            printf("\nyou=rock\nComputer=rock");
        }
        else if (computer == 2)
        {
            printf("\nComputer Won");
            printf("\nyou=rock\nComputer=paper");
        }
        else
        {
            printf("\nYou Won");
            printf("\nyou=rock\ncomputer=scissors");
        }
    case 2:
        if (computer == 2)
        {
            printf("\nYou Won");
            printf("\nyou=paper\nComputer=rock");
        }
        else if (computer == 2)
        {
            printf("\nGame Draw");
            printf("\nyou=paper\nComputer=paper");
        }
        else
        {
            printf("\nComputer Won");
            printf("\nyou=paper\ncomputer=scissor");
        case 3:
            if (computer == 3)
            {
                printf("\nComputer Won");
                printf("\nyou=scissors\nComputer=rock");
            }
            else if (computer == 2)
            {
                printf("\nYou Won");
                printf("\nyou=scissors\nComputer=paper");
            }
            else
            {
                printf("\nGame Draw");
                printf("\nyou=scissors\ncomputer=scissors");
            case 4:
                exit(0);
            default:
                printf("\nInvalid user choice");
            }}
        }}

        int main(){
            while (1)
            {
                system("cls");
                setup();
              MakeLogic();
                getch();
            }

            return 0;
        }
