

#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class personal
{
   private:
   char address[10];

   public:
   char name[10];
   int idno;

    void get1(void)
    {
       cout<<"Enter your Name:"<<endl;
       cin>>name;
       cout<<"Enter ID no:"<<endl;
       cin>>idno;
    }

    void get(void)
    {
      cout<<"Address of your residence :"<<endl;
      cin>>address;
    }

    void display1(void)
    {
      cout<<"\n****************************************\n";
      cout<<"Name    :"<<name<<endl;
      cout<<"ID No   :"<<idno<<endl;
      cout<<"Address :"<<address<<endl;
      cout<<"\n****************************************\n";
    }

    void s1(void)
    {
     cout<<"Enter your ID"<<endl;
     int q;
     cin>>q;
     if(q==idno)
      {
         display1();
      }
     else
        cout<<"Please Input valid ID"<<endl;
     }
};
//====================================================================
class numbers:public personal
{
  private:
       char res_tele[10];
       char b_group[10];
       char i_card[10];
       char p_no[10];
       char acc_no[10];
       char c_no[10];
       char t_no[10];
       char r_no[10];

  public:
       void get2(void);
       void display2(void);
       void s2(void);
};
void numbers::get2()
{
   cout<<"Enter your important numbers:"<<endl;
   cout<<"Name               :"<<endl;
   cin>>name;
   cout<<"ID No              :"<<endl;
   cin>>idno;
   cout<<"Res.Telephone      :"<<endl;
   cin>>res_tele;
   cout<<"Blood Group        :"<<endl;
   cin>>b_group;
   cout<<"Identity Card No   :"<<endl;
   cin>>i_card;
   cout<<"Bank Account No    :"<<endl;
   cin>>acc_no;
   cout<<"Income Tax No      :"<<endl;
   cin>>t_no;
   cout<<"Credit Card No     :"<<endl;
   cin>>c_no;
   cout<<"Vehicle Registration No:"<<endl;
   cin>>r_no;
}
void numbers::display2()
{
   cout<<"\n***********************************************\n";
   cout<<"Name               :"<<name<<endl;
   cout<<"ID No              :"<<idno<<endl;
   cout<<"Res telephone No   :"<<res_tele<<endl;
   cout<<"Blood group        :"<<b_group<<endl;
   cout<<"Identity Card No   :"<<i_card<<endl;
   cout<<"Bank Account No    :"<<acc_no<<endl;
   cout<<"Income Tax No      :"<<t_no<<endl;
   cout<<"Credit Card No     :"<<c_no<<endl;
   cout<<"Vehicle Registration No:"<<r_no<<endl;
   cout<<"\n************************************************\n";
}
void numbers::s2(void)
{
  cout<<"Enter your ID"<<endl;
  int q;
  cin>>q;

  if(q==idno)
  {
     display2();
  }
  else
     cout<<"Please Input valid ID"<<endl;
}
//=====================================================================
class reminder:public personal
{
   private:
      char pr[20];
      char ir[20];
      char dr[20];
      char id[20];
      char mc[20];

