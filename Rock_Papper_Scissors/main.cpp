#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

int main()
{
    std::cout<<"##################################################\n"
    <<"#                                                #\n"
    <<"#         Welcome to Rock, Papper, Scissors      #\n"
    <<"#         You vs advanced AI                     #\n"
    <<"#                                                #\n"
    <<"##################################################\n";
    srand(time(NULL));
    int human_score=0;
    int bot_score=0;
    int b,h;
    std::cout<<"Choose: \n";
    std::cout<<"1. Papper\n2. Rock\n3. Scissors\n\n";
    std::cout<<"\nYOUR SCORE: "<<human_score<<"\nBOT SCORE: "<<bot_score<<"\n\n";





    while(human_score < 3 && bot_score < 3)
    {
    b = std::rand()%3+1;
    std::cout<<"Choose: ";
    std::cin>>h;
    if(std::cin.fail()|| h<1 || h > 3)
    {
        std::cin.clear(std::cin.rdstate() & std::ios::failbit);
        break;
    }


    std::cout<<"\n";
    switch(h)
    {
        case 1:
        {
            std::cout<<"YOU: "<<"Papper\n";
            break;
        }
        case 2:
        {
            std::cout<<"YOU: "<<"Rock\n";
            break;
        }
        case 3:
        {
            std::cout<<"YOU: "<<"Scissors\n";
            break;
        }
        default:
            {
                break;
            }
    }
    switch(b)
    {
        case 1:
        {
            std::cout<<"BOT: "<<"Papper\n\n";
            break;
        }
        case 2:
        {
            std::cout<<"BOT: "<<"Rock\n\n";
            break;
        }
        case 3:
        {
            std::cout<<"BOT: "<<"Scissors\n\n";
            break;
        }
        default:
            {
                break;
            }
    }
    if(h == 1 && b == 2)
    {
        human_score ++;
        std::cout<<"\nYou score! :D\n";
    }
    else if(b == 1 && h == 2)
    {
        bot_score++;
        std::cout<<"\nBot score! :(\n";
    }
    else if(h == 2 && b == 3)
    {
        human_score++;
        std::cout<<"\nYou score! :D\n";
    }
    else if(b == 2 && h == 3)
    {
        bot_score++;
        std::cout<<"\nBot score! :(\n";
    }
    else if(h == 3 && b == 1)
    {
        human_score++;
        std::cout<<"\nYou score! :D\n";
    }
    else if(b == 3 && h == 1)
    {
        bot_score++;
        std::cout<<"\nBot score! :(\n";
    }
    else
    {
        std::cout<<"\nDraw!\n";
    }


    Sleep(2000);
    system("cls");
    std::cout<<"##################################################\n"
    <<"#                                                #\n"
    <<"#         Welcome to Rock, Papper, Scissors      #\n"
    <<"#         You vs advanced AI                     #\n"
    <<"#                                                #\n"
    <<"##################################################\n";
    std::cout<<"Choose: \n";
    std::cout<<"1. Papper\n2. Rock\n3. Scissors\n\n";
    std::cout<<"\nYOUR SCORE: "<<human_score<<"\nBOT SCORE: "<<bot_score<<"\n\n";

}
    system("cls");
    std::cout<<"##################################################\n"
    <<"#                                                #\n"
    <<"#         Welcome to Rock, Papper, Scissors      #\n"
    <<"#         You vs advanced AI                     #\n"
    <<"#                                                #\n"
    <<"##################################################\n";
    std::cout<<"Choose: \n";
    std::cout<<"FINAL SCORE:";
    std::cout<<"\nYOUR SCORE: "<<human_score<<"\nBOT SCORE: "<<bot_score<<"\n\n";
    if(human_score == 3)
    {
        std::cout<<"YOU WON THE GAME! :D\n";

    }
    else if(human_score != 3 && bot_score != 3)
    {
        human_score = -1000;
        system("cls");
    std::cout<<"##################################################\n"
    <<"#                                                #\n"
    <<"#         Welcome to Rock, Papper, Scissors      #\n"
    <<"#         You vs advanced AI                     #\n"
    <<"#                                                #\n"
    <<"##################################################\n";
    std::cout<<"Choose: \n";
    std::cout<<"FINAL SCORE:";
    std::cout<<"\nYOUR SCORE: "<<human_score<<"\nBOT SCORE: "<<bot_score<<"\n\n";
        std::cout<<"YOU HAVE TO ENTER NUMBERS(1 or 2 or 3) IDIOT!\nYOU LOSE THE GAME! IT'S WALKOVER!";
    }
    else
    {
        std::cout<<"YOU LOSE THE GAME! :(\n";
    }
    Sleep(5000);
    return 0;
}
