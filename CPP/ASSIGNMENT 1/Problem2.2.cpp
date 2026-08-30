#include<iostream>
#include <cmath>
using namespace std;



double computeRMS(double *signal, int n){
	int sum=0.0;
	double* ptr = signal;
	for(int i=0;i<7;i++){
		sum += (*ptr) * (*ptr);
		ptr++;
	}
	return sqrt(sum/n);
}

void normalise(double* signal, int n) {

    double maxVal = 0.0;
    double* ptr = signal;

    for (int i = 0; i < n; i++) {
        double absVal = fabs(*ptr);
        if (absVal > maxVal) {
            maxVal = absVal;
        }
        ptr++;
    }


    ptr = signal;
    for (int i = 0; i < n; i++) {
        *ptr = *ptr / maxVal;
        ptr++;
    }
}

int countZeroCrossings(double* signal, int n) {
    int count = 0;
    double* ptr = signal;

    for (int i = 0; i < n - 1; i++) {

        if ((*ptr > 0 && *(ptr + 1) < 0) || (*ptr < 0 && *(ptr + 1) > 0)) {
            count++;
        }
        ptr++;
    }

    return count;
}

void applyGain(double* signal, int n, double gainFactor) {
    double* ptr = signal;

    for (int i = 0; i < n; i++) {
        *ptr = (*ptr) * gainFactor;
        ptr++;
    }
}

int main8(){

	double signal[]{0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};
	int n = sizeof(signal)/sizeof(signal[0]);
	double rms =computeRMS(signal,  n);
	 cout << "RMS value: " << rms << endl;

	 cout << "Before normalise: ";
	    for (int i = 0; i < n; i++) {
	        cout << signal[i] << " ";
	    }
	    cout << endl;

	    normalise(signal, n);

	    cout << "After normalise: ";
	    for (int i = 0; i < n; i++) {
	        cout << signal[i] << " ";
	        cout<<endl;
	    }

	        int zeroCrossings = countZeroCrossings(signal, n);
	        cout << "Zero crossings: " << zeroCrossings << endl;

	        cout << "Before applyGain: ";
	           for (int i = 0; i < n; i++) {
	               cout << signal[i] << " ";
	           }
	           cout << endl;

	           applyGain(signal, n, 2.0);

	           cout << "After applyGain: ";
	           for (int i = 0; i < n; i++) {
	               cout << signal[i] << " ";
	           }

	return 0;
}
