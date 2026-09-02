#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;   // must be set only at construction

public:
    // Constructor 1 - Default
    Patient() : patientId(0), name("Unknown"), age(0), ward("General"), bloodGroup("O+") {
        cout << "[Constructor] Default patient registered.\n";
    }

    // Constructor 2 - Emergency admission (id and name only)
    Patient(int id, const string& n) : patientId(id), name(n), age(0), ward("Emergency"), bloodGroup("Unknown") {
        cout << "[Constructor] Emergency: " << name << endl;
    }

    // Constructor 3 - Full admission details
    Patient(int id, const string& n, int a, const string& w, const string& bg)
        : patientId(id), name(n), age(a), ward(w), bloodGroup(bg) {
        cout << "[Constructor] Full admission: " << name << endl;
    }

    // Destructor
    ~Patient() {
        cout << "[Destructor] Patient " << name << " discharged.\n";
    }

    void displayRecord() const {
        cout << "Patient Record:\n";
        cout << "  ID        : " << patientId << endl;
        cout << "  Name      : " << name << endl;
        cout << "  Age       : " << age << endl;
        cout << "  Ward      : " << ward << endl;
        cout << "  Blood Grp : " << bloodGroup << endl;
    }

    void transferWard(const string& newWard) {
        cout << "Ward Transfer: " << name << " -> " << newWard << endl;
        ward = newWard;
    }
};

int main() {
    cout << "===== CREATING STACK PATIENTS =====\n";
    Patient p1(1001, "Meera Joshi", 34, "Cardiology", "B+");   // full details
    Patient p2(1002, "Raj Patel");                             // emergency
    Patient p3;                                                // default

    cout << "\n===== CREATING DYNAMIC ARRAY OF 4 PATIENTS (HEAP) =====\n";
    Patient* ward = new Patient[4];   // calls default constructor 4 times

    cout << "\n===== DISPLAYING ALL 4 PATIENTS =====\n";
    for (int i = 0; i < 4; i++) {
        ward[i].displayRecord();
        cout << endl;
    }

    cout << "\n===== TRANSFER RAJ PATEL TO ICU =====\n";
    p2.transferWard("ICU");
    p2.displayRecord();

    cout << "\n===== DELETING HEAP ARRAY =====\n";
    delete[] ward;   // destructor called 4 times

    cout << "\n===== END OF main() - STACK OBJECTS GO OUT OF SCOPE =====\n";
    return 0;
    // p3, p2, p1 destroyed automatically here, in reverse order
}
