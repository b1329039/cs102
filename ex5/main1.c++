#include <iostream>
#include <string.h>

using namespace std;

class Car{
    protected:
    string drivemode;
    public:
    string brand;
    string model;
    int year;
    int maxseating;
    Car(string a,string b,int c,int d){
        brand=a;
        model=b;
        year=c;
        maxseating=d;
    }
    int get_maxseating(){
        return maxseating;
    }
    string get_drivemode(){
        return drivemode;
    }
};
class BMW_car:public Car{
    public:
    BMW_car(string b,int c, int d):Car("BMW",b,c,d){
        drivemode="rear_wheel";
    }
    
    string get_drivemode(){
        return drivemode;
    } 
};


class AUDI_car:public Car{
    public:
    AUDI_car(string b,int c, int d):Car("AUDI",b,c,d){
        drivemode="front_wheel";
    }
    
    string get_drivemode(){
        return drivemode;
    } 
};


class BENZ_car:public Car{
    public:
    BENZ_car(string b,int c, int d):Car("BENZ",b,c,d){
        drivemode="front_wheel";
    }
    
    string get_drivemode(){
        return drivemode;
    } 
};


int main()
{
    BMW_car car_0("X5",2023,6);
    cout<<car_0.brand<<endl;
    cout<<"drivemode = "<<car_0.get_drivemode()<<endl;
    AUDI_car car_1("X5",2023,6);
    cout<<car_1.brand<<endl;
    cout<<"drivemode = "<<car_1.get_drivemode()<<endl;
    BENZ_car car_2("X5",2023,6);
    cout<<car_2.brand<<endl;
    cout<<"drivemode = "<<car_2.get_drivemode()<<endl;

    return 0;
}
