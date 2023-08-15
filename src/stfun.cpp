#include<iostream>
#include "studmodclass.cpp"

studmod studrec(){
    int id,mod_id;
    string fn,dob,bg,add;
    cout<<"\nEnter the following details: \n";
    cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
    cout<<"\nEnter Student ID: ";
    cin>>id;
    cout<<"\nEnter first name: ";
    cin>>fn;
    cout<<"\nEnter dob(DD-MM-YY): ";
    cin>>dob;
    cout<<"\nEnter Module ID: ";
    cin>>mod_id;
    cout<<"\nEnter Blood group: ";
    cin>>bg;
    cout<<"\nEnter Address: ";
    cin>>add;
    studmod x=studmod(id,fn,dob,mod_id,bg,add);
    return x;
}

void studup(studmod& x){

    

    int chk,mid,stop=0;
    string dob,n,bg,add;

    while(chk!=6){ 
    cout<<"\nTo refresh screen press a number: ";
    cin>>stop;
    if(stop)
    system("cls");
    cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
    cout<<"\n# Update Student Record #\n";
    cout<<"\n-------------------------------------------------\n";
    cout<<"1>Update Name\n";
    cout<<"2>Update DOB\n";
    cout<<"3>Update Module ID\n";
    cout<<"4>Update Blood Group\n";
    cout<<"5>Update Address\n";
    cout<<"6>Exit\n";
    cout<<"\n-------------------------------------------------";
    cout<<"\nEnter your choice: ";
    cin>>chk;

    if(cin.fail()){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        chk=20;
    }
        switch(chk){
            case 1:
                cout<<"\nEnter NEW NAME: ";
                cin>>n;
                x.setStudentName(n);
                cout<<"\nUPDATED..";
                break;
            case 2:
                cout<<"\nEnter NEW DOB: ";
                cin>>dob;
                x.setDateOfBirth(dob);
                cout<<"\nUPDATED..";
                break;
            case 3:
                cout<<"\nEnter NEW MODULE ID: ";
                cin>>mid;
                x.setModuleID(mid);
                cout<<"\nUPDATED..";
                break;
            case 4:
                cout<<"\nEnter NEW BLOOD GROUP: ";
                cin>>bg;
                x.setBloodGroup(bg);
                cout<<"\nUPDATED..";
                break;
            case 5:
                cout<<"\nEnter NEW ADDRESS: ";
                cin>>add;
                x.setadd(add);
                cout<<"\nUPDATED..";
                break;
            case 6:
                cout<<"Going back to Menu..";
                break;
            default:
                cout<<"Wrong input..";
                break;
        }
}
}