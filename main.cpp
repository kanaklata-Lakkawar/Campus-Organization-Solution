#include <iostream>

using namespace std;
class Result
{
public:
    int intMarks[5];
    int paperMarks[5];
    Result()
    {
       for(int i=0;i<5;i++)
        {   {
                intMarks[i]=0;
                paperMarks[i]=0;
            }  }
    }
};
class Student
{
public:
    int stuId=0,courseIndex;
    string stuName,stuLname,stuFname,stuUname,stuPass,teachCourse;

    Student()
    {
        stuName="UNKNOWN";
        stuLname="UNKNOWN";
        stuFname="UNKNOWN";
        teachCourse="NOT SET";
        stuId=0;
    }
int login2(string uname2,string psw2)
    {
     if(uname2==stuUname && psw2==stuPass)
     {
         return 1;
     }
    return 0;
    }
    void studentRegister(int id)
    {
    stuId=id+1;
    cout<<"---------------STUDENT REGISTRATION---------------"<<endl;
    cout<<"\nENTER DETAILS :"<<endl;
    cout<<"STUDENT ID : "<<stuId<<endl;
    cout<<"ENTER NAME :";
    cin>>stuName;
    cout<<"CREATE USERNAME :";
    cin>>stuUname;
    cout<<"CREATE PASSSWORD :";
    cin>>stuPass;
    cout<<"\nACCOUNT CREATED SUCCESSFULLY ..."<<endl;
    }
    void addStudent()
    {
     cout<<"STUDENT "<<endl;
     cout<<"ENTER STUDENT ID ";
     cin>>stuId;
     cout<<"ENTER NAME :";
     cin>>stuName;
     cout<<"CREATE USERNAME :";
     cin>>stuUname;
     cout<<"CREATE PASSSWORD :";
     cin>>stuPass;
     cout<<"\nSTUDENT ADDED SUCCESSFULLY..."<<endl;
    }
    void showStudent(Student s[],Result r[],int st)
    {
     cout<<"-----------------------------------::ALL STUDENT'S RECORD::----------------------------------"<<endl;
     cout<<"----------------------------------------------------------------------------------------------"<<endl;
     cout<<"| ID|  NAME  | FATHERNAME |  SURNAME  |  COURSE | INTERNAL MARKS | ON PAPER MARKS | TOTAL MARKS  |"<<endl;
     cout<<"----------------------------------------------------------------------------------------------"<<endl;
     for(int i=0;i<st;i++)
     {
     if(s[i].stuId!=0)
     cout<<"  "<<s[i].stuId<<"\t"<<s[i].stuName<<" \t"<<s[i].stuFname<<"\t\t"<<s[i].stuLname<<" \t"<<teachCourse<<" \t"<<r[i].intMarks[courseIndex]<<"\t\t"<<r[i].paperMarks[courseIndex]<<"\t\t"<<r[i].intMarks[courseIndex]+r[i].paperMarks[courseIndex]<<endl;
     }
     }
    void deleteStudent(Student s[],int st)
    {cout<<"-----------------------------------::DELETE STUDENT'::----------------------------------"<<endl;
     int tempStuId,ch7;
     cout<<"ENTER STUDENT ID :";
     cin>>tempStuId;
     cout<<"DO YOU REALLY WANT O DELETE THIS RECORD ?"<<"\n1. YES\n2 NO";
     cin>>ch7;
     switch(ch7)
    {
       case 1:
          for(int i=0;i<st;i++)
           {
           if(tempStuId==s[i].stuId)
           {
            s[i].stuId=0;
            printf("...OK RECORD DELETED\n");
           }
           }
           break;
     case 0:
            cout<<"...OK NO RECORD DELETED\n"<<endl;
            break;
    }
    }
    void studentResultShow(Student s,Result r)
    {cout<<"-----------------------------------:: STUDENT'S RESULT::----------------------------------"<<endl;
    cout<<"NAME : "<<stuName<<"\t"<<"FATHER NAME : "<<stuFname<<"\t"<<"ROLL NO. : "<<stuId<<endl;
    cout<<"\n------------------------------------------------------------------------------";
	cout<<"\nSUBJECTS \t\tINTERNAL\t\tON PAPER\t\tTOTAL";
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"MA-102"<<"\t\t"<<r.intMarks[0]<<"\t\t"<<r.paperMarks[0]<<"\t\t"<<r.intMarks[0]+r.paperMarks[0]<<endl;
	cout<<"EN-102"<<"\t\t"<<r.intMarks[1]<<"\t\t"<<r.paperMarks[1]<<"\t\t"<<r.intMarks[1]+r.paperMarks[1]<<endl;
	cout<<"CS-111"<<"\t\t"<<r.intMarks[2]<<"\t\t"<<r.paperMarks[2]<<"\t\t"<<r.intMarks[2]+r.paperMarks[2]<<endl;
	cout<<"HS-107"<<"\t\t"<<r.intMarks[3]<<"\t\t"<<r.paperMarks[3]<<"\t\t"<<r.intMarks[3]+r.paperMarks[3]<<endl;
	cout<<"MT-101"<<"\t\t"<<r.intMarks[4]<<"\t\t"<<r.paperMarks[4]<<"\t\t"<<r.intMarks[4]+r.paperMarks[4]<<endl;
	cout<<"\n------------------------------------------------------------------------------"<<endl;
	int tot=r.intMarks[0]+r.paperMarks[0]+r.intMarks[1]+r.paperMarks[1]+r.intMarks[2]+r.paperMarks[2]+r.intMarks[3]+r.paperMarks[3]+r.intMarks[4]+r.paperMarks[4];
    cout<<"TOTAL MARKS : "<<tot<<"\t";
    if(r.paperMarks[0]>35 && r.paperMarks[1]>35 && r.paperMarks[2]>35 && r.paperMarks[3]>35 && r.paperMarks[4]>35)
    cout<<"RESULT :PASS"<<endl;
    cout<<"RESULT :FAIL"<<endl;
    }
    void selectSubject()
    {
     int ch=menu8();
     switch(ch)
     {
      case 1:teachCourse="MA-102";
             courseIndex=0;
      break;
      case 2: teachCourse="EN-102";
             courseIndex=1;
      break;
      case 3:teachCourse="CS-111";
             courseIndex=2;
      break;
      case 4:teachCourse="HS-107";
             courseIndex=3;
      break;
      case 5:teachCourse=="MT-101";
             courseIndex=4;
      break;
     }
     }
     void resultBySubject(Student s,Result r)
    {cout<<"-----------------------------------::RESULT BY SUBJECT::----------------------------------"<<endl;
    selectSubject();
    cout<<"NAME : "<<stuName<<"\t"<<"FATHER NAME : "<<stuFname<<"\t"<<"ROLL NO. : "<<stuId<<endl;
    cout<<"\n------------------------------------------------------------------------------";
	cout<<"\nSUBJECTS \t\tINTERNAL\t\tON PAPER\t\tTOTAL";
	cout<<"\n-------------------------------------------------------------------------------\n";
    cout<<teachCourse<<"\t"<<r.intMarks[courseIndex]<<"\t"<<r.paperMarks[courseIndex]<<endl;
    }
int menu8()
{
 int ch8;
 cout<<"----------------SELECT SUBJECT----------------"<<endl;
 cout<<"1) MA-102"<<endl;
 cout<<"2) EN-102"<<endl;
 cout<<"3) CS-111"<<endl;
 cout<<"4) HS-107"<<endl;
 cout<<"5) MT-101"<<endl;
 cout<<"ENTER YOUR CHOICE :";
 cin>>ch8;
return ch8;
}
void updateStudent(Student s[],int st)
    {cout<<"-----------------------------------::UPDATE STUDENT'S RECORD::----------------------------------"<<endl;
    int tempStuId,ch6;
    string tempStuName,tempStuLname,tempStuFname,tempCourse,tempClass;
        cout<<"1.FIRSTNAME"<<endl;
        cout<<"2.LASTNAME"<<endl;
        cout<<"3.MIDDLE NAME"<<endl;
        cout<<"4.COURSE"<<endl;
        cout<<"0.EXIT"<<endl;
        cout<<"ENTER YOUR CHOICE :";
        cin>>ch6;
    switch(ch6)
    {
    case 1:
    cout<<"-------------------::UPDATE FIRSTNAME::-------------------------"<<endl;
    for(int i=0;i<st;i++)
    {
        cout<<"ENTER STUDENT ID :";
        cin>>tempStuId;
        if(tempStuId==s[i].stuId)
    {
    cout<<"STUDENT ID "<<s[i].stuId<<" FIRSTSNAME IS "<<s[i].stuName<<endl;
    cout<<"ENTER NEW NAME :";
    cin>>tempStuName;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<s[i].stuName<<" TO "<<tempStuName<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
     s[i].stuName=tempStuName;
    cout<<"OK NAME IS UPDATED...TO "<<s[i].stuName<<endl;
    break;
    case 2:
    cout<<"OK NAME IS NOT UPDATED..."<<endl;
    break;
    }
    }
    }
    break;
    case 2:
        cout<<"-------------------::UPDATE MIDDLE NAME::-------------------------"<<endl;
    for(int i=0;i<st;i++)
    {
        cout<<"ENTER STUDENT ID :";
        cin>>tempStuId;
        if(tempStuId==s[i].stuId)
    {
    cout<<"STUDENT ID : "<<s[i].stuId<<"MIDDLE NAME IS "<<s[i].stuFname<<endl;
    cout<<"ENTER NEW NAME :";
    cin>>tempStuFname;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<s[i].stuFname<<" TO "<<tempStuFname<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
     s[i].stuFname=tempStuFname;
    cout<<"OK MIDDLE NAME IS UPDATED...TO "<<s[i].stuFname<<endl;
    break;
    case 2:
    cout<<"OK MIDDLE NAME IS NOT UPDATED..."<<endl;
    break;
    }
    }
    }
        break;
    case 3:
         cout<<"-------------------::UPDATE LASTNAME::-------------------------"<<endl;
    for(int i=0;i<st;i++)
    {
        cout<<"ENTER STUDENT ID :";
        cin>>tempStuId;
        if(tempStuId==s[i].stuId)
    {
    cout<<"STUDENT ID : "<<s[i].stuId<<" LASTNAME IS "<<s[i].stuLname<<endl;
    cout<<"ENTER NEW NAME :";
    cin>>tempStuLname;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<s[i].stuLname<<" TO "<<tempStuLname<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
     s[i].stuLname=tempStuLname;
    cout<<"OK LASTNAME IS UPDATED...TO "<<s[i].stuLname<<endl;
    break;
    case 2:
    cout<<"OK LASTNAME IS NOT UPDATED..."<<endl;
    break;
    }
    }
    }
    break;
    }
    }};
