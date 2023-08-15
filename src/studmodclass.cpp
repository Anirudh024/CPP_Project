#include <iostream>
using namespace std;

class studmod{
    private:
        int stud_id;
        string stud_name;
        string dob;
        int mod_id;
        string bg;
        string add;
        
    public:
    studmod(const int& stud_id, const string& stud_name, const string& dob, const int& mod_id, const string& bg, const string& add): stud_id(stud_id), 
            stud_name(stud_name), dob(dob), mod_id(mod_id), bg(bg),add(add){}
    studmod(){

//Getter
    }
    int getStudentId() const {
        return stud_id;
    }

    string getStudentName() const {
        return stud_name;
    }

    string getBloodGroup() const {
        return bg;
    }

    int getModuleId() const {
        return mod_id;
    }

    string getDateOfBirth() const {
        return dob;
    }

    string getadd() const {
        return add;
    }

//Adder
    void setStudentID(int id) {
        stud_id = id;
    }

    void setStudentName(const string& name) {
        stud_name = name;
    }

    void setBloodGroup(const string& bloodGroup) {
        bg = bloodGroup;
    }

    void setModuleID(int moduleID) {
        mod_id = moduleID;
    }

    void setDateOfBirth(const string& dateOfBirth) {
        dob = dateOfBirth;
    }
    void setadd(const string& a) {
        add = a;
    }

//Display
    void display() const {
        cout<<"\n---------------------------------------";
        cout << "\nStudent ID: " << stud_id << "\n";
        cout << "Student Name: " << stud_name << "\n";
        cout << "Blood Group: " << bg << "\n";
        cout << "Module ID: " << mod_id << "\n";
        cout << "Date of Birth: " << dob << "\n";
        cout << "Address: " << add << "\n";
        cout<<"\n---------------------------------------";
    }
};