   public:
      void get3();
      void display3();
      void s3();
};
void reminder::get3()
{
  get1();
  cout<<"DATE FORMAT(dd-mm-yyyy)"<<endl;
  cout<<"Passport Renewal                  :"<<endl;
  cin>>pr;
  cout<<"Insurance Renewal                 :"<<endl;
  cin>>ir;
  cout<<"Driving License Renewal           :"<<endl;
  cin>>dr;
  cout<<"Income Tax Due Date               :"<<endl;
  cin>>id;
  cout<<"Medical Check-Up                  :"<<endl;
  cin>>mc;
}
void reminder::display3()
{
  cout<<"\n****************************************************\n";
  cout<<"Name                               :"<<name;
  cout<<endl;
  cout<<"ID no                              :"<<idno;
  cout<<endl;
  cout<<"Passport Renewal                   :"<<pr;
  cout<<endl;
  cout<<"Insurance Renewal                  :"<<ir;
  cout<<endl;
  cout<<"Driving License Renewal            :"<<dr;
  cout<<endl;
  cout<<"Income Tax Due Date                :"<<id;
  cout<<endl;
  cout<<"Medical Check-Up                   :"<<mc;
  cout<<endl;
  cout<<"\n****************************************************\n";
}
void reminder::s3()
{
  cout<<"Enter your ID"<<endl;
  int q;
  cin>>q;
  if(q==idno)
    {
      display3();
    }
  else
      cout<<"Please Input valid ID"<<endl;
}
//=========================================================================
class office:public personal
{
  private:
       char c[20];
       char ad1[10];
       char tel[10];
       //char mob[10];
  public:
       void get4(void);
       void display4(void);
       void s4(void);
};
void office::get4(void)
{
   get1();
   cout<<"Please Enter the information about your working place :"<<endl;
   cout<<"Enter the name of your company :"<<endl;
   cin>>c;
   cout<<"Address                        :"<<endl;
   cin>>ad1;
   cout<<"Telephone                      :"<<endl;
   cin>>tel;
}
void office::display4()
{
   cout<<"\n*******************************************************\n";
   cout<<"Name         :"<<name<<endl;
   cout<<"ID No        :"<<idno<<endl;
   cout<<"Company      :"<<c<<endl;
   cout<<"Address      :"<<ad1<<endl;
   cout<<"Telephone    :"<<tel<<endl;
   cout<<"\n*******************************************************\n";
}
void office::s4()
{
  cout<<"Enter your ID"<<endl;
  int q;
  cin>>q;
  if(q==idno)
   {
     display4();
   }
   else
     cout<<"Please Input valid ID"<<endl;
}
//====================================================================
class routine:public personal
{
  private:
       char sunday[50],monday[50],tuesday[50];
       char wednesday[50],thursday[50],friday[50],saturday[50];

