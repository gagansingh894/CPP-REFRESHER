#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void fileIO() {

    string line;

    // write to fiie
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line."<<endl;
        myfileI << "I am adding another line."<<endl;
        myfileI.close();
    }
    else cout << "unable to open file";

    ifstream myfileO ("input.txt");
    if (myfileO.is_open())
    {
        while (getline(myfileO, line))
        {
            cout << line << endl;
        }
        myfileO.close();
    }
    else cout <<"unable to open file";
}

int main() {
    cout<<"Hello, World!"<<endl;

    //cout example
    int integer = 43;
    cout<<"The value of integer is: "<<integer<<endl;
    cout<<"The size of integer is: "<<sizeof(int)<<endl;
    cout<<"The size of float is: "<<sizeof(float)<<endl;
    cout<<"The size of short is: "<<sizeof(short)<<endl;
    cout<<"The size of character is: "<<sizeof(char)<<endl;
    cout<<"The size of long is: "<<sizeof(long)<<endl;
    cout<<"The size of bool is: "<<sizeof(bool)<<endl;

    // Constant Example
    const int weightGoal = 100;
    cout<<"Const Variable: "<<weightGoal<<endl;

    // Enum Example
    enum MONTHS {Jan, Feb, Mar, Apr};
    MONTHS month1 = Jan;
    MONTHS month2 = Feb;
    cout<<"Enum Example: "<<month1<<endl;
    cout<<"Enum Example: "<<month2<<endl;

    // iomanip example
    cout<<"Text 1"<<setw(10)<<"Text 2"<<endl;

    // Write to file and read
    fileIO();
    return 0;
}

