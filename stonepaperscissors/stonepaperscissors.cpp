include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
srand(time(0)); 
 
int userchoice,computerchoice;
int userscore = 0,computerscore = 0;
int choice;
cout<<"===== STONE PAPER SCISSORS ====="<<endl;
while (true)
{
cout<<"\n1. Stone\n2. Paper\n3. Scissors\n4. Exit\n";
cout<<"Enter your choice: ";
cin>>choice;
if (choice==4)
{
cout<<"\nFinal Score -> You: "<<userscore<< " | Computer: "<<computerscore<<endl;
if(userscore>computerscore)
cout<<"You won overall! Well played."<<endl;
else if(computerscore>userscore)
cout<<"Computer won overall. Try again!"<<endl;
else cout << "It's an overall tie!"<<endl;
break;
}
if(choice<1||choice>3)
{
cout <<"Invalid choice! Please enter 1, 2, 3 or 4."<<endl;
continue;
}
userchoice=choice;
computerchoice = (rand() % 3) + 1; 
cout << "\nYou chose: ";
if(userchoice==1) cout<<"Stone";
else if(userchoice==2) cout<< "Paper";
else cout<< "Scissors";
cout<<"\nComputer chose: ";
if (computerchoice==1) cout<<"Stone";
else if(computerchoice == 2) cout<<"Paper";
else cout<<"Scissors";
cout<<endl;
if(userchoice==computerchoice)
{
cout<<"Result: It's a Draw!"<<endl;
}
else if((userchoice==1 && computerchoice==3)||(userchoice==2&&computerchoice==1)||(userchoice==3&&computerchoice==2))
{
cout<<"Result: You Win!"<<endl;
userscore++;
}
else
{
cout<< "Result: Computer Wins!"<<endl;
computerscore++;
}
cout<<"Score -> You: "<<userscore<< " | Computer: " << computerscore<<endl;
}
return 0;
}
 
