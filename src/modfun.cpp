#include<iostream>
#include "modclass.cpp"

mod modrec(){
    int mod_id,dur,fees;
    string n,ttd;
    cout<<"\nEnter the following details: \n";
    cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
    cout<<"\nEnter Module ID: ";
    cin>>mod_id;
    cout<<"\nEnter Module name: ";
    cin>>n;
    cout<<"\nEnter Module Duration(Days): ";
    cin>>dur;
    cout<<"\nEnter Module Fees: ";
    cin>>fees;
    cout<<"\nEnter Module Tentative Start Date: ";
    cin>>ttd;
    mod x = mod(mod_id,n,dur,fees,ttd);
    return x;
}

void modup(mod& y){
    
    int chk,dur,fee,stop=0;
    string n,ttd;

    while(chk!=5){ 
    cout<<"\nTo refresh screen press a number: ";
    cin>>stop;
    if(stop)
    system("cls");
    cout<<"\nUSE THE CORRECT INPUT OR THE SYSTEM WILL EXIT";
    cout<<"\n# Update Student Record #\n";
    cout<<"\n-------------------------------------------------\n";
    cout<<"1>Update Name\n";
    cout<<"2>Update Duration\n";
    cout<<">3Update Fees\n";
    cout<<"4>Update Tentative start date\n";
    cout<<"5>Exit\n";
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
                cout<<"\nEnter NEW MODULE NAME: ";
                cin>>n;
                y.setModuleName(n);
                cout<<"\nUPDATED..";
                break;
            case 2:
                cout<<"\nEnter NEW DURATION: ";
                cin>>dur;
                y.setDuration(dur);
                cout<<"\nUPDATED..";
                break;
            case 3:
                cout<<"\nEnter NEW FEES: ";
                cin>>fee;
                y.setFees(fee);
                cout<<"\nUPDATED..";
                break;
            case 4:
                cout<<"\nEnter NEW TENTATIVE START DATE: ";
                cin>>ttd;
                y.setttd(ttd);
                cout<<"\nUPDATED..";
                break;
            case 5:
                cout<<"Going back to Menu..";
                break;
            default:
                cout<<"Wrong input..";
                break;
        }
}
}
