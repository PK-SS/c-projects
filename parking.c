#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();

int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;
void main()
{
    while(1){
  // clrscr();
    switch (Menu())
    {
    case 1:
        Bus();
        break;
    case 2:
        Cycle();
        break;
    case 3:
        Riksha();
        break;
    case 4:
        ShowDetail();
        break;
    case 5:
        Delete();
        break;
        case 6:
        exit(0);
    default:
        printf("\ninvalid choice");
    }
    getch();
    }
}
int Menu()
{
    int ch;
    printf("\n1. enter bus:");
    printf("\n2. enter cycle:");
    printf("\n3. enter riksha:");
    printf("\n4. show status:");
    printf("\n5. delete data:");
    printf("\n6. exit:");
    printf("\nenter your choice:\n");
    scanf("%d", &ch);
    return (ch);
}
void Delete()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
    count = 0;
}
void ShowDetail()
{
    printf("\nnumber of bus=%d", nob);
    printf("\nnumber of cycle=%d", noc);
    printf("\nnumber of riksha=%d", nor);
    printf("\ntotal number of vehicle=%d", nob + noc + nor);
    printf("\ntotal gain amount=%d", amount);
}
void Riksha()
{
    printf("\nentry successful");
    nor++;
    amount = amount + 50;
    count++;
}
void Cycle()
{
    printf("\nentry successful");
    noc++;
    amount = amount + 20;
    count++;
}
void Bus()
{
    printf("\nentry successful");
    nob++;
    amount = amount + 100;
    count++;
}