/*
    Some business has on sale books and CD's. Each product has an unique code, base price of the market and applied tax according to product, 8% for books and 12% for CD's. Also the own characteristics for each product are, for books: Title, author(s), year of publishing, edit, ISBN; and for CD's: Title, interpreter, year of publishing. By other means, this business applies a 20% off to the books and a 10% to CD's. Therefore, total sale price for each product results in: base price + %TAX - dcnt. Define the necessary classes to represent the different types of products we've just pointed out.
*/

#include <iostream>
#include <string>

using namespace std;

class Product {
    public:
        int code;
        float base_price;
        float tax;
        float discount;
        bool type;

    private:

    float apply_discount(){
        if(type) return 0.2;
        else return 0.1;
    }

    float type_of_tax(){
        if(type) return 0.08;
        else return 0.12;
    }
    float sale_price(){
            return base_price + (float)type_of_tax()*base_price - (float)apply_discount()*base_price;   
    }

    public:
    void sale(){
        cout << "Sale price: ";
        cout << sale_price() << " $" << endl;
    }

    void set_code(int c){
        this->code = c;
    }

    void set_base_price(float p){
        this->base_price = p;
    }

    void set_type(bool b){
        this->type = b;
    }
};

class Book : public Product {
    private:
        string title;
        string author;
        int year_publish;
        int edition;
        int ISBN;

    public:
        void set_title(string t){
            this->title = t;
        }
        void set_author(string a){
            this->author = a;
        }
        void set_year_publish(int y){
            this->year_publish = y;
        }
        void set_edition(int e){
            this->edition = e;
        }
        void set_ISBN(int i){
            this->ISBN= i;
        }

        void get_info(){
            cout << "Book" << endl;
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
            cout << "Year of publication: " << this->year_publish << endl;
            cout << "Edition: " << this->edition << endl;
            cout << "ISBN: " << this->ISBN << endl;
            cout << "Base price: " << this->base_price << " $"<< endl;
            sale();
        }
};

class CD : public Product {
    private: 
        string title;
        string interpreter;
        int year_publish;

    public:
        void set_title(string t){
            this->title = t;
        }
        void set_interpreter(string in){
            this->interpreter = in;
        }
        void set_year_publish(int year){
            this->year_publish = year;
        }

        void get_info(){
            cout << "CD" << endl;
            cout << "Title: " << this->title << endl;
            cout << "Interpreter: " << this->interpreter << endl;
            cout << "Year of publication: " << this->year_publish << endl;
            cout << "Base price: " << this->base_price << " $" << endl;
            sale();
        }
}; //class CD

//as both classes heir from Product, both can set the base_price, code and type, and therefore the sale price

int main(){

    Book b;

    b.set_code(272727);
    b.set_base_price(100);
    b.set_type(true);

    b.set_title("La casa del pez que escupe el agua");
    b.set_author("Francisco Herrera Luque");
    b.set_year_publish(1960);
    b.set_edition(3);
    b.set_ISBN(434345);
    b.get_info();

    CD c;

    c.set_code(3245345);
    c.set_base_price(200);
    c.set_type(false);
    c.set_title("OK Computer");
    c.set_interpreter("Radiohead");
    c.set_year_publish(1997);
    c.get_info();

    return 0;
}