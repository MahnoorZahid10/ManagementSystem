#include <iostream>
#include<windows.h>
#include <string>
#include <vector>
using namespace std;


//////////////////////////////////////////////////
class Admin
{
private:
   string Username;
   string Password;
   string Username1;
   string Password1;
public:
   void creataccount()
   {
      cout<<"\t\tEnter new username: ";
	   cin.ignore();
      getline(cin, Username);
	   cout<<"\t\tEnter new password: ";
	   cin.ignore();
      getline(cin, Password);
	   cout<<"\t\tYour new id is creating please wait";
      for(int i=0;i<6;i++)
	   {
		  cout<<".";
		  Sleep(500);
	   }
      cout<<"\n\t\tYour id created successfully";
	   Sleep(2000);
	   start:
	   system("CLS");
	   cout<<"\n\n\t\tTanker Management System"<<endl;
	   cout<<"\n\n\n\t\t   LOGIN"<<endl;
	   cout<<"\t\tEnter username: ";
	   cin.ignore();
      getline(cin, Username1);
	   cout<<"\t\tEnter password: ";
	   cin.ignore();
      getline(cin, Password1);
      if(Username1==Username&&Password1==Password)
      {
         cout << "\t\tLOGIN APPROVED." << endl;
         Sleep(500);
         system("CLS");
      }
      else if (Username1!=Username&&Password1!=Password)
      {
         cout << "\t\tInvalid Username or Password. " << endl;
         cout<<"\t\tEnter Correct Username: ";
	      cin.ignore();
         getline(cin, Username1);
	      cout<<"\t\tEnter Correct Password: ";
	      cin.ignore();
         getline(cin, Password1);
         cout << "\t\tLOGIN APPROVED." << endl;
         Sleep(500);
         system("CLS");
      }
   }
};



////////////////////////

class Consumer
{
private:
   string Name;
   int ConsumerID;
   string CellNo;
   string AltCellNo; 
   string Address; 
   string NearbyLandmark; 
   string PostalCode;  
   int Gallons;
public:
   void getdata()
   {
      cout << "\t\tEnter Customer Name: ";
      cin.ignore();
      getline(cin, Name);
      cout << "\t\tEnter Customer ID: ";
      cin >> ConsumerID;
      cout << "\t\tEnter Cell Number: ";
      cin >> CellNo;
      cout << "\t\tEnter Alternate Cell Number: ";
      cin >> AltCellNo;
      cout << "\t\tEnter Address: ";
      cin.ignore();
      getline(cin, Address);
      cout << "\t\tEnter Near by Landmark: ";
      cin.ignore();
      getline(cin, NearbyLandmark);
      cout << "\t\tEnter Postal Code: ";
      cin >> PostalCode;
      cout << "\t\tEnter Gallons: ";
      cin >> Gallons;
   }
   void displaydata()
   {
      cout << "\t\tCustomer Name: " << Name << endl;
      cout << "\t\tCustomer ID: " << ConsumerID << endl;
      cout << "\t\tAddress: " << Address << endl;
      cout << "\t\tCell Number: " << CellNo <<endl;
      cout << "\t\tAlternate Cell Number: " << AltCellNo << endl;
      cout << "\t\tGallons Required: " << Gallons << endl;
   }
};

//////////////////////////////////

class Complaint
{
private:
  int ConsumerID;
  string ComplaintDescription;
  int count;
public:
  Complaint()
   {
      count = 1;
   }
  void ComplaintNumber()
   {
      cout << "\t\tCOMPLAINT NUMBER " << count++ << endl;
   }
  void getdata()
   {
      cout << "\t\tEnter Complaint: ";
      cin.ignore();
      getline(cin, ComplaintDescription);
   }
  void displaydata()
   {
      //cout << CustomerID << endl;
      cout << "\t\tCOMPLAINT NO. " << count << endl;
      cout << "\t\t" << ComplaintDescription << endl;
   }
};

//////////////////////////////////



class shift
{
private:
   string current;
   string next;
   string alternate;
   string availability;
   int driverid;
public:  
   void getdata()
   {
      cout << "\t\tEnter the current shift: ";
      cin >> current;
      cout << "\t\tEnter driver Id: ";
      cin >> driverid;
      cout << "\t\tIs driver available? ";
      cin >> availability;
      if(availability=="yes")
      {
         cout << "\t\tDriver is Available, Deliver Tanker. " << endl;
         cout << "\t\tTime of Delivery " << current;
      }   
      else if(availability=="no")
      {
         cout << "\t\tEnter next shift: ";
         cin >> next;
         cout << "\t\tEnter driver Id: ";
         cin >> driverid;
         cout << "\t\tIs driver available? ";
         cin >> availability;
         if(availability=="yes")
         {
            cout << "\t\tDriver is Available, Deliver Tanker. " << endl;
            cout << "\t\tTime of Delivery " << next;
         }   
         else if(availability=="no")
         {
            cout << "\t\tEnter Alternate day for deliver: ";
            cin >> alternate;
            cout << "\t\tTime of Delivery " << alternate;
         }
      }
   }
   void displaydata()
   {
      cout << "\t\tCurrent Shift: " << current << endl;
      cout << "\t\tDriver ID: " << driverid << endl;
   }
};   







