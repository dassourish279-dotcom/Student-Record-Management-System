#include <iostream>
using namespace std;
int n;
string* name;
int* rollno;
int* studentClass;
char* section;
double* age;
double* marks;
void Input(){
    cout<<"Enter the size of the array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Input";
        return;
    }
    name = new string[n];
    rollno = new int[n];
    studentClass = new int[n];
    section = new char[n];
    age = new double[n];
    marks = new double[n];
}
void ArrayInput(){
    for(int i=0;i<n;i++){

        cout<<"Enter the name:";
        cin>>name[i];
        cout<<"Enter roll no: ";
        cin>>rollno[i];
        cout<<"Enter the class: ";
        cin>>studentClass[i];
        cout<<"Enter the section: ";
        cin>>section[i];
        cout<<"Enter the age: ";
        cin>>age[i];
        cout<<"Enter the marks: ";
        cin>>marks[i];
        cout<< endl;
    }
}
int Menu(){
    int ch;
    cout<<"Enter 1 for displaying all the students"<<endl;
    cout<<"Enter 2 for searching a student"<<endl;
    cout<<"Enter: ";
    cin>>ch;
    return ch;
}
void DisplayAll(){
    cout<<"Names \t";
    cout<<"Class \t";
    cout<<"Section \t";
    cout<<"Roll no \t";
    cout<<"Age \t";
    cout<<"Marks \t"<<"\n";
    cout<<"----------------------- \n";
    for(int i=0;i<n;i++){
        cout<<name[i]<<"\t ";
        cout<<studentClass[i]<<"\t";
        cout<<section[i]<<"\t";
        cout<<rollno[i]<<"\t";
        cout<<age[i]<<"\t";
        cout<<marks[i]<<"\t";
        }
    }
void SearchDisplay(){
    int i,r,flg=0;
    cout<<"Enter the roll no: ";
    cin>>r;
    for(i=0;i<n;i++){
        if(rollno[i]==r){
            flg=1;
            break;
        }
        else{
            cout<<"Student not found";
        }
    }
    if(flg==1){
        cout<<"Student found: \n";
        cout<<"Name: "<<name[i]<<"\n";
        cout<<"Class: "<<studentClass[i]<<"\n";
        cout<<"Section: "<<section[i]<<"\n";
        cout<<"Rollno: "<<rollno[i]<<"\n";
        cout<<"Age: "<<age[i]<<"\n";
        cout<<"Marks: "<<marks[i]<<"\n";

    }
}
void DeleteArray(){
    delete[]name;
    delete[]rollno;
    delete[]studentClass;
    delete[]section;
    delete[]age;
    delete[]marks;
}
