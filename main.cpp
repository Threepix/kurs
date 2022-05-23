#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

class student {
public:
    char name[20];
    char surname[20];
    char sessiont_count[2];
    char second_name[20];
    char birth_year[11];
    char fakult[6];
    char kafedra[5];
    char grupp[11];
    char zach_book[9];
    char sex[2];
    char number[4];
    int rollnum;
    char date_postup[10];
    string kostil;

    int retnumber() const;

    void get_student();

    void show_student();

    string get_getder();

    string get_number();

    string get_data_rozden();

    string get_data_postup();

    string get_facult();

    string get_kafedra();

    string get_name();

    string get_surname();

    string get_second_name();

    string get_grupp();

    string get_zachetka();

    string protection_get_count();
};

void change_student();

void del_student();

//functiuons in student
void student::get_student() {
    cout << "vvedite number student" << endl;
    kostil = get_number();
    strcpy(number, kostil.c_str());
    cout << "vvedite name student" << endl;
    kostil = get_name();
    strcpy(name,kostil.c_str());
    cout << "vvedite surname " << endl;
    kostil = get_surname();
    strcpy(surname,kostil.c_str());
    cout << "vvedite second_name" << endl;
    kostil = get_second_name();
    strcpy(second_name,kostil.c_str());
    cout << "vvedite birth date in format xx.xx.xxxx" << endl;
    kostil = get_data_rozden();
    strcpy(birth_year, kostil.c_str());
    cout << "vvedite date postup" << endl;
    kostil = get_data_postup();
    strcpy(date_postup, kostil.c_str());
    cout << "vvedite fakult" << endl;
    kostil = get_facult();
    strcpy(fakult, kostil.c_str());
    cout << "vvedite kafedra" << endl;
    kostil = get_kafedra();
    strcpy(kafedra, kostil.c_str());
    cout << "vvedite grupp" << endl;
    kostil = get_grupp();
    strcpy(grupp,kostil.c_str());
    cout << "vvedite zach book" << endl;
    kostil = get_zachetka();
    strcpy(zach_book,kostil.c_str());
    cout << "vvedite sex:[M/F]" << endl;
    kostil = get_getder();
    strcpy(sex, kostil.c_str());
    cout<<"vvedite session count"<<endl;
    kostil = protection_get_count();
    strcpy(sessiont_count,kostil.c_str());
}

void student::show_student() {
    cout << "name " << name << endl;
    cout << "surname " << surname << endl;
    cout << "second name " << second_name << endl;
    cout << "date birth " << birth_year << endl;
    cout << "number " << number << endl;
    cout << "sex " << sex << endl;
    cout << "date postup " << date_postup << endl;

}

int student::retnumber() const {
    return rollnum;
}

string student::protection_get_count(){
    string n;
    bool flag = true;
    while(flag == true){
        cin>>n;
        try{
            int res = stoi(n);
            if (res<=9&&res>0){
                flag = false;
                return n;
            }else{
                cout<<"eblan vvedi zanovo"<<endl;
            }
        }catch (std::invalid_argument e){
            cout << "cought error" << endl;
        }
    }
}