/////////////////////////////////
 
class logistics 
{
private:
   float fuel_level;
   int Driver_Proficiency;
   int no_staff;
   int amt_chlorine;

public:
   void check_fuel_level() 
   {
      cout << "\n\t\tEnter Tanker's Fuel level: ";
      cin >> fuel_level;
   }
   void displayfuellevel()
   {
      if (fuel_level == 0) 
      {
         cout << "\t\tTank is empty, get a refill" << endl;
      }
      else if (fuel_level > 0 && fuel_level <= 25) 
      {
         cout << "\t\tFuel level is low" << endl;
      }
      else if (fuel_level > 25 && fuel_level <= 75) 
      {
         cout << "\t\tFuel level is medium" << endl;
      }
      else if (fuel_level > 75 && fuel_level < 100) 
      {
         cout << "\t\tFuel level is high" << endl;
      }
      else if (fuel_level == 100) 
      {
         cout << "\t\tTank is full" << endl;
      }
      else 
      {
         cout << "\t\tInvalid level" << endl;
      }
   }
   void check_proficiency() 
   {
      cout << "\t\tSelect the level driver is certified at: " << endl;
      cout << "\t\t1-Level 1" << endl;
      cout << "\t\t2-Level 2" << endl;
      cout << "\t\t3-Level 3" << endl;
      cin >> Driver_Proficiency;
      switch (Driver_Proficiency) 
      {
         case 1:
         cout << "\t\tThe driver is not proficient enough and is only allowed to drive 50 kilometers in a day" << endl;
         break;
         case 2:
         cout << "\t\tThe driver is allowed to drive 150 kilometers in a day" << endl;
         break;
         case 3:
         cout << "\t\tThe driver is proficient and is allowed to cover long distances upto few hundred kilometers" << endl;
         break;
      }
   }
   void check_staff() 
   {
      int no_staff = 0;
      cout << "\t\tEnter the number of staff:";   
      cin >> no_staff;
      cout << "\t\tThe number of staff on duty is " << no_staff << endl;
   }
   void check_chlorination_level() 
   {
      cout << "\t\tEnter chlorine amount in milligrams per liter: " << endl;
      cin >> amt_chlorine;    
   }
   void displaychlorinedata()
   {
      if (amt_chlorine == 4) 
      {
         cout << "\t\tWater is safe for use" << endl;
      }
      else if (amt_chlorine > 4) 
      {
         cout << "\t\tChlorine level is too high, water is not safe to use" << endl;
      }
      else if (amt_chlorine < 4) 
      {
         cout << "\t\tChlorine level is low, water may be contaminated" << endl;
      }
      else 
      {
         cout << "\t\tError! Enter level in integer form." << endl;
      }
   }
};
///////////////////////////////////////////
 

/////////////////////////////////////////

class Tankers
{
protected:
   int Tanker_ID, Gallons;
   int Rate_Per_Gallon=0;
public:
   void get_data()
   {
      cout<<"\t\tEnter Tanker ID: "; cin>>Tanker_ID;
      cout<<"\t\tSet Gallons: "; cin>>Gallons;
   }
   void virtual set_price()=0;
   void get_rate()
   {
      cout << "\t\tTotal price: " << Rate_Per_Gallon << endl;
   }
};

class Commercial:public Tankers
{
public:
   void set_price()
   {
      if(Gallons==5000)
      {
         Rate_Per_Gallon += 6000; 
      }
   }
};

class Domestic:public Tankers
{
public:
   void set_price()
   {
      if(Gallons==1000)
      {
         Rate_Per_Gallon += 1200; 
      }
      if(Gallons==2000)
      {
         Rate_Per_Gallon += 2400; 
      }
   }
};

////////////////////////////////////

