#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <time.h>
using namespace std;
int run(string,string);
int main()
{
    int scissor = 1, paper = 2, rock = 3, cmp_ch = 0, result;
    string ch, computer;
    cout<<endl;
    cout <<"scissor" << endl;
    cout << "paper" << endl;
    cout << "rock" << endl;
    cout<<"exit"<<endl<<endl;
    do{
    cout << "Choose your choice: ";
    
    cin >> ch;

    srand(time(0));
    cmp_ch = rand() % 100;
    
    if (cmp_ch < 33)
    {
        computer = "scissor";
    }
    else if (cmp_ch > 33 && cmp_ch < 66)
    {
        computer = "paper";
    }
    else
    {
        computer = "rock";
    }
    result = run(computer, ch);

   if(ch!="exit")
   {
     if (result == -1)
    {
        cout << "You choose " << ch << " and computer choose " << computer << endl;
        cout << "Game withdraw"<<endl;
    }
    else if (result == 0)
    {
        cout << "You choose " << ch << " and computer choose " << computer << endl;
        cout << "Computer win"<<endl;
    }
    else
    {
        cout << "You choose " << ch << " and computer choose " << computer << endl;
        cout << "You win"<<endl;
    }
   }
   else
   {
    cout<<"Successfully exit";
   }
    }while(ch!="exit");
    return 0;
}

int run(string cmp_ch,string ch)
{
    // rock vs paper
    if (cmp_ch == "rock" && ch == "paper" || cmp_ch == "scissor" && ch == "rock" || cmp_ch == "paper" && ch == "scissor")
    {
        return 1;
    }
    else if (cmp_ch == "paper" && ch == "rock" || cmp_ch == "rock" && ch == "scissor" || cmp_ch == "scissor" && ch == "paper")
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