string student::get_number() {
    string n;
    bool flag = true;
    while (flag == true) {
        cin >> n;
        try {
            int res = stoi(n);
            if (res < 0) {
                cout << "eblan vvedi zanovo\n";
            } else {
                flag = false;
                return n;
            }
        }
        catch (std::invalid_argument e) {
            cout << "cought error" << endl;
        }
    }
}
string student::get_kafedra(){
    string n;
    bool flag = true;
    while (flag == true){
        cin>>n;
        try {
            if(n.length()<=4){
                flag = false;
                return n;
            }
            else{
                cout<<"eblan vvedi zanovo"<<endl;
            }
        }catch (std::invalid_argument e){
            cout<<"cought error"<< endl;
        }
    }
}
string student::get_data_postup() {
    string n;
    bool flag = true;
    while (flag == true) {
        cin >> n;
        try {
            int res = stoi(n);
            if (res < 1999) {
                cout << "eblan vvedi zanovo\n";
            } else {
                flag = false;
                return n;
            }
        }
        catch (std::invalid_argument e) {
            cout << "cought error" << endl;
        }

    }
}
string student::get_facult(){
    string n;
    bool flag = true;
    while (flag==true){
        cin>>n;
        try{
            if(n.length()<=5){
                flag = false;
                return n;
            }
            else{cout<<"eblan vvedi zanovo"<< endl;}
        }catch (std::invalid_argument e){
            cout<<"caught error"<<endl;
        }
    }
}
string student::get_getder(){
    string n;
    char g[2];
    bool flag = true;
    while (flag ==true){
        cin >> n;
        try{
            if(n.length()>0 and n.length()<2) {
                if (n != "M" or n != "F") {
                    cout<<"eblan vvedi zanovo"<< endl;
                }
            }
            else{
                flag == false;
                return n;
            }
        }
        catch (std::invalid_argument e){
            cout<<"cought error"<<endl;
        }
    }
}
string student::get_name(){
    string n;
    bool flag = true;
    while(flag==true){
        cin>>n;
        try{
            if (n.length()<=19){
                flag = false;
                return n;
            } else{cout<<"eblan vvedi zanovo"<<endl;}
        }
        catch (std::invalid_argument e){
            cout<<"caught error"<<endl;
        }
    }
}
string student::get_surname(){
    string n;
    bool flag = true;
    while(flag==true){
        cin>>n;
        try{
            if (n.length()<=19){
                flag = false;
                return n;
            } else{cout<<"eblan vvedi zanovo"<<endl;}
        }
        catch (std::invalid_argument e){
            cout<<"caught error"<<endl;
        }
    }
}
string student::get_zachetka() {
    string n;
    bool flag = true;
    while(flag==true){
        cin>>n;
        try{
            if (n.length()<=8){
                flag = false;
                return n;
            }
            else{cout<<"eblan vvedi zanovo"<<endl;}
        }
        catch(std::invalid_argument e){cout<<"caught error"<<endl;}
    }
}
string student::get_grupp() {
    string n;
    bool flag = true;
    while(flag==true){
        cin>>n;
        try{
            if(n.length()<=10){
                flag = false;
                return n;
            }else{cout<<"eblan vvedi zanovo"<<endl;}
        }
        catch (std::invalid_argument e){
            cout<<"caught error"<<endl;
        }
    }
}
string student::get_second_name(){
    string n;
    bool flag = true;
    while(flag==true){
        cin>>n;
        try{
            if (n.length()<=19){
                flag = false;
                return n;
            } else{cout<<"eblan vvedi zanovo"<<endl;}
        }
        catch (std::invalid_argument e){
            cout<<"caught error"<<endl;
        }
    }
}
string student::get_data_rozden() {
    string n;
    bool flag = true;
    string chislo;
    string mes;
    string god;
    while (flag == true) {
        cin >> n;
        try {
            chislo = n.substr(0, 2);
            mes = n.substr(3, 2);
            god = n.substr(6, 4);
            int res_chislo = stoi(chislo);
            int res_mes = stoi(mes);
            int res_god = stoi(god);
            if ((res_chislo > 0) && (res_chislo <= 31) && (res_mes > 0) && (res_mes <= 12) && (res_god > 0) &&
                (res_god < 2010) && (res_god > 1995)) {
                flag = false;
                return n;
            } else { cout << "eblan vvedi zanovo" << endl; }

        } catch (std::invalid_argument e) {
            cout << "cought error" << endl;
        }
    }
}


class Session : student{
public:
    string kostill;
    char subject_count[10];
    char subject_name[20];
    char subject_mark;

