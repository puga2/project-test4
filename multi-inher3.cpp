#include<iostream>
using namespace std;
class student
{
    protected:
        int id;
        string name;
        char gender;
    public:
        void setStu(int id,string name,char gender)
        {
            this->id = id;
            this->name = name;
            this->gender = gender;
        }

};
// Base class or Derived class 
class Exam : public student
{
    protected:
        float math,khmer,program,web;
    public:
        void setData(float math,float khmer ,float progam,float web)
        {
            this->math = math;
            this->khmer = khmer;
            this->program = progam;
            this->web = web;
        }
};
// Derive class
class Result_Exam: public Exam
{
    public:
        double Total_Score()
        {
            return math + khmer + program + web;
        }
        double  average()
        {
            return Total_Score() / 3;
        }
        // show all info and Data
        void show_all_info(int n)
        {
            cout<<"====== student result ======"<<'\n';
            cout<<"Student ID       :"<<id<<'\n';
            cout<<"Student name     :"<<name<<'\n';
            cout<<"Student gender   :"<<gender<<"\n";
            cout<<"======== Score Exam ========"<<'\n';
            cout<<"Total Score of   :"<<Total_Score()<<'\n';
            cout<<"Average          :"<<average()<<'\n';
        }
};
// student stu;
// Exam ex;
Result_Exam re_ex;
int main()
{   
    re_ex.setStu(291,"Hong",'M');
    re_ex.setData(94.2,42.63,67.5,99.4);
    re_ex.show_all_info(1);
}