#include <iostream>
using namespace std;


class mod{
    private:
        int mod_id;
        string mod_name;
        int dur;
        int fees;
        string ttd;
    public:
        mod(const int& mod_id,const string& mod_name, const int& dur, const int& fees, const string& ttd): 
            mod_id(mod_id),mod_name(mod_name),dur(dur),fees(fees),ttd(ttd){}
        mod(){
            
        }

//Getter
    int getModuleID() const {
        return mod_id;
    }

    string getModuleName() const {
        return mod_name;
    }

    int getDuration() const {
        return dur;
    }

    int getFees() const {
        return fees;
    }

    string getTargetAudience() const {
        return ttd;
    }

    void setModuleId(int id) {
        mod_id = id;
    }

//Adder
    void setModuleName(const std::string& name) {
        mod_name = name;
    }

    void setDuration(int duration) {
        dur = duration;
    }

    void setFees(int newFees) {
        fees = newFees;
    }

    void setttd(const std::string& details) {
        ttd = details;
    }

//Display
    void display() const {
        cout<<"\n---------------------------------------";
        cout << "\nModule ID: " << mod_id << "\n";
        cout << "Module Name: " << mod_name << "\n";
        cout << "Duration: " << dur << " hours\n";
        cout << "Fees: $" << fees << "\n";
        cout << "Tentative Start Date: " << ttd << "\n";
        cout<<"\n---------------------------------------";
    }
};