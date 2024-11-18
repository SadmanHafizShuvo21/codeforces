#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:

    //Properties/Attributes
    string name;
    string dept;
    string subject;
    double salary;

    //Methods/Member Functions
    void changeDept(string newDept){
        dept=newDept; 
    }
    //Setter
    void setSalary(double s){
        salary=s;
    }
    //Getter
    double getSalary(){
        return salary;
    }
};

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    Teacher t1;
    t1.name ="Shuvo";
    t1.subject="C++";
    t1.dept="Computer Science";
    //t1.salary=250000.00;
    t1.setSalary(250000.00);
    cout<<t1.name<<"\n";
    cout<<t1.getSalary()<<"\n";

    return 0;
}