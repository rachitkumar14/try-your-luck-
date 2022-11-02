#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;   //Try your Luck game:-  Date:- 01/11/2022
int game();
int random(int);
char continueornot(char);
int main()
{
    int n,i;
    char ch;
    srand(time(0));
    char name[30];
    cout<<"\t\t\t\t Welcome in the GAME SHOW"<<endl;
    cout<<"\t\t\t\t\tTry your luck\n";
    cout<<"Enter your name"<<endl;
    cin>>name;
     game();
}
int random(int n)
{
    n=rand()%12+1;
    return n;
}
int game()
{
    int compnumber , mynumber , money , number , n ;
    char ch;
    cout<<"Enter you number do you want to bet on (between 1 to 12 )"<<endl;
    cin>>mynumber;
    cout<<"Enter your money"<<endl;
    cin>>money;
    compnumber=random(n);
    cout<<"Computer number is : "<<compnumber<<endl;
    if(mynumber==compnumber+1 || mynumber==compnumber-1)
    {
        cout<<"Congratulations , Your money has been doubled"<<endl;
        cout<<2*money<<endl;
    }
    else if(mynumber==compnumber)
    {
        cout<<"Congratulations , YOur money has been tripled"<<endl;
        cout<<3*money<<endl;
    }
    else
    {
        cout<<"Sorry , You loose your half money"<<endl;
        cout<<money/2<<endl;
    }
    continueornot(ch);
}
char continueornot(char ch)
{
    int i;
     cout<<"Do you want to continue the game??"<<endl;
    cout<<"Type 'y' for yes and 'other key ' for no"<<endl;
    cin>>ch;
    for(i=1;i<=1;i++)
    {
    if(ch=='y')
    {
        cout<<"lets play"<<endl;
        game();
    }
    else
    {
        break;
    }
    }
}