#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();

class Management
{
 public:
 Management()
 {
    mainMenu();
 }
};

class Details
{
    public:
    static string name, gender;
    string phoneNo;
    string age;
    string add;
    static string cId;
    char arr[100];
    void information()
    {
        cout<<"\nEnter the customer ID:\n ";
        cin>>cId;
        cout<<"\nEnter the name: ";
        cin>>name;
        cout<<"\nEnter the age: ";
        cin>>age;
        cout<<"\nAddress: ";
        cin>>add;
        cout<<"\nGender: ";
        cin>>gender;
        cout<<"\nYour details are saved with us\n"<<endl;

    }
};

string Details::cId;
string Details::name;
string Details:: gender;


class Registration
{
public:
   static int choice;
   int choice1;
   char back;
   static float charges;

   void flights()
   {
    string flightN[]= {"Dubai", "Canada", "UK", "USA","Australia", "Europe"};
    for(int a=0; a<6; a++)
    {
        cout<<(a+1)<< ".flight to "<<flightN[a]<<endl;
    }
    cout<<"Press the number according to the country for which you want to book the flights: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"__________Welcome to Dubai Emirates__________\n"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl; 
            cout<<"Following are the flights \n"<<endl;
            cout<<"1. DUB - 498"<<endl;
            cout<<"\t13-07-2023 8:00AM 10hrs Rs. 14000"<<endl;
            cout<<"2. DUB - 658"<<endl;
            cout<<"\t12-07-2023 4:00AM 12hrs Rs. 10000"<<endl;
            cout<<"3. DUB - 598"<<endl;
            cout<<"\t15-07-2023 11:00AM 11hrs Rs. 9000"<<endl;

            cout<<"\nSelect the flight you want to book: ";
            cin>>choice1;

            if(choice1==1)
            {
                charges=14000;
                cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==2)
            {
                charges=10000;
                cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==3)
            {
                charges=9000;
                cout<<"\nYou have successfully booked the flight DUB - 598"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid input, shiting to the previous menu"<<endl;
                flights();
            }
           cout<<"Press any key to go back to Main menu."<<endl;
           cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2: 
        {
              cout<<"__________Welcome to Canadian Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl; 
            cout<<"Following are the flights \n"<<endl;
            cout<<"1. CA - 498"<<endl;
            cout<<"\t13-07-2023 8:00AM 20hrs Rs. 34000"<<endl;
            cout<<"2. CA - 658"<<endl;
            cout<<"\t12-07-2023 4:00AM 22hrs Rs. 30000"<<endl;
            cout<<"3. CA - 598"<<endl;
            cout<<"\t15-07-2023 11:00AM 21hrs Rs. 32000"<<endl;

            cout<<"\nSelect the flight you want to book: ";
            cin>>choice1;

            if(choice1==1)
            {
                charges=34000;
                cout<<"\nYou have successfully booked the flight CA - 498"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==2)
            {
                charges=30000;
                cout<<"\nYou have successfully booked the flight CA - 658"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==3)
            {
                charges=32000;
                cout<<"\nYou have successfully booked the flight CA - 598"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid input, shiting to the previous menu"<<endl;
                flights();
            }
           cout<<"Press any key to go back to Main menu."<<endl;
           cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
         case 3: 
        {
              cout<<"__________Welcome to UK Airways__________\n"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl; 
            cout<<"Following are the flights \n"<<endl;
            cout<<"1. UK - 898"<<endl;
            cout<<"\t13-07-2023 10:00AM 14hrs Rs. 44000"<<endl;
           

            cout<<"\nSelect the flight you want to book: ";
            cin>>choice1;

            if(choice1==1)
            {
                charges=44000;
                cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid input, shiting to the previous menu"<<endl;
                flights();
            }
           cout<<"Press any key to go back to Main menu."<<endl;
           cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
         case 4: 
        {
              cout<<"__________Welcome to US Airways__________\n"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl; 
            cout<<"Following are the flights \n"<<endl;
            cout<<"1. US - 498"<<endl;
            cout<<"\t13-07-2023 8:00AM 20hrs Rs. 36000"<<endl;
            cout<<"2. US - 658"<<endl;
            cout<<"\t12-07-2023 4:00AM 22hrs Rs. 32000"<<endl;
            cout<<"3. US - 598"<<endl;
            cout<<"\t15-07-2023 11:00AM 21hrs Rs. 34000"<<endl;

            cout<<"\nSelect the flight you want to book: ";
            cin>>choice1;

            if(choice1==1)
            {
                charges=36000;
                cout<<"\nYou have successfully booked the flight US - 498"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==2)
            {
                charges=32000;
                cout<<"\nYou have successfully booked the flight US - 658"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==3)
            {
                charges=34000;
                cout<<"\nYou have successfully booked the flight US - 598"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid input, shiting to the previous menu"<<endl;
                flights();
            }
           cout<<"Press any key to go back to Main menu."<<endl;
           cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
         case 5: 
        {
              cout<<"__________Welcome to Australian Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl; 
            cout<<"Following are the flights \n"<<endl;
            cout<<"1. AS - 698"<<endl;
            cout<<"\t18-07-2023 8:00AM 20hrs Rs. 44000"<<endl;
            cout<<"2. AS - 458"<<endl;
            cout<<"\t12-07-2023 4:00AM 22hrs Rs. 40000"<<endl;
            cout<<"3. AS - 598"<<endl;
            cout<<"\t15-07-2023 11:00AM 21hrs Rs. 42000"<<endl;

            cout<<"\nSelect the flight you want to book: ";
            cin>>choice1;

            if(choice1==1)
            {
                charges=44000;
                cout<<"\nYou have successfully booked the flight AS - 698"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==2)
            {
                charges=40000;
                cout<<"\nYou have successfully booked the flight AS - 458"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==3)
            {
                charges=42000;
                cout<<"\nYou have successfully booked the flight AS - 598"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid input, shiting to the previous menu"<<endl;
                flights();
            }
           cout<<"Press any key to go back to Main menu."<<endl;
           cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
         case 6: 
        {
              cout<<"__________Welcome to Europian Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority. Enjoy the journey!"<<endl; 
            cout<<"Following are the flights \n"<<endl;
            cout<<"1. EU - 498"<<endl;
            cout<<"\t13-07-2023 8:00AM 18hrs Rs. 36000"<<endl;
            cout<<"2. EU- 658"<<endl;
            cout<<"\t12-07-2023 4:00AM 19hrs Rs. 32000"<<endl;
            cout<<"3. EU - 598"<<endl;
            cout<<"\t15-07-2023 11:00AM 20hrs Rs. 34000"<<endl;

            cout<<"\nSelect the flight you want to book: ";
            cin>>choice1;

            if(choice1==1)
            {
                charges=36000;
                cout<<"\nYou have successfully booked the flight EU - 498"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==2)
            {
                charges=32000;
                cout<<"\nYou have successfully booked the flight EU - 658"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else if(choice1==3)
            {
                charges=34000;
                cout<<"\nYou have successfully booked the flight EU - 598"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid input, shiting to the previous menu"<<endl;
                flights();
            }
           cout<<"Press any key to go back to Main menu."<<endl;
           cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        default :
        {
            cout<<"Invalid input, Shifting you to the main menu! "<<endl;
            mainMenu();
            break;
        }
    }
   }
  
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
    public:
   void Bill()
   {
    string destination="";
    ofstream outf("records.txt");
    {
        outf<<"___________Bhatia Airlines____________"<<endl;
        outf<<"___________Ticket_____________________"<<endl;
        outf<<"______________________________________"<<endl;

        outf<<"Customer ID:"<<Details::cId<<endl;
        outf<<"Customer Name:"<<Details::name<<endl;
        outf<<"Customer Gender:"<<Details::gender<<endl;
        outf<<"\tDescription"<<endl<<endl;
        if(Registration::choice==1)
        {
            destination="Dubai";
        }
         else if(Registration::choice==2)
        {
            destination="Canada";
        }
         else if(Registration::choice==3)
        {
            destination="UK";
        }
         else if(Registration::choice==4)
        {
            destination="USA";
        }
         else if(Registration::choice==5)
        {
            destination="Australia";
        }
         else if(Registration::choice==6)
        {
            destination="Europe";
        }
        outf<<"Destination\t\t"<<destination<<endl;
        outf<<"Flight cost: \t\t"<<Registration::charges<<endl;
    }
    outf.close();
   }
   void dispBill()
   {
    ifstream ifs("records.txt");
    {
        if(!ifs)
        {
            cout<<"File error!"<<endl;
        }
        while(!ifs.eof())
        {
            ifs.getline(arr, 100);
            cout<<arr<<endl;
        }
    }
    ifs.close();
   }
};






void mainMenu(){
    int lchoice;
    int schoice;
    char back;
    cout<<"\t             Bhatia Airlines \n"<<endl;
    cout<<"\t___________Main Menu__________"<<endl;
    cout<<"\t_________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t\t Press 1 to add the Customer Details.   \t|"<<endl;
    cout<<"\t\t Press 2 for Flight Registration.      \t|"<<endl;
    cout<<"\t\t Press 3 for Tickets and Charges.      \t|"<<endl;
    cout<<"\t\t Press 4to Exit.                       \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t_________________________________________"<<endl;
    cout<<"Enter the choice: ";
    cin>> lchoice;
    Details d;
    Registration r;
    Ticket t; 
    switch(lchoice)
    {
        case 1:
        {
            cout<<"___________Customers___________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu.";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            } 
            else{
                mainMenu();
            }
            break;
        } 
        case 2:
        {
           cout<<"________Book a flight using this system_______\n"<<endl;
           r.flights();
           break; 
        }
        case 3:
        {
           cout<<"____Get Your Ticket___\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it.\n"<<endl;
            cout<<"Press 1 to display your ticket.";
            cin>>back;

            if(back==1){
                t.dispBill();
               cout<<"Press any key to go back to Main menu.";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            }
            else{
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t____________Thank You_____________"<<endl;
            break;
        }
        default :
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }

}
int main(){
    Management Mobj;
    return 0;
}
