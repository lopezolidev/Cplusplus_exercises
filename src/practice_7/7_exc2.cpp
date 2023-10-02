/*
Cuando se visita una ferretería, es común hallar todo tipo de materiales y
herramientas. Todas las herramientas poseen un conjunto de características
comunes, que son de interés no solo para el dueño del negocio sino también
para los clientes como por ejemplo: el nombre, una pequeña descripción, el
costo, algún código de fábrica asociado, el nombre del fabricante, etc. En
algunas ferreterías, las herramientas las clasifican en tres grandes grupos,
manuales, eléctricas y motoras. Dependiendo del uso futuro por parte
de los clientes, dichos tipos de herramientas se clasifican a su vez en: de
albañilería, de plomería, o de electricidad. Las herramientas eléctricas tienen
como característica principal el voltaje con el cual trabajan, incluso existen
herramientas eléctricas que no solo trabajan con la corriente proveniente del
tendido eléctrico sino que pueden operar en base a la energía almacenada en
baterías. Las herramientas motoras funcionan a base de un motor que posee
cierta potencia, poseen además un pequeño tanque para el combustible y
hay algunas que hasta necesita aceite. Con la avanzada tecnología actual, se
han desarrollado herramientas que pueden trabajar a base de electricidad
y a base de energía motora. Y ya se encuentran disponibles en mucha
ferretería a pesar de su elevado costo.

When visiting a hardware store, it is common to find all kinds of materials and tools. All tools have a set of common features that are of interest not only to the business owner but also to customers, such as the name, a brief description, cost, an associated factory code, the manufacturer's name, etc. In some hardware stores, tools are classified into three main groups: manual, electric, and motorized. Depending on the future use by customers, these types of tools are further classified into masonry, plumbing, or electrical tools. Electric tools have as their main characteristic the voltage they operate with. There are even electric tools that not only work with the current from the electrical grid but can also operate based on energy stored in batteries. Motorized tools function based on an engine with a certain power, and they also have a small fuel tank, with some even requiring oil. With today's advanced technology, tools have been developed that can operate using both electricity and motor power. These tools are already available in many hardware stores, despite their high cost.
*/

#include <iostream>
#include <string>

using namespace std;

enum Types {
    manual,
    electric,
    motorized
};


// TODO: 
// 1.- Finish types of tools
// 2.- Build general function that detects type of tool and returns the specifics of each type of tool (such as voltage, fuel tank volume, engine's power...)

class Tool {
    string name;
    string description;
    string manufacturers_name;
    float cost;
    int factory_code;

    public:
        void set_name(string n){
            this->name = n;
        }
        void set_description(string desc){
            this->description = desc;
        }
        void set_manufacturers_name(string manu_name){
            this->manufacturers_name = manu_name;
        }
        void set_cost(float c){
            this->cost = c;
        }
        void set_factory_code(int fc){
            this->factory_code = fc;
        }
        string get_name(){
            return this->name;
        }
        string get_description(){
            return this->description;
        }
        string get_manu_name(){
            return this->manufacturers_name;
        }
        float get_cost(){
            return this->cost;
        }
        int get_factory_code(){
            return factory_code;
        }
        void get_info(){
            cout << "Tool's name: " << get_name() << endl;
            cout << "Description: " << get_description() << endl;
            cout << "Manufacturer's name: " << get_manu_name() << endl;
            cout << "Cost: " << get_cost() << endl;
            cout << "Factory code: " << get_factory_code() << endl;
        }
};

class Electric : public Tool {
    private: 
        int voltage;
        bool batteries;
        Types type = electric;      // sending the enum -> type electric as the type of this tool

    public:
        void set_voltage(int v){
            this->voltage = v;
        }
        void set_batteries(bool b){
            this->batteries = b;
        }
        int get_voltage(){
            return this->voltage;
        }
        bool requires_batteries(){
            return this->batteries;
        }
        Types get_type(){
            return this->type;
        }
        void get_total_info(){
            get_info();
            cout << "Type: " << get_type() << endl;
            cout << "Voltage: " << get_voltage() << endl;
            cout << "Requires Batteries: ";
                if(requires_batteries()){
                    cout << "Yes";
                } else {
                    cout << "No";
                }
            cout << endl;
        }
};

int main(){



    return 0;
}