#include <iostream>
#include <string>
//ENCAPSULATION
using namespace std;
class Car {
private:
    string model;
    int year;

public:
    Car(string name,string age): model(name), year(age){}
    void setModel(string name) {
        model = name;
    }

    string getModel(){
        return model;
    }

    void setYear(int carYear) {
        if (carYear >= 1900 && carYear <= 2023) {
            year = carYear;
        } else {
            cout << "Invalid year!\n";
        }
    }

    int getYear() const {
        return year;
    }
};

int main()
 {
    Car myCar;

    myCar.setModel("Toyota Camry");
    myCar.setYear(2020);

    cout << "Car Model: " << myCar.getModel() << "\n";
    cout << "Manufacturing Year: " << myCar.getYear() << "\n";

    return 0;
}
