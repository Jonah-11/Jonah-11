#include <iostream>
#include <string>
//CONSTRUCTOR
using namespace std;
class Car {
private:
    string model;
    int year;

public:

    Car(string carModel, int carYear) : model(carModel), year(carYear) {

    }

    void setModel(string carModel){
        model = carModel;
    }

    string getModel(){
        return model;
    }

    void setYear(int carYear){
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
    string make;
    int year;
    cout << "Enter the car model: ";
    getline(cin, make);
    cout << "Enter year of manufacture: ";
    cin >> year;
    Car myCar(make, year);

    cout << "Car Model: " << myCar.getModel() << "\n";
    cout << "Manufacturing Year: " << myCar.getYear() << "\n";

    return 0;
}
