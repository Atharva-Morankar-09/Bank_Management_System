
 #include <iostream>
 #include <stdio.h>
 #include <conio.h>
 using namespace std;

 class bank 
 {
    
     char name[100], address[100], type[100];
     int amount;
  public:
     void open_account();
     void deposit_money();
     void withdraw_money();
     void display_account();
 };

 void bank::open_account()
 {
     cout<<"Enter your Full Name - ";
     cin>>name;
     cout<<"\nEnter your Address - ";
     cin>>address;
     cout<<"\nEnter the type of account you want to open - ";
     cin>>type;
     cout<<"\nEnter Amount to Deposit - ";
     cin>>amount;
     cout<<"\nCongratulations! You have successfully created your new account"<<endl;
 }

 void bank::deposit_money()
 {
     int deposit;
     cout<<"\nEnter the Amount you want to Deposit - ";
     cin>>deposit;
     amount += deposit;
     cout<<"\nNew Balance - "<<amount<<endl;
 }

 void bank::withdraw_money()
 {
     float withdraw;
     cout<<"\nEnter the amount you want to Withdraw - ";
     cin>>withdraw;
     amount -= withdraw;
     cout<<"You have withdrawn Rs."<<withdraw;
     cout<<"\nYour remaining balance in account is Rs."<<amount<<endl;
 }

 void bank::display_account()
 {
     cout<<"\nFull Name - "<<name;
     cout<<"\nAddress - "<<address;
     cout<<"\nType of Account - "<<type;
     cout<<"\nCurrent Balance - Rs."<<amount<<endl;
 }

 int main()
 {
     int choice,end;
     bank b;
     
     cout<<"\n1) Open Acoount \n";
     b.open_account();
     cout<<"\n2) Deposit Money \n";
     b.deposit_money();         
     cout<<"\n3) Withdraw Money \n";
     b.withdraw_money();
     cout<<"\n4) Display Account \n";
     b.display_account();
           

        //    cout<<"\n Enter your choice - ";
        //    cin>>choice;
        //    if(choice==1)
        //     {
        //         cout<<" OPEN ACCOUNT "<<endl;
        //         b.open_account();
        //     }
        //    else if(choice==2)
        //     {
        //         cout<<" DEPOSIT MONEY "<<endl;
        //         b.deposit_money();
        //     }
        //    else if(choice==3)
        //     {
        //         cout<<" WITHDRAW MONEY "<<endl;
        //         b.withdraw_money();
        //     }
        //    else if(choice==4)
        //     {
        //         cout<<" DISPLAY ACCOUNT "<<endl;
        //         b.display_account();
        //     }
        //    else if(choice==5)
        //     {
        //         cout<<" WRONG OPTION!! "<<endl;
        //         exit(1);
        //     }
           
        
     return 0;
 }