    string get_protection_ozenka(){
        string n;
        bool flag = true;
        while (flag == true) {
            cin >> n;
            try {
                int res = stoi(n);
                if (res < 0 && res > 5) {
                    cout << "eblan vvedi zanovo\n";
                } else {
                    flag = false;
                    return n;
                }
            }
            catch (std::invalid_argument e) {
                cout << "cought error" << endl;
            }
        }
    }
    void protection_get_subject(){
        char imya_predmeta[20];
        char ozenka[2];
        cout<<"vvedite imya predmeta"<<endl;
        cin>>imya_predmeta;
        cout<<"vvedite ozenka"<<endl;
        kostill = get_protection_ozenka();
        strcpy(ozenka, kostill.c_str());
    }
};



//functions in main
void create_student() {
    student person;
    string s;
    ofstream studfile;
    studfile.open("students.dat", ios::binary | ios::app);
    if (!studfile) {
        cout << "file doesnt exists" << endl;
    }
    person.get_student();
    studfile.write((char *) &person, sizeof(student));
    studfile.close();
}

void show_all() {
    student person;
    ifstream stufile;
    stufile.open("students.dat", ios::binary);
    if (!stufile) {
        cout << "file doesnt exists" << endl;
        cin.ignore();
        cin.get();

    }
    while (stufile.read(reinterpret_cast<char *>(&person), sizeof(person))) {
        person.show_student();
        cout << "\n\n===========================\n";
    }
    stufile.close();
}

void show_one(int n) {
    student person;
    ifstream stfile;
    stfile.open("students.dat", ios::binary);
    if (!stfile) {
        cout << "file doesnt exists" << endl;
        cin.ignore();
        cin.get();
    }
    while (stfile.read(reinterpret_cast<char *>(&person), sizeof(person))) {
        if (person.retnumber() == n) {
            person.show_student();
        }
        cout << "\n\n===========================\n";
    }
    stfile.close();
}

void change_student(int n) {
    student person;
    fstream fl;
    ifstream stfile;
    fl.open("students.dat", ios::binary | ios::in | ios::out);
    if (!fl) {
        cout << "file doesnt exists" << endl;
        cin.ignore();
        cin.get();
    }
    fl.read(reinterpret_cast<char *>(&person), sizeof(student));
    if (person.retnumber() == n) {
        person.show_student();
        cout << "enter new student details" << endl;
        person.get_student();
        int pos = (-1) * static_cast<int>(sizeof(person));
        fl.seekp(pos, ios::cur);
        fl.write(reinterpret_cast<char *>(&person), sizeof(person));
        cout << "Record updated" << endl;
    }
    fl.close();

}

void del_student(int n) {
    student person;
    ifstream stfile;
    stfile.open("students.dat", ios::binary);
    if (!stfile) {
        cout << "file doesnt exists" << endl;
        cin.ignore();
        cin.get();
    }
    ofstream studfile;
    studfile.open("Temp.dat", ios::out);
    stfile.seekg(0, ios::beg);
    while (stfile.read(reinterpret_cast<char *>(&person), sizeof(person))) {
        if (person.retnumber() != n) {
            studfile.write(reinterpret_cast<char *>(&person), sizeof(student));
        }
    }
    studfile.close();
    stfile.close();
    remove("students.dat");
    rename("Temp.dat", "students.dat");
    cout << "student delited" << endl;
    cin.ignore();
    cin.get();
}

class Menu{
public:
    void menu(){
        int chislo, num;
        cout << "vvedite chislo case from 1 to 5" << endl;
        cout <<" 1 is create student\n"<<endl;
        cout <<" 2 is show all students\n"<<endl;
        cout <<" 3 is show one\n"<<endl;
        cout <<" 4 is change student\n"<<endl;
        cout <<" 5 is delite student\n"<<endl;
        cin >> chislo;

        if (chislo == 1) {
            create_student();
        }
        if (chislo == 2) {
            show_all();
        }
        if (chislo == 3) {
            cout << "vvedite num" << endl;
            cin >> num;
            show_one(num);
        }
        if (chislo == 4) {
            cout << "vvedite num" << endl;
            cin >> num;
            change_student(num);

        }
        if (chislo == 5) {
            cout << "vvedite num" << endl;
            cin >> num;
            del_student(num);

        }
    };
};


int main() {
    Menu programm;
    programm.menu();
}
