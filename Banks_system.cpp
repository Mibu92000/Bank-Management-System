#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Account
{
   int acco;
   char name[55];
   char type[25];
   int d,m,y;
   char adhar[25];
   int deposit;
   int balance;
   float a;
   float b;
   float c;
   int n;
int e;
int loan_for_home;
int loan_for_personal;
int loan_for_car;
char x='.';
public:
   void create_account();
   void loan_for_bank();
   void Deposit();
   void WithDraw();
   void Transfer();
   void Check_Details();
   void Edit_exiting_account();
   void leave_account();
   void report_of_bank_member();
   int account_number();
   void list();
   void Exit();
};

void Account::create_account()
{
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
    cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }else{
       system("COLOR 1");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
   cout << "Enter the your name " << endl;
   cin.ignore();
   cin.getline(name, 55);
   cout << "Enter the account number " << endl;
   cin >> acco;
   cout << "Which type account are open saving account/current account " << endl;
   cin.ignore();
   cin.getline(type, 25);
   cout << "Enter the your date of birth || This format--> Date,Month,Year " << endl;
   cin>>d>>m>>y;
   cout << "Enter the adhar card number " << endl;
   cin.ignore();
   cin.getline(adhar,25);
   cout << "Enter the initial deposit " << endl;
   cin >> balance;
   cout << "Your account created " << endl;
   cout << "************** Thanks sir ******************" << endl;
   }
}
void Account::loan_for_bank()
{
   int z;
   int rate;
   int p, r, t;
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
     cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }
   system("COLOR 6");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
   cout<<"For Home loan  for 4 "<<endl;
   cin>>z;
   if(z==4){
   cout << "This banks provide a 15% interest rate " << endl;
   cout << "How much loan to take " << endl;
   cin >> p;
   cout << "How long are the loans " << endl;
   cin >> t;
   r = 15;
   loan_for_home = (p * r * t) / 100;
   cout << "Your total interest rate is " << loan_for_home << endl;
    cout<<"Loan is successful "<<endl;
   cout<<"**************** Thanks sir *************************"<<endl;
}
cout<<"For exit  for press key 3 "<<endl;
cin>>e;
if(e==3){
 return;
}
else{
   cout<<"For Personal loan for  "<<endl;
       cout << "This banks provide a 10% interest rate " << endl;
   cout << "How much loan to take " << endl;
   cin >> p;
   cout << "How long are the loans " << endl;
   cin >> t;
   r = 10;
   loan_for_personal = (p * r * t) / 100;
   cout << "Your total interest rate is " << loan_for_personal << endl;
    cout<<"Loan is successful "<<endl;
   cout<<"**************** Thanks sir *************************"<<endl;
   }
   cout<<"For exit  for press key 4 "<<endl;
cin>>e;
if(e==4){
   return ;
}
else{
   cout<<"For Car loan for  "<<endl;
          cout<< "This banks provide a 8% interest rate " << endl;
   cout<< "How much loan to take " << endl;
   cin>> p;
   cout<< "How long are the loans " << endl;
   cin>> t;
   r = 8;
   loan_for_car = (p * r * t) / 100;
   cout<< "Your total interest rate is " << loan_for_car << endl;
   cout<<"Loan is successful "<<endl;
   cout<<"**************** Thanks sir *************************"<<endl;
   }
   }
void Account::Deposit()
{
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
      cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }else{
      system("COLOR 5");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
   cout<<"Your Name is:"<<name<<endl;
   cout<<"Your Account Number is:"<<acco<<endl;
   cout << "Enter your deposit account " << endl;
   cin >> a;
   balance += a;
   cout<<"Deposit is successful "<<endl;
   cout<<"**************** Thanks sir *************************"<<endl;
}
}
void Account::WithDraw()
{
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
      cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }else{
      system("COLOR 8");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
   cout << "Enter your withdraw account " << endl;
   cin >> b;
   if(balance>b){
   balance -= b;
   cout<<"Withdraw is successful "<<endl;
   cout<<"**************** Thanks sir *************************"<<endl;
   }else{
      cout<<"Sorry sir,the amount is less,withdraw will not be able to do it "<<endl;
      cout<<"Try again "<<endl;
   }
}
}
void Account::Transfer()
{
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
      cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }else{
      system("COLOR 3");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
   cout << "Enter your transfer account " << endl;
   cin >> c;
   if(balance>c){
   balance -= c;
   cout<<"Transfer is successful "<<endl;
   cout<<"**************** Thanks sir *************************"<<endl;
   }else{
      cout<<"Sorry sir,the amount is less,Transfer will not be able to do it "<<endl;
cout<<"Try again "<<endl;
   }
}
}

