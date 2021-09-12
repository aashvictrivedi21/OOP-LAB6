//LAB-6
//Q-1

#include<iostream>
using namespace std;

class TEE;  //declaration , not definition 
class ICA 
{
    private:
    int MATH,OPP,SE,DS;
    
    public:
    void get_ICA()
    {
        cout<<"\nMarks for ICA::"<<endl;
        cout<<"Marks of MATH:"<<endl;
        cin>>MATH;
        cout<<"Marks of OPP:"<<endl;
        cin>>OPP;
        cout<<"Marks of SE:"<<endl;
        cin>>SE;
        cout<<"Marks of DS:"<<endl;
        cin>>DS;
    }
    friend void cal(ICA,TEE);
};
class TEE
{
    private:
    int MATH,OPP,SE,DS;
    
    public:
    void get_TEE()
    {
        cout<<"\nMarks for TEE::"<<endl;
        cout<<"Marks of MATH:"<<endl;
        cin>>MATH;
        cout<<"Marks of OPP:"<<endl;
        cin>>OPP;
        cout<<"Marks of SE:"<<endl;
        cin>>SE;
        cout<<"Marks of DS:"<<endl;
        cin>>DS;
    }
      friend void cal(ICA,TEE);
}; //
void cal (ICA I1,TEE T1) //(CLASS NAME  OBJECT NAME)
{
    int TMATH,TOPP,TSE,TDS,Total;
    TMATH=I1.MATH+T1.MATH;
    TOPP=I1.OPP+T1.OPP;
    TSE=I1.SE+T1.SE;
    TDS=I1.DS+T1.DS;
    Total=TMATH+TOPP+TSE+TDS;
    cout<<"Total Marks of MATH:"<<TMATH<<endl;
    cout<<"Total Marks of OPP:"<<TOPP<<endl;
    cout<<"Toal Marks of SE:"<<TSE<<endl;
    cout<<"Total Marks of DS:"<<TDS<<endl;
    cout<<"RESULT:"<<Total<<endl;  
    
}
int main()
{
    ICA I1; //objest-ICA
    TEE T1; //object-TEE
    
    I1.get_ICA(); //input
    T1.get_TEE(); //input
    cal(I1,T1); //cal() will be called with 2object I1&T1
return 0;
    
}
