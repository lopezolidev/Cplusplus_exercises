/*
When visiting a hardware store, it is common to find all kinds of materials and tools. All tools have a set of common features that are of interest not only to the business owner but also to customers, such as the name, a brief description, cost, an associated factory code, the manufacturer's name, etc. In some hardware stores, tools are classified into three main groups: manual, electric, and motorized. Depending on the future use by customers, these types of tools are further classified into masonry, plumbing, or electrical tools. Electric tools have as their main characteristic the voltage they operate with. There are even electric tools that not only work with the current from the electrical grid but can also operate based on energy stored in batteries. Motorized tools function based on an engine with a certain power, and they also have a small fuel tank, with some even requiring oil. With today's advanced technology, tools have been developed that can operate using both electricity and motor power. These tools are already available in many hardware stores, despite their high cost.
*/

#include <iostream>
#include <string>

using namespace std;

enum General_Type {
    manual,
    electric,
    motorized
};
enum Customer_Type {
    plumbing,
    masonry,
    electric_motorized,
    fueled
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
            cout << "Cost: " << get_cost() << "$" << endl;
            cout << "Factory code: " << get_factory_code() << endl;
        }
};

class Electric : public Tool {
    private: 
        int voltage;
        bool batteries;
        General_Type gentype = electric;      // sending the enum -> type electric as the type of this tool

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
        string get_type(){
            return "electric";       
        }
        void get_electric_info(){
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

class Manual : public Tool {
    private:
        General_Type gentype = manual;
    
    public: 
        string get_type(){
            return "manual";
        }
        void get_manual_info(){
            cout << "General type: " << get_type() << endl;             
        }
};

class Motorized : public Tool {
    private:
        float engine_power;
        bool fuel_tank;
        General_Type gentype = motorized;

    public:
        void set_engine_power(float ep){
            this->engine_power = ep;
        }
        void set_fuel_tank(bool ft){
            this->fuel_tank = ft;
        }
        float get_engine_power(){
            return this->engine_power;
        }
        bool get_fuel_tank(){
            return this->fuel_tank;
        }
        string get_gentype(){
            return "motorized";
        }
        void get_motorized_info(){
            cout << "Engine's power: " << get_engine_power() << endl;
            cout << "Requires fuel tank: ";
                if(get_fuel_tank()){
                    cout << "Yes";  
                } else {
                    cout << "No";
                } 
                cout << endl;
            cout << "General type: " << get_gentype() << endl;
        }
};

class Fueled : public Motorized{
    private:
        Customer_Type custype = fueled;
        bool requires_oil = false;
    
    public: 
        string get_custype(){
            return "fueled";
        }
        void get_tool_info(){
            get_info();
            get_motorized_info();
            cout << "Customer type: " << get_custype()  << endl;
        }
};

class Masonry : public Manual {
    private:
        Customer_Type custype = masonry;

    public:
        string get_custype(){
            return "masonry";
        }
        void get_masonry_info(){
            get_manual_info();
            cout << "Custormer type: " << get_custype() << endl;
        }
};

class Plumbing : public Electric, public Manual {
    private:
        Customer_Type custype = plumbing;
    
    public:
        string get_custype(){
            return "plumbing";
        }
        void get_tool_info(){
            Manual::get_info();
            get_electric_info();
            get_manual_info();
            cout << "Customer type: " << get_custype() << endl;
        }

};

class Electric_Motorized : public Electric, public Motorized{
    private:
        Customer_Type custype = electric_motorized;
    public:
        string get_custype(){
            return "electric-motorized" ;
        }
        void get_tool_info(){
            Electric::get_info();
            get_electric_info();
            get_motorized_info();
            cout << "Customer type: " << get_custype() << endl;
        }
};


int main(){
    Plumbing p1;
    p1.Manual::set_name("Pipe Threader");
    p1.Manual::set_description("A tool used for cutting threads into pipes to create fittings for plumbing connections");
    p1.Manual::set_manufacturers_name("ABC Plumbing Tools Inc");
    p1.Manual::set_cost(89.99);
    p1.Manual::set_factory_code(12345);
    p1.Electric::set_voltage(110);
    p1.Electric::set_batteries(false);

    p1.get_tool_info();

    //applying the concept of mulitple inheritance

    //missing tools ↓

//     Drain Auger:

// Description: A tool used for clearing clogs in plumbing pipes using a rotating cable.
// Manufacturer's Name: XYZ Plumbing Supplies
// Cost: $49.99
// Factory Code: 67890
// Voltage: 120
// Requires Batteries: No
// Masonry Tools:

// Masonry Saw:

// Description: A tool used for cutting through materials like bricks, stones, or concrete blocks.
// Manufacturer's Name: XYZ Masonry Tools Ltd.
// Cost: $199.99
// Factory Code: 54321
// General Type: Manual
// Concrete Mixer:

// Description: A tool used for efficiently mixing concrete, mortar, or other masonry materials.
// Manufacturer's Name: ABC Construction Equipment
// Cost: $299.99
// Factory Code: 98765
// General Type: Motorized
// Engine Power: 2.5 hp
// Requires Fuel Tank: Yes

// Electric Motorized Tools:

// Electric Lawn Mower:

// Description: An electric motorized tool used for cutting grass in lawns.
// Manufacturer's Name: GreenWorks
// Cost: $299.99
// Factory Code: 13579
// Voltage: 120
// Requires Batteries: No
// Engine Power: 1.5 hp
// Requires Fuel Tank: No
// Electric Chainsaw:

// Description: An electric motorized tool used for cutting wood and branches.
// Manufacturer's Name: Black+Decker
// Cost: $129.99
// Factory Code: 24680
// Voltage: 110
// Requires Batteries: No
// Engine Power: 2.0 hp
// Requires Fuel Tank: No
// Fueled Tools:

// Gasoline Generator:

// Description: A fueled tool used to generate electricity in remote locations or during power outages.
// Manufacturer's Name: Honda Power Equipment
// Cost: $999.99
// Factory Code: 97531
// General Type: Motorized
// Engine Power: 5.5 kW
// Requires Fuel Tank: Yes
// Gasoline-Powered Pressure Washer:

// Description: A fueled tool used for cleaning surfaces with high-pressure water.
// Manufacturer's Name: Briggs & Stratton
// Cost: $349.99
// Factory Code: 86420
// General Type: Motorized
// Engine Power: 2.3 hp
// Requires Fuel Tank: Yes


    return 0;
}