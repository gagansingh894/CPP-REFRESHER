#include <iostream>
#include <iomanip>

using namespace std;

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
    return 0;
}