  public:
       void get5(void);
       void display5(void);
       void s5(void);
};
void routine::get5()
{
  get1();
  cout<<"Routine Format (Time)-Plan"<<endl;
  cout<<"Enter your Routine of The Week :"<<endl;
  cout<<"Sunday    :";
  cin>>sunday;
  cout<<endl;
  cout<<"Monday    :";
  cin>>monday;
  cout<<endl;
  cout<<"Tuesday   :";
  cin>>tuesday;
  cout<<endl;
  cout<<"Wednesday :";
  cin>>wednesday;
  cout<<endl;
  cout<<"Thursday  :";
  cin>>thursday;
  cout<<endl;
  cout<<"Friday    :";
  cin>>friday;
  cout<<endl;
  cout<<"Saturday  :";
  cin>>saturday;
  cout<<endl;
}
void routine::display5()
{
  cout<<"\n**************************************************************\n";
  cout<<"Routine of The Week"<<endl;
  cout<<"Name       :"<<name;
  cout<<endl;
  cout<<"ID no      :"<<idno;
  cout<<endl;
  cout<<"Sunday     :"<<sunday;
  cout<<endl;
  cout<<"Monday     :"<<monday;
  cout<<endl;
  cout<<"Tuesday    :"<<tuesday;
  cout<<endl;
  cout<<"Wednesday  :"<<wednesday;
  cout<<endl;
  cout<<"Thursday   :"<<thursday;
  cout<<endl;
  cout<<"Friday     :"<<friday;
  cout<<endl;
  cout<<"Saturday   :"<<saturday;
  cout<<endl;
  cout<<"\n**************************************************************\n";
}
void routine::s5()
{
  int h;
  cout<<"Enter your ID:"<<endl;
  cin>>h;
  if(h==idno)
      display5();
  else
     cout<<"Please Input valid ID"<<endl;
}
//======================================================================
int main()
{
  int a,i;
  //char ch;
  personal n[10];
  numbers b[10];
  reminder r[10];
  office o[10];
  routine t[10];
  fstream fp;
  fp.open("information",ios::out|ios::in);
  cout<<"*#*#*#*  PERSONAL INFORMATION MANAGEMENT  *#*#*#"<<endl;
  cout<<"Enter the number of peoples information to be managed"<<endl;
  cin>>a;
  int x;
  do
  {
      cout<<"\n*******************************************\n";
      cout<<"\n*    Select the appropriate choice        *\n";
      cout<<"\n*    1 :Add Name & address                *\n";
      cout<<"\n*    2 :Display name & address            *\n";
      cout<<"\n*    3 :Search Name & Address             *\n";
      cout<<"\n*    4 :Add Important Numbers             *\n";
      cout<<"\n*    5 :Display Important numbers         *\n";
      cout<<"\n*    6 :Search Important Numbers          *\n";
      cout<<"\n*    7 :Add Reminders                     *\n";
      cout<<"\n*    8 :Display Reminders                 *\n";
      cout<<"\n*    9 :Search Reminders                  *\n";
      cout<<"\n*    10:Add Work Address                  *\n";
      cout<<"\n*    11:Display Work Address              *\n";
      cout<<"\n*    12:Search Work Address               *\n";
      cout<<"\n*    13:Add a Routine                     *\n";
      cout<<"\n*    14:Display The Routine               *\n";
      cout<<"\n*    15:Search Routine                    *\n";
      cout<<"\n*    16:Exit                              *\n";
      cout<<"\n*******************************************\n";
      cout<<"Enter your choice"<<endl;
      cin>>x;
   switch(x)
   {
   case 1:
       for(i=0;i<a;i++)
      {
         cout<<"Name, ID & Address of the person :"<<i+1<<endl;
         n[i].get1();
         n[i].get();
         fp.write((char *)&n[i],sizeof (n[i]));
       }
         fp.clear();
         fp.seekg(0);
         break;

   case 2:
      for(i=0;i<a;i++)
     {
       cout<<"Name,ID & Address of the person"<<i+1<<endl;
       fp.read((char *)&n[i],sizeof(n[i]));
       n[i].display1();
     }
       fp.seekp(0);
       break;

  case 3:
       for(i=0;i<a;i++)
       {
        cout<<"Name,ID & Address"<<i+1<<endl;
        n[i].s1();
       }
        break;

  case 4:
     for(i=0;i<a;i++)
    {
      cout<<"Enter the Important numbers :"<<i+1<<endl;
      b[i].get2();
      fp.write((char *)&b[i],sizeof (b[i]));
    }
      fp.clear();
      fp.seekg(0);
      break;

   case 5:
       for(i=0;i<a;i++)
     {
        cout<<"The Important Numbers"<<i+1<<endl;
        fp.read((char *)&b[i],sizeof (b[i]));
        b[i].display2();

      }
        fp.seekp(0);
        break;

   case 6:
    for(i=0;i<a;i++)
    {
      cout<<"The Important Numbers:"<<i+1<<endl;
      b[i].s2();
      }
    break;

  case 7:
      for(i=0;i<a;i++)
     {
       cout<<"Enter the remainder"<<i+1<<endl;
       r[i].get3();
       fp.write((char *)&r[i],sizeof (r[i]));
     }
       fp.clear();
       fp.seekg(0);
       break;

  case 8:
       for(i=0;i<a;i++)
      {
        cout<<"The Reminders"<<i+1<<"\n\n";
        fp.read((char *)&r[i],sizeof(r[i]));
        r[i].display3();
      }
        fp.seekp(0);
        break;

  case 9:
     for(i=0;i<a;i++)
     {
       cout<<"The Reminder :"<<i+1<<endl;
       r[i].s3();
      }
      break;

  case 10:
       for(i=0;i<a;i++)
      {
        cout<<"Enter the office address"<<i+1<<endl;
        o[i].get4();
        fp.write((char *)&o[i],sizeof(o[i]));
      }
        fp.clear();
        fp.seekg(0);
        break;

  case 11:
       for(i=0;i<a;i++)
      {
       cout<<"Office Address:"<<i+1<<endl;
       fp.read((char *)&o[i],sizeof(o[i]));
       o[i].display4();
      }
       fp.seekp(0);
       break;

  case 12:
     for(i=0;i<a;i++)
     {
       cout<<"Office Address "<<i+1<<endl;
       o[i].s4();
      }
      break;

  case 13:
      for(i=0;i<a;i++)
      {
        cout<<"Enter Routine"<<endl;
        t[i].get5();
        fp.write((char *)&t[i],sizeof(t[i]));
      }
        fp.clear();
        fp.seekg(0);
        break;

  case 14:
       for(i=0;i<a;i++)
       {
        cout<<" Routine :"<<endl;
        fp.read((char *)&t[i],sizeof(t[i]));
        t[i].display5();
       }
        fp.seekp(0);
        break;

  case 15:
       for(i=0;i<a;i++)
       {
        cout<<"Search The Routine :"<<endl;
        t[i].s5();
       }
        break;

  case 16:exit(0);
          break;
  default:cout<<"Enter valid Input"<<endl;
    }
 }while(x!=16);
 getch();
 return 0;
}
