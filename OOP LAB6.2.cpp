//LAB6
//Q-2

#include<iostream>
#include<string.h>
using namespace std;
class Sales;
class Employee
{
    private:
    char Name[50];
    int Id;
    char Dept[50];
    int msalary;
    
    public:
    void get_employee()
    {
        cout<<"Enter Name,Id,department,monthly salary::";
        cin>>Name>>Id>>Dept>>msalary;
    }

void show_employee()
{
    cout<<"\n Employee name:"<<Name;
    cout<<"\n Id:"<<Id;
    cout<<"\n Department:"<<Dept;
    cout<<"\n monthly salary:"<<msalary;
}
friend class Sales; //making it a friend to use employee class in sales class
friend void cal(Employee, Sales);
};
class Sales
{
    private:
    float msales,incentive;
    char performance[50];
    public:
    void get_sales()
    {
        cout<<"Enter monthly sales:"<<endl;
        cin>>msales;
    }
    friend void cal(Employee, Sales);
        
};
void cal(Employee E1 ,Sales s1)
{
    if((s1.msales>=50)&&(s1.msales<100))
    s1.incentive=E1.msalary*0.10;
    else if((s1.msales>=100)&&(s1.msales<150))
    s1.incentive=E1.msalary*0.20;
    else
    s1.incentive=E1.msalary*0.30;
    
    if(s1.msales<50)
    strcpy(s1.performance,"Poor");
    else if(s1.msales<=100)
    strcpy(s1.performance,"Satisfactory");
    else if(s1.msales<150)
    strcpy(s1.performance,"Good");
    else
    strcpy(s1.performance,"Excellent");
    cout<<"\n Incentive:"<<s1.incentive;
    cout<<"\n Performance:"<<s1.performance;
}
int main()
{
    Employee E1;
    Sales S1;
    E1.get_employee();
    S1.get_sales();
    cal(E1, S1);
    return 0;
}