class Date 
{
public:
   Date(size_t year, size_t month, size_t day) :m_year(year), m_month(month), m_day(day) {}
   ~Date() {}
   Date operator + (size_t days) const;
   size_t Year() { return m_year; }
   size_t Month() { return m_month; }
   size_t Day() { return m_day; }
   string DateStr();
private:
   inline bool LeapYear(int year) const
   {
      return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
   }
   static const int MaxDayInMonth[13];
   size_t m_year;
   size_t m_month;
   size_t m_day;
};
const int Date::MaxDayInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
Date Date::operator + (size_t days) const 
{
   int nMaxDays(MaxDayInMonth[m_month] + (m_month == 2 && LeapYear(m_year) ? 1 : 0));
   int nYear(m_year);
   int nMonth(m_month);
   int nDays(m_day + days);
   while (nDays > nMaxDays) 
   {
      nDays -= nMaxDays;
      ++nMonth;
      if (nMonth > 12) 
      {
         nMonth = 1;
         ++nYear;
      }
      nMaxDays = MaxDayInMonth[nMonth] + (nMonth == 2 && LeapYear(nYear) ? 1 : 0);
   }
   return Date(nYear, nMonth, nDays);
}
string Date::DateStr() 
{
   return to_string(m_year)
      + string("/")
      + string(m_month < 10 ? string("0") + to_string(m_month) : to_string(m_month))
      + string("/")
      + string(m_day < 10 ? string("0") + to_string(m_day) : to_string(m_day));
}

/////////////////////////////////////////////////////////////


///////////////////////////////
class Filling_Point
{
private:
   static int Active_hydrants, Flow_rate;
   int Gallons;
   int total_price=0;
public:
   void set_data()
   {
      cout<<"\t\tEnter flow rate of water: "; cin>>Flow_rate;
      cout<<"\t\tEnter No. of active hydrants: "; cin>>Active_hydrants;
      Sleep(1000);
      system("CLS");
   }
   void check_availability()
   {
      if(Flow_rate>=2000&&Active_hydrants>=5)
      {
         cout<<"\t\t\nTanker can be filled.";
         cout<<"\t\t\nEnter Gallons: "; cin>>Gallons;
         if(Gallons==1000)
         {
            total_price+=300;
         }
         if(Gallons==2000)
         {
            total_price+=600;
         }
         if(Gallons==5000)
         {
            total_price+=900;
         }
         cout<<"\t\t\nTotal price is: " <<total_price;
      }
      else
      {
         cout<<"\t\t\nFilling point not available.";
      }
   }
};
int Filling_Point::Active_hydrants=0;
int Filling_Point::Flow_rate=0;


///////////////////////////////////////////////




class Tanker_Record_Book
{
private:
   string Driver_Name, date, Time_in, Time_out;
   int Tanker_ID, Driver_ID;
   float Tanker_capacity, Quantity_of_water_delivered;
   int total=0;
   vector <Tanker_Record_Book> v={};
public:
   void get_data()
   {   
      cout<<"\nHow many tankers data you want to enter: "; cin>>total;
      for(int i=0; i<total; i++)
      {
         Tanker_Record_Book obj;
         cout<<"\t\tEnter Date: "; 
         cin >> obj.date;
         cout<<"\t\tEnter Arrival time: "; 
         cin.ignore();
         getline(cin, obj.Time_in);
         cout<<"\t\tEnter Departure time: ";
         cin.ignore();
         getline(cin, obj.Time_out);
         cout<<"\t\tEnter Driver name: "; 
         cin.ignore();
         getline(cin, obj.Driver_Name);
         cout<<"\t\tEnter Driver id: "; cin>>obj.Driver_ID;
         cout<<"\t\tEnter Tanker id: "; cin>>obj.Tanker_ID;
         cout<<"\t\tEnter Capacity of tanker: "; cin>>obj.Tanker_capacity;
         cout<<"\t\tEnter Quantity of water delivered: "; cin>>obj.Quantity_of_water_delivered;
          v.push_back(obj);
      }
      system("CLS");
   }
   void display_data()
   {   
      start:
      int id;
      cout<<"\t\t\n\nEnter Tanker id to search: "; cin>>id;
      for(int i=0; i<total; i++)
      {
         if(id==v[i].Tanker_ID)
         {
            cout<<"\t\t\nDate: " <<v[i].date;
            cout<<"\t\t\nArrival time: " <<v[i].Time_in;
            cout<<"\t\t\nDeparture time: " <<v[i].Time_out;
            cout<<"\t\t\nDriver name: " <<v[i].Driver_Name;
            cout<<"\t\t\nDriver id: " <<v[i].Driver_ID;
            cout<<"\t\t\nTanker id: " <<v[i].Tanker_ID;
            cout<<"\t\t\nCapacity of tanker: " <<v[i].Tanker_capacity;
            cout<<"\t\t\nQuantity of water delivered: " <<v[i].Quantity_of_water_delivered;
            break;
         }
         if(i==total-1)
         {
            cout<<"\t\t\nNo such record found. Try again!";
            goto start;
         }   
      }
   }
   void displaydata()
   {
     start:
      for(int i=0; i<total; i++)
      {
         cout<<"\t\tDate: " <<v[i].date << endl;
         cout<<"\t\tArrival time: " <<v[i].Time_in << endl;
         cout<<"\t\tDeparture time: " <<v[i].Time_out << endl;
         cout<<"\t\tDriver name: " <<v[i].Driver_Name << endl;
         cout<<"\t\tDriver id: " <<v[i].Driver_ID <<endl;
         cout<<"\t\tTanker id: " <<v[i].Tanker_ID << endl;
         cout<<"\t\tCapacity of tanker: " <<v[i].Tanker_capacity << endl;
         cout<<"\t\tQuantity of water delivered: " <<v[i].Quantity_of_water_delivered << endl;
         break;
      }
   }
   
};



