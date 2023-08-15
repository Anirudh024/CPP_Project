#include <iostream>
#include "stdlib.h"
#include "conio.h" 
#include <map>
#include "stfun.h"
#include "modfun.h"

using namespace std;

int main(){
    
    //variables
    int chk=10,stop=1,i=0,id=0;
    map<int,studmod> s1;
    map<int,mod> m1;
    studmod x;
    mod y;

    while(chk!=0){ 
    cout<<"\nTo refresh screen press a number: ";
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
                    break;
                }
                else{
                    cout<<"\nID already present..";
                }
            case 2:
                cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
                cout<<"\nEnter the Student ID: ";
                cin>>id;
                    if(s1.find(x.getStudentId())==s1.end()){
                    cout<<"\nStudent record not found..\n";
                }
                else{
                    studup(s1[id]);
                cout<<"\nUpdated Module Record..";
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
                break;
            case 4:
                y=modrec();
                if(m1.find(y.getModuleID())==m1.end()){
                    m1[y.getModuleID()] = y;
                cout<<"\nAdded Module Record..";
                break;
                }
                else{
                    cout<<"\nID already present..";
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
                break;
            case 6:
                cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
                cout<<"\nEnter the Module ID: ";
                cin>>id;
                if(m1.find(y.getModuleID())==m1.end()){
                    cout<<"\nModule not found..\n";
                }
                else{
                    modup(m1[id]);
                cout<<"\nUpdated Module Record..";
                }
                    
                break;
            case 0:
                cout<<"\nExitting...";
                break;
            default:
                cout<<"\nWrong input..";
                break;
        }
    }
return 0;
}