void Account::Check_Details()
{
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
      cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }else{
      system("COLOR 9");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
   cout<< "  Your account name is " << name << endl;
   cout<< "  Your account number is " << acco << endl;
   cout<< "  Your account type is " << type << endl;
   cout<<"    Your adhar card number is "<<adhar<<endl;
   cout<<"    Your Date of birth is "<<d<<"/"<<m<<"/"<<y<<endl;
   cout<< "  Deposit from your account " << a << endl;
   cout<< "  Withdraw from your account " << b << endl;
   cout<< "  Transfer from your account " << c << endl;
   cout<< "  Your account balance is " << balance << endl;
   cout<<"   Your Home loans for banks "<<loan_for_home<<endl;
   cout<<"   Your Personal loans for banks "<<loan_for_personal<<endl;
   cout<<"   Your Car loans for banks "<<loan_for_car<<endl;
   cout << "************** Thanks sir ******************" << endl;
}
}
void Account::leave_account(){
   char h[400];
   int z;
    cout<<"**********************"<<endl;
   cout<<"      SG Bank      "<<endl;
   cout<<"**********************"<<endl;
      cout<<"Press 2 for exit || press any key for continue  "<<endl;
   cin>>e;
   if(e==2){
      return;
   }else{
      system("COLOR 4");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
    cout << "  Your account name is " << name << endl;
    cout << "  Your account number is " << acco << endl;
    cout<<"You leave a account then press  1 "<<endl;
    cin>>z;
    if(z<2){
      cout<<"Why you leave account in 170 Charcter only "<<endl;
      cin.ignore();
   cin.getline(h,400);
   cout<<"Your account will be deleted in 24 hours "<<endl;
   cout<<"Thank you sir for staying connected with our bank for so long "<<endl;
   cout<<"******************* Thanks sir ****************************"<<endl;
    }else{
       cout<<"Worng key press try again "<<endl;
    }
}
}
int Account::account_number(){
   return acco;
}
int main(){
   Account obj;
   int ch,x;
   int chk;
    int n;
    std::fstream f,G,E;
   do{
      system("COLOR 4");
     cout<<"\n\n";
cout<<endl;
cout<<"**********************"<<endl;
cout<<"       SG Bank         "<<endl;
cout<<"**********************"<<endl;
cout<<"1) Create account"<<endl;
cout<<"2) Loan for bank"<<endl;
cout<<"3) Deposit"<<endl;
cout<<"4) WithDraw"<<endl;
cout<<"5) Transfer"<<endl;
cout<<"6) Check Details"<<endl;
cout<<" 7) leave account"<<endl;
cout<<"8) Exit "<<endl;
cout<<"Select 1 to 8  any one number  "<<endl;
cin>>ch;
system("CLS");
switch(ch){
   case 1:
  cout<<"1) Create account"<<endl;
   f.open("Customer.dat", ios::app | ios::in | ios::binary);
            obj.create_account();
            f.write((char *)&obj, sizeof(obj));
            f.close();
            getch();
            system("CLS");
    break; 
  case 2:
  cout<<"2) Loan for bank "<<endl;
   f.open("Customer.dat", ios::app | ios::in | ios::binary);
            obj.loan_for_bank();
            f.write((char *)&obj, sizeof(obj));
            f.close();
            getch();
            system("CLS");
  break;
  case 3:
  cout<<"3) Deposit "<<endl;
  f.open("Customer.dat", ios::app | ios::in | ios::binary);
            obj.Deposit();
            f.write((char *)&obj, sizeof(obj));
            f.close();
            getch();
            system("CLS");
  break;
            
  case 4:
  cout<<"4) WithDraw "<<endl;
  f.open("Customer.dat", ios::app | ios::in | ios::binary);
            obj.WithDraw();
            f.write((char *)&obj, sizeof(obj));
            f.close();
            getch();
            system("CLS");
  break;
  case 5:
  cout<<"5) Transfer "<<endl;
  f.open("Customer.dat", ios::app | ios::in | ios::binary);
            obj.Transfer();
            f.write((char *)&obj, sizeof(obj));
            f.close();
            getch();
            system("CLS");
  break;
  case 6:
  cout<<"7) Check Details "<<endl;
   f.open("Customer.dat", ios::in | ios::out | ios::app | ios::binary);
            if (f.fail())
            {
                cout << "File could not be found || Try again " << endl;
            }
            else
            {
                chk = 0;
                cout << "Enter Account Number " << endl;
                cin >> n;
                while (f.read((char *)&obj, sizeof(obj)))
                {
                    if (obj.account_number() == n)
                    {
                        obj.Check_Details();
                        chk = 1;
                        break;
                    }
                }
            
                if (chk == 0)
                {
                    cout << "Account  Record not found || Try again " << endl;
                }
                f.close();
                getch();
                system("CLS");
  break;
            }
  case 7:
  cout<<"8) leave account "<<endl;
  f.open("Customer.dat", ios::in | ios::app | ios::binary);
            G.open("Delete.dat",ios::out|ios::app|ios::binary);
            if (f.fail())
            {
                cout << "File could not be found || Try again " << endl;
            }
            else
            {
                chk = 0;
                cout << "Enter Account Number" << endl;
                cin >> n;
                while (f.read((char *)&obj, sizeof(obj)))
                {
                    if (obj.account_number()!= n)
                    {
                        G.write((char *)&obj,sizeof(obj));
                    }
                else{
                    obj.leave_account();
                    chk=1;
                }
                }
                if (chk == 0)
                {
                    cout << "Account Record not found || Try again " << endl;
                }else{
                    cout<<"Account Record is Deleted "<<endl;
                }
                f.close();
                G.close();
                remove("Customer.dat");
                rename("Delete.dat","Customer.dat");
                system("CLS");
  break;
            }
   case 8:
  if(ch==8){
     exit(1);
  }
  default:
  cout<<"This is not exist try again "<<endl;
}
}while(ch!=8);
   return 0;
   }