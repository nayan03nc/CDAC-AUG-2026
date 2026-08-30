#include <iostream>
#include <cstdlib>

using namespace std;

int main6(int argc, char* argv[]) {
    // Requirements: If arguments are missing, print a usage line and exit with code 1
    if (argc != 4) {
        cout << "Usage : ./sensor_monitor <warn_threshold> <critical_threshold> <num_readings>" << endl;
        cout << "Error : Missing arguments." << endl;
        return 1;
    }

    int warn = atoi(argv[1]);
    int critical = atoi(argv[2]);
    int num_readings = atoi(argv[3]);

    // Requirements: Validate warn < critical, 1 <= num_readings <= 500
    if (warn >= critical) {
        cout << "Error : Warning threshold must be less than critical threshold." << endl;
        return 1;
    }

    if (num_readings < 1 || num_readings > 500) {
        cout << "Error : Number of readings must be between 1 and 500." << endl;
        return 1;
    }

    cout << "Config : Warn=" << warn << "°C Critical=" << critical << "°C Readings=" << num_readings << endl;

    int normal = 0, warning = 0, critical_cnt = 0, shutdown = 0;

    // Simulate num_readings temperature values using rand() % 70
    for (int i = 0; i < num_readings; i++) {
        int temp = rand() % 70;

        if (temp < warn) {
            normal++;
        } else if (temp >= warn && temp < critical) {
            warning++;
        } else if (temp >= critical && temp < 60) {
            critical_cnt++;
        } else {
            shutdown++;
        }
    }

    cout << "Results: Normal:" << normal << " Warning:" << warning << " Critical:" << critical_cnt << " Shutdown:" << shutdown << endl;

    return 0;
}
