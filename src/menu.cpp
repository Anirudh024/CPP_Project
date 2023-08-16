#include <iostream>
#include "stdlib.h"
#include "conio.h" 
#include <map>
#include "stfun.h"
#include "modfun.h"
#include <fstream>

using namespace std;

int main(){
    //log file
    ofstream outfile;
    ifstream fin;
    fin.open("log.txt");
    outfile.open("log.txt", ios::app);

    //variables
    int chk=10,stop=1,i=0,id=0;
    map<int,studmod> s1;
    map<int,mod> m1;
    studmod x;
    mod y;

    while(chk!=0){ 
    cout<<"\nTo refresh screen press a value key: ";
    cin>>stop;
    if(stop)
    system("cls");

    cout<<"\n\n# College Registration System #";
    cout<<"\n---------------------------------------";
    cout<<"\n1> Add Records";
    cout<<"\n2> Update Records";
    cout<<"\n3> Get all records";
    cout<<"\n4> Add Module";
    cout<<"\n5> Get all Modules";
    cout<<"\n6> Update Module";
    cout<<"\n0> Exit";
    cout<<"\n---------------------------------------";
    cout<<"\nEnter your choice: ";
    cin>>chk;
   if(cin.fail()){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        chk=20;
    }
        switch(chk){
            case 1:
                
                x=studrec();
                if(s1.find(x.getStudentId())==s1.end()){
                    s1[x.getStudentId()] = x;
                    cout<<"\nAdded Student Record..";
                    
                    outfile << "\nStudent ID:"<<x.getStudentId();
                    outfile << "\nStudent Name:"<<x.getStudentName();
                    outfile << "\nStudent Module ID:"<<x.getModuleId();
                    outfile << "\nStudent DOB:"<<x.getDateOfBirth();
                    outfile << "\nStudent Blood Group:"<<x.getBloodGroup();
                    outfile << "\nStudent Address:"<<x.getadd();

                    outfile << "\n\nAdded Student Record..";
                    break;
                }
                else{
                    cout<<"\nID already present..";
                    outfile<<"\nID already present..";
                    break;
                }
            case 2:
                cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
                cout<<"\nEnter the Student ID: ";
                cin>>id;
                    if(s1.find(id)==s1.end()){
                    cout<<"\nStudent record not found..\n";
                    outfile<<"\nStudent record not found..";
                }
                else{
                    studup(s1[id]);
                cout<<"\nUpdated Student Record..";
                    outfile << "\nStudent ID:"<<s1[id].getStudentId();
                    outfile << "\nStudent Name:"<<s1[id].getStudentName();
                    outfile << "\nStudent Module ID:"<<s1[id].getModuleId();
                    outfile << "\nStudent DOB:"<<s1[id].getDateOfBirth();
                    outfile << "\nStudent Blood Group:"<<s1[id].getBloodGroup();
                    outfile << "\nStudent Address:"<<s1[id].getadd();
                    outfile << "\nUpdated Student Record..";
                }
                break;
            case 3:
                i=0;
                for(auto a: s1){
                    cout<<"\nRecord number: "<<i+1<<":\n";
                    a.second.display();
                    cout<<endl;
                    i++;
               }
                cout<<"\nStudent Record Displayed..";
                outfile << "\nDisplayed Student Record..";
                break;
            case 4:
                y=modrec();
                if(m1.find(y.getModuleID())==m1.end()){
                    m1[y.getModuleID()] = y;
                cout<<"\nAdded Module Record..";
                    outfile << "\nModule ID:"<<y.getModuleID();
                    outfile << "\nModule Name:"<<y.getModuleName();
                    outfile << "\nModule duration:"<<y.getDuration();
                    outfile << "\nModule Fees:"<<y.getFees();
                    outfile << "\nModule Tentative Start Date:"<<y.getttd();
                    outfile<<"\nAdded Module Record..";
                break;
                }
                else{
                    cout<<"\nID already present..";
                    outfile<<"\nID already present..";
                    break;
                }
                
            case 5:
                i=0;
               for(auto a: m1){
                    cout<<"\nRecord number: "<<i+1<<":\n";
                    a.second.display();
                    cout<<endl;
                    i++;
               }
                cout<<"\nModule Record Displayed..";
                outfile << "\nDisplayed Modules..";
                break;
            case 6:
                cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
                cout<<"\nEnter the Module ID: ";
                cin>>id;
                if(m1.find(id)==m1.end()){
                    cout<<"\nModule not found..\n";
                    outfile<<"\nModule not found..";
                }
                else{
                    modup(m1[id]);
                cout<<"\nUpdated Module Record..";
                    outfile << "\nModule ID:"<<y.getModuleID();
                    outfile << "\nModule Name:"<<m1[id].getModuleName();
                    outfile << "\nModule duration:"<<m1[id].getDuration();
                    outfile << "\nModule Fees:"<<m1[id].getFees();
                    outfile << "\nModule Tentative Start Date:"<<m1[id].getttd();
                    outfile<<"\nUpdated Module Record..";
                }
                    
                break;
            case 0:
                cout<<"\nExitting...";
                outfile<<"\nExitting...\n";
                outfile<<"----------------------\n";
                break;
            default:
                cout<<"\nWrong input..";
                break;
        }
    }
    outfile.close();
return 0;
}