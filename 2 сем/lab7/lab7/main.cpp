#include <iostream>
#include <string>

using namespace std;

class Person {
    string first_name;
    string last_name;
    int year;
    string sex;
    string education;
public:
    Person() {
        first_name = "";
        last_name = "";
        year = 0;
        sex = "";
        education = "";
    }
    Person(string first_name, string last_name,
           int year, string sex, string education) {
        first_name = first_name;
        last_name = last_name;
        year = year;
        sex = sex;
        education = education;
    }
    void set_first_name();
    void set_last_name();
    void set_year();
    void set_sex();
    void set_education();
    int get_year();
    string get_education();
    string get_sex();
    void show();
    ~Person() {
        
    };
};


void Person::set_first_name() {
    cout << "фамилия: "; cin >> first_name;
}
void Person::set_last_name() {
    cout << "имя: "; cin >> last_name;
}
void Person::set_year() {
    cout << "год рождения "; cin >> year;
}
void Person::set_sex() {
    cout << "пол: "; cin >> sex;
}
void Person::set_education() {
    cout << "образование: "; cin >> education;
}
void Person::show() {
    cout << first_name << " " << last_name << " " << endl;
}
int Person::get_year() {
    return year;
}
string Person::get_education() {
    return education;
}
string Person::get_sex() {
    return sex;
}

void input(Person spis[], int n) {
    for (int i = 0; i < n; i++) {
        spis[i].set_first_name();
        spis[i].set_last_name();
        spis[i].set_year();
        spis[i].set_sex();
        spis[i].set_education();
        cout << endl;
    }
}
void older_than(Person spis[], int n) {
    cout << "заданный возраст: ";
    int user_age; cin >> user_age; cout << endl;
    cout << "граждане старше " <<user_age<<": "<< endl;
    int age[50];
    for (int i = 0; i < n; i++) {
        age[i] = 2019 - spis[i].get_year();
        if (age[i] > user_age) {
            spis[i].show();
        }
    }
    cout << endl;
}
void spis_education(Person spis[], int n) {
    string user_education = "высшее";
    cout << "граждане с высшим образованием: " << endl;
    for (int i = 0; i < n; i++) {
        if (spis[i].get_education() == user_education) {
            spis[i].show();
        }
    }
    cout << endl;
}
void spis_sex(Person spis[], int n) {
    string user_sex = "мужской";
    cout << "граждане мужского пола: " << endl;
    for (int i = 0; i < n; i++) {
        if (spis[i].get_sex() == user_sex) {
            spis[i].show();
        }
    }
    cout << endl;
}


int main()
{
    int n;
    cout << "количество граждан: "; cin >> n; cout << endl;
    Person *spis = new Person[n];
    
    input(spis, n);
    older_than(spis, n);
    spis_education(spis, n);
    spis_sex(spis, n);
    
    delete[] spis;
    return 0;
}
