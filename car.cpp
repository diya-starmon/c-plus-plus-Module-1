#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    double speed; 

public:
    
    Car(string b, string m, double s) {
        brand = b;
        model = m;
        speed = s;
    }

    
    double acceleration(double finalSpeed, double time) {
        if (time <= 0) {
            cout << "Time must be greater than zero." << endl;
            return 0;
        }

        double initialSpeed = speed;
        double a = (finalSpeed - initialSpeed) / time;

        
        speed = finalSpeed;

        return a;
    }

    
    void display() {
        cout << brand << " " << model << " - Current Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    
    Car car1("Toyota", "Corolla", 40.0);
    Car car2("Tesla", "Model 3", 60.0);

      double a1 = car1.acceleration(100.0, 5.0);

     double a2 = car2.acceleration(120.0, 4.0);

     cout << "Car 1 Acceleration: " << a1 << " (km/h)/s" << endl;
    cout << "Car 2 Acceleration: " << a2 << " (km/h)/s" << endl;

    cout << "-----------------------------------" << endl;

     car1.display();
    car2.display();

    return 0;
}