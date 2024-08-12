#include <iostream>
using namespace std;

class student
{
    int id;
    char name;
    int *marks;

public:
    student(int rollNo, char studentName, int *studentMarks){
        id=rollNo;
        name=studentName;
        marks=studentMarks;
    }
    void calculate(){
        int sum=0;
        for(int i=0; i<6; i++){
            sum+=marks[i];
        }
        int avg=sum/6;
        if(avg<20)cout<<"fail";
        if(avg<40&&avg>20)cout<<"grade D";
        if(avg<60&&avg>40)cout<<"grade C";
        if(avg<80&&avg>60)cout<<"grade B";
        if(avg<100&&avg>80)cout<<"grade A";

    }
};

int main()
{
    int rollNo=26;
    char studentName='R';
    int studentMarks[]={95,94,91,87,90,78};
    student s(rollNo, studentName, studentMarks);
    s.calculate();
    return 0;
}