class Teacher:public Student
{
public:
    string teachUserName,teachPass,teachFname,tempID,n;
    string teachLname;
    int salary,passCount=0,failCount=0,teachId;

    Teacher()
    {
    teachFname="UNKNOWN";
    teachLname="UNKNOWN";
    salary=0;
    teachId=0;
    }
    int login1(string uname1,string psw1)
    {
     if(uname1==teachUserName && psw1==teachPass)
     {
     return 1;
     cout <<"\nLOGIN SUCCESSFULLY ...\n"<<endl;
     }
    return 0;
    }
    void teacherLogin()
    {
        cout<<">> WELCOME TEACHER "<<teachFname<<"\n"<<endl;
        cout<<"SUBJECT : "<<teachCourse<<endl;
    }
    void teacherRegister(int id)
    {
    teachId=id+1;
    cout<<"---------------TEACHER REGISTRATION---------------"<<endl;
    cout<<"\nENTER DETAILS :"<<endl;
    cout<<"EMPLOYEE ID : "<<teachId<<endl;
    cout<<"ENTER NAME :";
    cin>>teachFname;
    cout<<"CREATE USERNAME :";
    cin>>teachUserName;
    cout<<"CREATE PASSSWORD :";
    cin>>teachPass;
    cout<<"\nACCOUNT CREATED SUCCESSFULLY ..."<<endl;
    }
    void addTeacher()
    {
        cout<<"\nENTER EMPLOYEE ID :";
        cin>>teachId;
        cout<<"ENTER FIRSTNAME :";
        cin>>teachFname;
        cout<<"ENTER LASTNAME :";
        cin>>teachLname;
        cout<<"CREATE USERNAME :";
        cin>>teachUserName;
        cout<<"CREATE PASSSWORD :";
        cin>>teachPass;
    }
    void showTeacher(Teacher t[],int tt)
    {
        cout<<"---------------------:: SHOW TEACHER ::-------------------------"<<endl;
        cout<<"----------------------------------------------------------------------------------------------"<<endl;
        cout<<"| EMPLOYEE ID | FIRSTNAME | LASTNAME | COURSE | SALARY | NUMBER OF STUDENTS |"<<endl;
        cout<<"----------------------------------------------------------------------------------------------"<<endl;
            for(int i=0;i<tt;i++)
        {
             if(t[i].teachId!=0)
        {
        cout<<"\t"<<t[i].teachId<<"\t"<<t[i].teachFname<<"\t\t"<<t[i].teachLname<<"\t"<<t[i].teachCourse<<"\t"<<t[i].salary<<"\t"<<endl;
        }
        }
        cout<<"----------------------------------------------------------------------------------------------"<<endl;
    }
    void deleteTeacher(Teacher t[],int tt)
    {cout<<"-----------------------------------::DELETE TEACHER'S RECORD::----------------------------------"<<endl;
      int tempTeachId;
      cout<<"ENTER EMPLOYEE ID :";
      cin>>tempTeachId;
      cout<<"DO YOU REALLY WANT TO DELETE THIS RECORD ??"<<endl;
      cout<<"1. YES\n2 NO"<<endl;
      int ch7;
      cin>>ch7;
      switch(ch7)
      {
       case 1:
           for(int i=0;i<tt;i++)
           {
           if(tempTeachId==t[i].teachId)
           {
            t[i].teachId=0;
            printf("...OK RECORD DELETED\n");
           }
           }
           break;
     case 0:
            cout<<"...OK NO RECORD DELETED\n"<<endl;
            break;
    }
    }
    void addSalary(Teacher t[],int tt,int st)
    {cout<<"-----------------------------------::ADD SALARY::----------------------------------"<<endl;
        int tempTeachId;
        cout<<"ENTER EMPLOYEE ID :";
        cin>>tempTeachId;
        for(int i=0;i<tt;i++)
        {
           if(tempTeachId==t[i].teachId)
        {
        cout<<"EMPLOYEE ID : "<<t[i].teachId<<endl;
        cout<<"NAME : "<<t[i].teachFname<<endl;
        cout<<"COURSE :"<<t[i].teachCourse<<endl;
        cout<<"SALARY: "<<t[i].salary<<endl;
        cout<<"STUDENT :"<<st<<endl;
        cout<<"ENTER SALARY : ";
        cin>>t[i].salary;
        cout<<"OK....DONE"<<endl;
        }
        }
    }
      void addMarks(Student s[],Result r[],int st)
{cout<<"-----------------------------------::ADD MARKS::----------------------------------"<<endl;
    cout<<"\nSUBJECT : "<<teachCourse;
	for(int i=0;i<st;i++)
	{
	cout<<"\n::ADD MARKS ::";
	if(s[i].stuId!=0)
    {
    cout<<"\nINTERNAL 20 OUT OF : ";
	cin>>r[i].intMarks[courseIndex];
	cout<<"\nON PAPER 80 OUT OF : ";
	cin>>r[i].paperMarks[courseIndex];
	cout<<"\n\nnext...";
    }
	}
    cout<<"\nOK DONE...ALL STUDENTS MARKS ADDED"<<endl;
    }
    void updateMarks(Student s[],Result r[],int st)
    {cout<<"-----------------------------------::UPDATE MARKS::----------------------------------"<<endl;
        cout<<"\nSUBJECT : "<<teachCourse;
        int tempStuId,newIntMarks;
        cout<<"1. INTERNAL"<<endl;
        cout<<"2.ON PAPER"<<endl;
        int lp=1;
        while(lp)
        {
        int ch;
        cout<<"ENTER YOUR CHOICE :";
        cin>>ch;
        switch(ch)
        {
         case 1:cout<<"ENTER ROLL NO :";
                cin>>tempStuId;
                for(int i=0;i<st;i++)
                {
                    if(tempStuId==s[i].stuId)
                    {
                     cout<<"OLD MARKS :"<<r[i].intMarks[courseIndex]<<endl;
                    cout<<"NEW MARKS :";
                    cin>>newIntMarks;
                    cout<<"\nOK DONE ....\nMarks updated !!!"<<endl;
                    r[i].intMarks[courseIndex]=newIntMarks;
                    }
                }
               break;
         case 2:cout<<"ENTER ROLL NO :";
                cin>>tempStuId;
                for(int i=0;i<st;i++)
                {
                    if(tempStuId==s[i].stuId)
                    {
                     cout<<"OLD MARKS :"<<r[i].paperMarks[courseIndex]<<endl;
                    cout<<"NEW MARKS :";
                    cin>>newIntMarks;
                    cout<<"\nOK DONE ....\nMarks updated !!!"<<endl;
                    r[i].paperMarks[courseIndex]=newIntMarks;
                    }
                }
               break;
         case 0:lp=0;
               break;
        }
       }
    }
    void resultShow(Student s[],Result r[],int st)
    {cout<<"-----------------------------------::SUBJECT TEACHER RESULT::----------------------------------"<<endl;
        cout<<"\nSUBJECT : "<<teachCourse<<endl;
        cout<<"\n-------------------------------------------"<<endl;
        cout<<"ROLL NO\t NAME\tINTERNAL\tON PAPER\tTOTAL"<<endl;
        cout<<"-------------------------------------------"<<endl;
        for(int i=0;i<st;i++)
        {
        if(r[i].paperMarks[courseIndex]>=35)
        passCount++;
        else
        failCount++;
        cout<<s[i].stuId<<"\t"<<s[i].stuName<<"\t"<<r[i].intMarks[courseIndex]<<"\t\t"<<r[i].paperMarks[courseIndex]<<"\t\t"<<r[i].intMarks[courseIndex]+r[i].paperMarks[courseIndex]<<endl;
        }
        cout<<"TOTAL STUDENTS : "<<st<<"\t"<<"PASS : "<<passCount<<"\t"<<"FAIL : "<<failCount<<endl;
    }
    void updateTeacher(Teacher t[],int tt)
    {
    cout<<"-------------------::UPDATE SECTION::-------------------------"<<endl;
    string tempTeachFname,tempTeachLname,tempTeachCourse;
    int lp6=1,tempSalary;
    while(lp6)
    {
{
cout<<"1. FIRSTNAME"<<endl;
cout<<"2. LASTNAME"<<endl;
cout<<"3. COURSE"<<endl;
cout<<"4. SALARY"<<endl;
cout<<"0. EXIT"<<endl;
}
int ch5;
cout<<"ENTER YOUR CHOICE :";
cin>>ch5;
    switch(ch5)
    {
    case 1:
    {
    cout<<"-------------------::UPDATE FIRSTNAME::-------------------------"<<endl;
    for(int i=0;i<tt;i++)
    {
        cout<<"\nEMPLOYEE ID : "<<t[i].teachId<<"  CURRENT FIRSTNAME IS "<<t[i].teachFname<<endl;
    cout<<"ENTER NEW FIRSTNAME :";
    cin>>tempTeachFname;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<t[i].teachFname<<" TO "<<tempTeachFname<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
    t[i].teachFname=tempTeachFname;
    cout<<"OK FIRSTNAME IS UPDATED..."<<endl;
    break;
    case 2:
    cout<<"OK FIRSTNAME IS NOT UPDATED..."<<endl;
    break;
    }
    }
    }
    break;
    case 2:
    {
    cout<<"-------------------::UPDATE LASTNAME::-------------------------"<<endl;
    for(int i=0;i<tt;i++)
    {
     cout<<"\nEMPLOYEE ID : "<<t[i].teachId<<"  CURRENT LASTNAME IS "<<t[i].teachLname<<endl;
    cout<<"ENTER NEW LASTNAME :";
    cin>>tempTeachLname;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<t[i].teachLname<<" TO "<<tempTeachLname<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
    t[i].teachLname=tempTeachLname;
    cout<<"OK FIRSTNAME IS UPDATED..."<<endl;
    break;
    case 2:
    cout<<"OK FIRSTNAME IS NOT UPDATED..."<<endl;
    break;
   }
    }
   }
   break;
   case 3:
   {
    cout<<"-------------------::UPDATE COURSE::-------------------------"<<endl;
    for(int i=0;i<tt;i++)
    {
     cout<<"\nEMPLOYEE ID : "<<t[i].teachId<<"  CURRENT COURSE IS "<<t[i].teachCourse<<endl;
    cout<<"ENTER NEW COUSRSE :";
    cin>>tempTeachCourse;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<t[i].teachCourse<<" TO "<<tempTeachCourse<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
     {
    case 1:
    t[i].teachCourse=tempTeachCourse;
    cout<<"OK TEACHER'S COURSE IS UPDATED..."<<endl;
    break;
    case 2:
    cout<<"OK TEACHER'S COURSE IS NOT UPDATED..."<<endl;
    break;
    }
    }
      }
     break;
    case 4:
    {
    {
    cout<<"-------------------::UPDATE SALARY::-------------------------"<<endl;
    for(int i=0;i<tt;i++)
    {
     cout<<"\nEMPLOYEE ID : "<<t[i].teachId<<" CURRENT SALARY IS "<<salary<<endl;
    cout<<"ENTER NEW SALARY :";
    cin>>tempSalary;
    cout<<"DO YOU REALLY WANT TO CHANGE "<<salary<<" TO "<<tempSalary<<endl;
    cout<<"1. YES"<<endl<<"2. NO"<<endl;
    cout<<"ENTER YOUR CHOICE :";
    int ch;
    cin>>ch;
    switch(ch)
     {
     case 1:
     t[i].salary=tempSalary;
     cout<<"OK TEACHER'S SALARY IS UPDATED..."<<endl;
     break;
     case 2:
     cout<<"OK TEACHER'S SALARY IS NOT UPDATED..."<<endl;
     break;
     }
    }
     }
     }
     break;
     case 0:lp6=0;
     break;
      }
     }
    }
};
class Admin:public Teacher
{
public:
    string userName;
    string pass;
    string name;
    int login(string uname,string psw)
    {
     if(uname==userName && psw==pass)
     {
         return 1;
     }
    return 0;
    }
    void adminLogin()
    {
        cout<<"\nLOGIN SUCCESSFULLY ...\n"<<endl;
        cout<<">> WELCOME ADMIN "<<name<<"\n"<<endl;
    }
    void adminRegister()
    {
    cout<<"---------------REGISTRATION---------------"<<endl;

    cout<<"\nENTER DETAILS :"<<endl;
    cout<<"ENTER NAME :";
    cin>>name;
    cout<<"CREATE USERNAME :";
    cin>>userName;
    cout<<"CREATE PASSSWORD :";
    cin>>pass;
    cout<<"\nACCOUNT CREATED SUCCESSFULLY ..."<<endl;
    }
    void searchResult(Student s[],Result r[],int st)
    {
    int tempStuId;
    cout<<"\nENTER STUDENT ID : ";
 	cin>>tempStuId;
 	for(int i=0;i<st;i++)
 	{
 	if(tempStuId==s[i].stuId)
	{
	cout<<"\n\n\n******************* RESULT *******************";
	cout<<"\nCOLLEGE : ASTERISC HIGHER UNIVERSITY, NAGPUR ";
	cout<<"\nNAME : "<<s[i].stuName<<" "<<s[i].stuLname<<"       FATHER NAME : "<<s[i].stuFname<<"  "<<s[i].stuLname;
	cout<<"\nROLL NUMBER : "<<s[i].stuId;
	cout<<"\n------------------------------------------------------------------------------";
	cout<<"\nSUBJECTS \tINTERNAL\t\tON PAPER\t\tTOTAL";
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"MA-102"<<"\t\t"<<r[i].intMarks[0]<<"\t\t"<<r[i].paperMarks[0]<<"\t\t"<<r[i].intMarks[0]+r[i].paperMarks[0]<<endl;
	cout<<"EN-102"<<"\t\t"<<r[i].intMarks[1]<<"\t\t"<<r[i].paperMarks[1]<<"\t\t"<<r[i].intMarks[1]+r[i].paperMarks[1]<<endl;
	cout<<"CS-111"<<"\t\t"<<r[i].intMarks[2]<<"\t\t"<<r[i].paperMarks[2]<<"\t\t"<<r[i].intMarks[2]+r[i].paperMarks[2]<<endl;
	cout<<"HS-107"<<"\t\t"<<r[i].intMarks[3]<<"\t\t"<<r[i].paperMarks[3]<<"\t\t"<<r[i].intMarks[3]+r[i].paperMarks[3]<<endl;
	cout<<"MT-101"<<"\t\t"<<r[i].intMarks[4]<<"\t\t"<<r[i].paperMarks[4]<<"\t\t"<<r[i].intMarks[4]+r[i].paperMarks[4]<<endl;
	cout<<"\n------------------------------------------------------------------------------";
    int total=r[i].intMarks[0]+r[i].paperMarks[0]+r[i].intMarks[1]+r[i].paperMarks[1]+r[i].intMarks[2]+r[i].paperMarks[2]+r[i].intMarks[3]+r[i].paperMarks[3]+r[i].intMarks[4]+r[i].paperMarks[4];
 	if(total>=35)
 	cout<<"\n        TOTAL MARKS: "<<total <<"     RESULT: PASS";
	else
        cout<<"\n        TOTAL MARKS: "<<total <<"     RESULT: FAIL";

     }
	 }
    }
    void showResult(Student s[],Result r[],int st)
    {cout<<"-----------------------------------::ALL STUDENT'S RESULT::----------------------------------"<<endl;
    for(int i=0;i<st;i++)
    {
    cout<<"\nCOLLEGE :"<<" ASTERISC HIGHER UNIVERSITY, NAGPUR"<<endl;
    cout<<"NAME : "<<s[i].stuName<<"\t"<<"FATHER NAME : "<<s[i].stuFname<<"\t"<<"ROLL NO. : "<<s[i].stuId<<endl;
    cout<<"\n------------------------------------------------------------------------------";
	cout<<"\nSUBJECTS \t\tINTERNAL\t\tON PAPER\t\tTOTAL";
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"MA-102"<<"\t\t"<<r[i].intMarks[0]<<"\t\t"<<r[i].paperMarks[0]<<"\t\t"<<r[i].intMarks[0]+r[i].paperMarks[0]<<endl;
	cout<<"EN-102"<<"\t\t"<<r[i].intMarks[1]<<"\t\t"<<r[i].paperMarks[1]<<"\t\t"<<r[i].intMarks[1]+r[i].paperMarks[1]<<endl;
	cout<<"CS-111"<<"\t\t"<<r[i].intMarks[2]<<"\t\t"<<r[i].paperMarks[2]<<"\t\t"<<r[i].intMarks[2]+r[i].paperMarks[2]<<endl;
	cout<<"HS-107"<<"\t\t"<<r[i].intMarks[3]<<"\t\t"<<r[i].paperMarks[3]<<"\t\t"<<r[i].intMarks[3]+r[i].paperMarks[3]<<endl;
	cout<<"MT-101s"<<"\t\t"<<r[i].intMarks[4]<<"\t\t"<<r[i].paperMarks[4]<<"\t\t"<<r[i].intMarks[4]+r[i].paperMarks[4]<<endl;
	cout<<"\n------------------------------------------------------------------------------"<<endl;
	int tot=r[i].intMarks[0]+r[i].paperMarks[0]+r[i].intMarks[1]+r[i].paperMarks[1]+r[i].intMarks[2]+r[i].paperMarks[2]+r[i].intMarks[3]+r[i].paperMarks[3]+r[i].intMarks[4]+r[i].paperMarks[4];
    cout<<"TOTAL MARKS : "<<tot<<"\t";
    if(r[i].paperMarks[0]>35 &&r[i].paperMarks[1]>35 && r[i].paperMarks[2]>35 && r[i].paperMarks[3]>35 && r[i].paperMarks[4]>35)
    cout<<"RESULT :PASS"<<endl;
    cout<<"RESULT :FAIL"<<endl;
    }
    }
    void editResult(Student s[],Result r[],int st)
    {  int tempStuId,ch,ch1,marks;
    cout<<"ENTER ROLL NO. :";
    cin>>tempStuId;


      for(int i=0;i<st;i++)
      {
          if(tempStuId==s[i].stuId)
    {
        selectSubject();
     cout<<"1. INTERNAL MARKS\n2. PAPER MARKS"<<endl;
          cout<<"ENTER YOUR CHOICE :";
     cin>>ch;
     switch(ch)
     {
     case 1:cout<<"ROLL NO : "<<s[i].stuId<<"  INTERNAL MARKS : "<<r[i].intMarks[courseIndex]<<endl;
            cout<<"ENTER MARSK : ";
            cin>>marks;
            cout<<" DO YOU REAL WANT TO CHANGE INTERNAL MARKS FROM "<<r[i].intMarks[courseIndex]<<" TO "<<marks<<endl;
            cout<<"1. YES\n2.NO "<<endl;
            cout<<"ENTER YOUR CHOICE :";
            cin>>ch1;
            switch(ch1)
            {
            case 1:r[i].intMarks[courseIndex]=marks;
                   cout<<" OK MARKS IS UPDATED "<<endl;
                break;
            case 2:cout<<" OK MARKS IS NOT UPDATED "<<endl;
                break;
            }

         break;
     case 2:cout<<"ROLL NO : "<<s[i].stuId<<"  INTERNAL MARKS : "<<r[i].paperMarks[courseIndex]<<endl;
            cout<<"ENTER MARSK : ";
            cin>>marks;
            cout<<" DO YOU REAL WANT TO CHANGE INTERNAL MARKS FROM "<<r[i].paperMarks[courseIndex]<<" TO "<<marks<<endl;
            cout<<"ENTER YOUR CHOICE :";
            cin>>ch1;
            switch(ch1)
            {
            case 1:r[i].paperMarks[courseIndex]=marks;
                   cout<<" OK MARKS IS UPDATED "<<endl;
                break;
            case 2:cout<<" OK MARKS IS NOT UPDATED "<<endl;
                break;
            }
         break;
          }
        }
      }
    }
};
int menu()
{
int ch;
cout<<"\n1.ADMIN DEPARTMENT"<<"\n2.TEACHER DEPARTMENT"<<"\n3.STUDENT DEPARTMENT"<<"\n4.RESULT SHOW"<<"\n0.EXIT"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch;
return ch;
}
int menu1()
{
int ch1;
cout<<"\n1.LOGIN"<<"\n2.REGISTRATION"<<"\n0.BACK TO MENU"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch1;
return ch1;
}
int menu2()
{
int ch2;
cout<<"<< ADMIN PORTAL >>\n"<<"1. TEACHER ACCOUNT\n"<<"2. STUDENT ACCOUNT\n"<<"3. RESULT SHOW\n"<<"0. LOGOUT\n"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch2;
return ch2;
}
int menu3()
{
int ch3;
cout<<"\n1. ADD TEACHER"<<"\n2. UPDATE TEACHER"<<"\n3. DELETE TEACHER"<<"\n4. SHOW TEACHER"<<"\n5. SALARY TEACHER"<<"\n0. BACK MENU"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch3;
return ch3;
}
int menu4()
{
int ch4;
cout<<"\n1. ADD STUDENT"<<"\n2. UPDATE STUDENT"<<"\n3. DELETE STUDENT"<<"\n4. SHOW STUDENT"<<"\n0. BACK MENU"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch4;
return ch4;
}
int menu6()
{
int ch6;
cout<<"\n1. SEARCH"<<"\n2. SHOW"<<"\n3. EDIT"<<"\n0. BACK TO MAIN MENU"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch6;
return ch6;
}
int menu7()
{
int ch7;
cout<<"\n<< TEACHER PORTAl >>"<<"\n1. SELECT SUBJECT"<<"\n2. ADD MARKS"<<"\n3. RESULT"<<"\n0. LOGOUT"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch7;
return ch7;
}
int menu9()
{
int ch9;
cout<<"----------------ADD MARKS------------------------"<<endl;
cout<<"\n1. ADD MARKS"<<"\n2. UPDATE MARKS"<<"\n0. BACK MENU"<<endl;
cout<<"ENTER YOUR CHOICE :";
cin>>ch9;
return ch9;
}
int main()
{
    Admin a[3];
    Teacher t[5];
    Student s[10];
    Result r[10];
    int n,wcount=0,st=0,tt=0;
    string uname,psw,uname1,psw1,uname2,psw2;
    cout<<"*** WELCOME TO SCHOOL MANAGEMENT SYSTEM ***\n\nMENU :"<<endl;
    int lp=1;
    while(lp)
    {
     int ch=menu();
     switch(ch)
     {
     case 1:
         {
           int lp1=1;
           while(lp1)
           {
               int ch1=menu1();
               switch(ch1)
               {
                    case 1:
                        {
                        cout<<"------------------ADMIN LOGIN------------------"<<endl;
                        cout<<"ENTER USERNAME :";
                        cin>>uname;
                        cout<<"ENTER PASSWORD :";
                        cin>>psw;
                        for(int i=0;i<n;i++)
                        {
                            int x=a[i].login(uname,psw);
                            if(x==1)
                            {
                            a[i].adminLogin();
                                    int lp3=1;
        while(lp3)
        {
            int ch2=menu2();
            switch(ch2)
            {
            case 1:
                {
                   int lp4=1;
                   while(lp4)
                   {cout<<"--------------------TEACHER SECTION-------------------"<<endl;
                       int ch3=menu3();
                       switch(ch3)
                       {
                          case 1:
                              int n;
                              cout<<"---------------------:: ADD TEACHER ::-------------------------"<<endl;
                              cout<<"ENTER NUMBER OF TEACHERS TO ADD :";
                               cin>>n;
                               for(int j=tt;j<tt+n;j++)
                                {
                                 t[j].addTeacher();
                                }
                                tt+=n;
                                 break;
                          case 2:
                                a[i].updateTeacher(t,tt);
                                 break;
                           case 3:
                                 a[i].deleteTeacher(t,tt);
                                  break;
                           case 4:
                                 a[i].showTeacher(t,tt);
                                 break;
                           case 5:a[i].addSalary(t,tt,st);
                                 break;
                           case 0:lp4=0;
                                 break;
                       }
                   }
                }
                break;
            case 2:
                  {
                   int lp5=1;
                   while(lp5)
                   {cout<<"--------------------STUDENT SECTION-------------------"<<endl;
                       int ch4=menu4();
                       switch(ch4)
                       {
                           case 1:
                               int n;
                               cout<<"---------------------:: ADD STUDENT ::-------------------------"<<endl;
                               cout<<"ENTER NUMBER OF STUDENTS TO ADD :";
                               cin>>n;
                               for(int j=st;j<st+n;j++)
                                {
                                 s[j].addStudent();
                                }
                                st+=n;
                                 break;
                           case 2:
                                a[i].updateStudent(s,st);
                                 break;
                           case 3:
                                a[i].deleteStudent(s,st);
                                 break;
                           case 4:
                                 a[i].showStudent(s,r,st);
                                 break;
                           case 0:lp5=0;
                                 break;
                       }
                   }
                  }
                break;
            case 3:
                {
                  int lp=1;
                  while(lp)
                {
                int ch6=menu6();

                 switch(ch6)
                {
                    case 1:a[i].searchResult(s,r,st);
                        break;
                    case 2:a[i].showResult(s,r,st);
                        break;
                    case 3:a[i].editResult(s,r,st);
                        break;
                    case 0:lp=0;
                        break;
                }
                }
                }
                  break;
            case 0:lp3=0;
                break;
            }
        }         wcount=0;
                             }
                         else
                            wcount++;
                            }
                            if(wcount==n)
                             {
                            cout<<"\nINVALID USERNAME !!!\n PLEASE REGISTER FIRST..."<<endl;
                             wcount=0;
                             }
                        }
                           break;
                    case 2:
                        {
                           a[n].adminRegister();
                           n++;
                        }
                          break;
                    case 0:
                        lp1=0;
                        break;
             }
           }
         }
        break;
     case 2:{
           int lp1=1;
           while(lp1)
           {
               int ch1=menu1();
               switch(ch1)
               {
                    case 1:
                        {
                        cout<<"------------------TEACHER LOGIN------------------"<<endl;
                        cout<<"ENTER USERNAME :";
                        cin>>uname1;
                        cout<<"ENTER PASSWORD :";
                        cin>>psw1;
                        for(int i=0;i<tt;i++)
                        {
                            int x1=t[i].login1(uname1,psw1);
                            if(x1==1)
                            {
                            t[i].teacherLogin();
                                    int lp3=1;
        while(lp3)
        {
            int ch7=menu7();
            switch(ch7)
            {
            case 1:
                   cout<<"<< TEACHER PORTAL >>"<<endl;
                   t[i].selectSubject();
                   t[i].teacherLogin();
                break;
            case 2:cout<<"<< TEACHER PORTAL >>"<<endl;
                  {
                   int lp5=1;
                   while(lp5)
                   {
                       int ch9=menu9();
                       switch(ch9)
                       {
                           case 1:
                                 t[i].addMarks(s,r,st);

                                 break;
                           case 2:
                                 t[i].updateMarks(s,r,st);
                                 break;
                           case 0:lp5=0;
                                 break;
                       }
                   }
                  }
                break;
            case 3:
                    t[i].resultShow(s,r,st);
                  break;
            case 0:lp3=0;
                break;
            }
            }       }
                             else
                            wcount++;
                            if(wcount==tt)
                             {
                            cout<<"\nINVALID USERNAME !!!\n PLEASE REGISTER FIRST..."<<endl;
                             wcount=0;
                             }
                        }
                        }
                           break;
                    case 2:
                        {
                           t[tt].teacherRegister(t[tt-1].teachId);
                           tt++;
                        }
                          break;
                    case 0:
                        lp1=0;
                          break;
            }
           }
         }
         break;
     case 3:cout<<"STUDENT"<<endl;
     {
           int lp1=1;
           while(lp1)
           {
               int ch1=menu1();
               switch(ch1)
               {
                    case 1:
                        {
                        cout<<"------------------STUDENT LOGIN------------------"<<endl;
                        cout<<"ENTER USERNAME :";
                        cin>>uname2;
                        cout<<"ENTER PASSWORD :";
                        cin>>psw2;
                        for(int i=0;i<st;i++)
                        {
                            int x2=s[i].login2(uname2,psw2);
                            if(x2==1)
                            {
                            cout<<"\nLOGIN SUCCESSFULLY ...\n"<<endl;
                            cout<<">> WELCOME STUDENT\n"<<endl;
                                    int lp3=1;
        while(lp3)
        {
            int ch;
            cout<<"<< STUDENT PORTAL >>"<<endl;
           cout<<"1.RESULT\n2.RESULT BY SUBJECT\n0.LOGOUT\n"<<endl;
           cout<<"ENTER YOUR CHOICE :";
           cin>>ch;
           switch(ch)
            {
            case 1:cout<<"<< STUDENT PORTAL >>"<<endl;
                    s[i].studentResultShow(s[i],r[i]);
                break;
            case 2:cout<<"<< STUDENT PORTAL >>"<<endl;
                    s[i].resultBySubject(s[i],r[i]);
                break;
            case 0:lp3=0;
                break;
            }
        }
                             wcount=0;
                             }
                             else
                            wcount++;

                            if(wcount==st)
                             {
                            cout<<"\nINVALID USERNAME !!!\n PLEASE REGISTER FIRST..."<<endl;
                             wcount=0;
                             }
                        }
                        }
                           break;
                    case 2:
                           s[st].studentRegister(s[st-1].stuId);
                           st++;
                          break;
                    case 0:
                        lp1=0;
                        break;
             }
           }
         }
        break;
     case 0:cout<<"THANK YOU !!!........FOR USING THE SYSTEM"<<endl;
         lp=0;
        break;
     }
    }
    return 0;
}
