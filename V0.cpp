#include <iostream>
using namespace std;
int n=-1; //For the size loop
//Pointers
string* name;
int* rollno;
int* studentClass;
char* section;
double* age;
double* marks;
void Input(){ //Array Size Input
    while(n<=0){ //Input loop
        cout<<"Enter the size of the array: ";
        cin>>n;
        if(n<=0){
            cout<<"Invalid Input";
        }
    }
    //Array size allocation
    name = new string[n];
    rollno = new int[n];
    studentClass = new int[n];
    section = new char[n];
    age = new double[n];
    marks = new double[n];
}
void ArrayInput(){ //Elements input
    for(int i=0;i<n;i++){ //Input loop

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
    cout<<"Names\t";
    cout<<"Class\t";
    cout<<"Section\t  ";
    cout<<"Roll no  ";
    cout<<"Age\t";
    cout<<"Marks\n";
    cout<<"----------------------------------------------\n";
    for(int i=0;i<n;i++){
        cout<<name[i]<<"\t ";
        cout<<studentClass[i]<<"\t";
        cout<<section[i]<<"\t  ";
        cout<<rollno[i]<<"\t   ";
        cout<<age[i]<<"\t";
        cout<<marks[i]<<"\n";
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
    else{
        cout<<"Student not found";
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
int main(){
    Input();
    ArrayInput();
    while(true){
        int ch = Menu();
        if(ch==1){
            DisplayAll();
        }
        else if(ch==2){
            SearchDisplay();
        }
        else{
            cout<<"Wrong choice";
            Menu();
            ch = Menu();
        }
        char t;
        cout<<"Want to continue? (y/n)";
        cin>>t;
        if(t=='y'||t=='Y'){
            continue;
        }
        else if(t=='n'||t=='N'){
            DeleteArray();
            exit(0);
        }
        else{
            cout<<"Wrong Choice \n";
            cout<<"Want to continue? (y/n)";
            cin>>t;
            if(t=='y'||t=='Y'){
                continue;
            }
            else if(t=='n'||t=='N'){
                DeleteArray();
                false;
            }
            else{
                break;
            }
        }
    }
    return 0;
}