//////////////////////////////////////////////////////////////////////////////


Tankers*ptr=NULL;
int main()
{
   Admin user;
   Consumer b1;
   string problem;
   Complaint USER,C;
   string current;
   string next;
   string alternate;
   string availability;
   int driverid;
   int year;
   int month;
   int day;
   string next_date;
   user.creataccount();
   string bookorder = "yes";
   cout << "\t\tYou want to book order ";
   cin >> bookorder;
   ///////////////////////////////////////////
   if(bookorder=="yes")
   {
      b1.getdata();
      Sleep(2000);
      system("CLS");
      string Type_of_Tanker;
      cout<<"\t\tTanker Selection";
      cout<<"\t\tEnter Type of Tanker: "; cin>>Type_of_Tanker; system("CLS");
      if(Type_of_Tanker=="commercial")
      {
         Commercial obj;
         obj.get_data();
         ptr=&obj;
         ptr-> set_price();    
      }
    //////////////////////////////////////////////   
      else if(Type_of_Tanker=="domestic")
      {
         Domestic obj;
         obj.get_data();
         ptr=&obj;
         ptr-> set_price();
      }
      /////////////////////////////////////////////////
      Sleep(2000);
      system("CLS");
      shift s1;
      cout << "\t\tShifts" << endl;
      s1.getdata();
      /////////////////////////////////////////
      Sleep(2000);
      system("CLS");
      logistics data;
      cout << "\t\tLogistic Department " << endl;
      data.check_fuel_level();
      data.check_staff();
      data.check_proficiency();
      data.check_chlorination_level();
      ///////////////////////////////////////////////////////
      cout << "\t\tSet Maintenance Date "; 
      cout << "\t\tEnter the date: " << endl;
      cout << "\t\t***************************************";
      cout << "\t\tEnter year: " << endl;
      cin >> year;
      cout << "\t\tEnter month: " << endl;
      cin >> month;
      cout << "\t\tEnter day:" << endl;
      cin >> day;
      cout << Date(year, month, day).DateStr() << endl;
      next_date = (Date(year, month, day) + 14).DateStr();
      cout << "\t\tThe maintenance date for the tanker is: " << next_date << endl;
      /////////////////////////////////////////////////
      Sleep(2000);
      system("CLS");
      cout<<"\t\tFilling Points\n\n";
      Filling_Point f, t;
      f.set_data();
      t.check_availability();
      ///////////////////////////////////////////////////
      Sleep(2000);
      system("CLS");
      Tanker_Record_Book obj1;
      cout<<"\t\tTanker Record Book\n\n";
      obj1.get_data();
      obj1.display_data();
      /////////////////////////////////////////////////////
      Sleep(2000);
      system("CLS");
      cout << "\t\tCustomer Receipt: " << endl;
      cout << "\t\t****************************************" << endl;   
      b1.displaydata();
      ptr->get_rate();
      obj1.displaydata();
      cout << "\t\t****************************************" << endl;

      cout << "\t\tDriver Receipt: " << endl;
      cout << "\t\t****************************************" << endl;   
      b1.displaydata();
      ptr->get_rate();
      obj1.displaydata();
      data.displayfuellevel();
      data.displaychlorinedata();
      s1.displaydata();
      cout << "\t\t****************************************";

     
   }
   ///////////////////////////////////////////////////////////////////////////////
   else if(bookorder=="no")
   {
      cout << "\t\tDo you want to cancel order? ";
      cin >> bookorder;
      if(bookorder=="yes")
      {
         cout << "\t\tOrder cancelled" << endl;
         cout << "\t\tDo Consumer have a Complaint? ";
         cin >> problem;
         if(problem=="yes")
         {
            C.ComplaintNumber();
            USER.getdata();
            USER.displaydata();
         }
         else if(problem=="no")
         {
            cout << "\t\tContinue..";
         }
      }
      else if(bookorder=="no")
      {
         cout << "\t\tContinue Exploring.. " << endl;
      }
   }
   return 0;
}