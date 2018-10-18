/*
 CS 141 Midterm #2, Fall 2017, Prof. Reed
 
 This midterm exam consists of a single problem.  Partial credit
 may be given as long as functionality can be verified by the output.
 You don't need to comment your code or worry about having meaningful
 variable names. Your program must print out your name.
 
 You may not communicate with anyone else during the test.  You may consult
 your text, your notes, files archived in your account, and the Web.
 
 Turn in your solution(s) using Blackboard into the assignment name given to
 you by your TA. Your solution should be called netid.cpp, where "netid" is
 your actual netid.  For instance if your netid is reed, then you would turn
 in reed.cpp
 
 The driver code is provided for you and should not be changed.  You need
 to implement the class so that the driver code works correctly to give the
 following output, given the following input.
 *******************************************************************
 
 An example of running this program is:
        Name: Dale Reed

        Enter the new year for the first car: 2015
        Enter the type of car for the second car: Volkswagen
        Cars are:
        2015 Ford
        1999 Volkswagen
 
 Running it a second time is:
        Name: Dale Reed

        Enter the new year for the first car: 2001
        Enter the type of car for the second car: Porsche
        Cars are:
        2001 Ford
        1999 Porsche
 
*/
#include <iostream>
using namespace std;


// --------------------------------------------------------
void displayName()
{
    cout << "Name: Clark Chen \n" << endl;
}


// -------------- Declare the class here ----------------
class Car
{

    // Declare public Constructors
    public:
        Car()
        {
            dbType = "Ford";
            dbYear = 2000;
        }
        
        Car(int year, string type)
        {
            dbYear = year;
            dbType = type;
        }
        
    // Declare public Member functions
        void setYear(int year)
        {
            dbYear = year;
        }
        
        void setType(string type)
        {
            dbType = type;
        }
        
        void print(){
            cout << dbYear << " " << dbType << endl;
        }
    
        
    // Declare privte variable
    private:
        int dbYear = 0;
        string dbType;
};


// --------------------------------------------------------
//   ***   Do not change anything below this line  ***
// --------------------------------------------------------
int main() {
    Car c1;
    Car c2(1999, "Ford");

    displayName();
    
    cout << "Enter the new year for the first car: ";
    int newYear;
    cin >> newYear;
    c1.setYear( newYear);

    cout << "Enter the type of car for the second car: ";
    string type;
    cin >> type;
    c2.setType( type);

    cout << "Cars are: " << endl;
    c1.print();
    c2.print();
    
    cout << endl;
    return 0;
}
