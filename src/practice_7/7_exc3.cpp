/*
A chair has a teaching team consisting of one responsible person and a group of 1 to 4 assistants. In order to pass the course, each student must pass the 3 planned evaluation instances: 1 midterm (which can be retaken), 1 practical assignment, and a final exam. The chair keeps a record of the date and outcome of each evaluation carried out by the students. In addition to these two pieces of information, for the practical assignments, information is stored regarding any delay in the submission date (if applicable), and for the final exams, it is recorded which session and call the student took the exam in.
*/

#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
    int age;
    bool gender;

    public:
        void set_name(string name){
            this->name = name;
        }
        void set_info(int age){
            if(age >= 18 && age < 99) this->age = age;
        }
        void set_info(bool g){
            this->gender = g;
        } // function overloading → doesn't work with strings
        string get_name(){
            return this->name;
        }
        int get_age(){
            return this->age;
        }
        bool get_gender(){
            return this->gender;
        }
};

class Teacher : public Person {
    string subject;

    public: 
        string get_subject(){
            return this->subject;
        }
        void set_subject(string subj){
            this->subject = subj;
        }
};

class Assistant : public Person {
    int responsibilities;

    public:
        void set_responsibilities(int rs){
            if(rs >= 1 && rs <= 5) this->responsibilities = rs;
        }
        int get_responsibilities(){
            return this->responsibilities;
        }
};

class Student : public Person {
    string subjects[4];

    public:
        void set_subjects(){
            string subs[4];

            int i = 0;

            while(i < 4){
            cout << "Insert subject: ";
            cin >> subs[i];
            cout << endl;

            i++;
            }
            
            int j = 0;
            while(j < 4){
                this->subjects[j] = subs[j];
                j++;
            }
        }
        void get_subject(){
            int k = 0;
            cout << "Subjects: ";
            while(k < 4){
                cout << this->subjects[k] << endl;
                k++;
            }
        }
};

class Evaluation {
    int date;
    int value;

    public:
        int get_date(){
            return this->date;
        }
        int get_value(){
            return this->value;
        }
        void set_date(int date__){
            if(date__ >= 20000101 && date__ < 21001231) this->date = date__;
        }
        void set_value(int value__){
            if(value__ >= 0 && value__ <= 20) this->value = value__;
        }
};

class Assignment : public Evaluation {
    int delay;

    public:
        void set_delay(int new_date){
            if(new_date > get_date()) this->delay = new_date - get_date();
        } //setter for delay of deliver date. Retrieving date of the evaluation and substracting from new_date
};

class Final : public Evaluation {
    string session;
    int call;

    public:
        void set_session(string sess){
            this->session = sess;
        }
        void set_call(int when){
            if(when >= get_date() && when < (get_date() + 200)) this->call = when;
        }
        string get_session(){
            return this->session;
        }
        int get_call(){
            return this->call;
        }
};

class Chair {
    Teacher responsible;
    Assistant assitants[4];
    Student people[5];
    Evaluation midterm;
    Assignment assignment;
    Final exam;

    public:
        void set_responsible(Teacher r){
            this->responsible = r;
        }
        void set_assistants(Assistant as[]){
            int i = 0 ;
            while(i < 4){
                this->assitants[i] = as[i];
                i++ ;
            }
        }
        void set_students(Student peop[]){
            int i = 0 ;
            while(i < 5){
                this->people[i] = peop[i];
                i++;
            }
        }
        void set_midterm(Evaluation m){
            this->midterm = m;
        }
        void set_assignment(Assignment a){
            this->assignment = a;
        }
        void set_final_exam(Final e){
            this->exam = e;
        }
        Teacher get_teacher(){
            return this->responsible;
        }
        void get_assistants(){
            int j = 0 ;            
            while(j < 4){
                cout << this->assitants[j].get_name() << endl;
                cout << this->assitants[j].get_age() << endl;
                cout << this->assitants[j].get_gender() << endl;
                cout << this->assitants[j].get_responsibilities() << endl << endl;
                j++;
            }
        }
        void get_students(){
            int k = 0;
            while(k < 5){
                cout << this->people[k].get_name() << endl;
                cout << this->people[k].get_age() << endl;
                cout << this->people[k].get_gender() << endl;
                this->people[k].get_subject() ;
                cout << endl;

                k++;
            }
        }
        Evaluation get_evaluation(){
            return this->midterm;
        }
        Assignment get_assignment(){
            return this->assignment;
        }
        Final get_exam(){
            return this->exam;
        }
};

int main(){
    Teacher t;
    t.set_name("Robert") ;
    t.set_info(43) ;
    t.set_info(true) ;
    t.set_subject("Programming") ;

    Assistant list[4] ;

    Assistant a1;
    a1.set_name("Jane") ; 
    a1.set_info(19) ;
    a1.set_info(false) ;
    a1.set_responsibilities(3) ;

    Assistant a2;
    a2.set_name("Joe") ;
    a2.set_info(20) ;
    a2.set_info(true) ;
    a2.set_responsibilities(2) ;

    Assistant a3;
    a3.set_name("Jim") ;
    a3.set_info(21) ;
    a3.set_info(true) ;
    a3.set_responsibilities(4) ;

    Assistant a4;
    a4.set_name("Jo");
    a4.set_info(22) ;
    a4.set_info(true) ;
    a4.set_responsibilities(5) ;

    list[0] = a1 ;
    list[1] = a2 ;
    list[2] = a3 ;
    list[3] = a4 ;



    Chair programming ;
    programming.set_responsible(t);
    programming.set_assistants(list);


    return 0;
}

// TODO: FINISH INSTANCING OBJECTS FROM CHAIR CLASS