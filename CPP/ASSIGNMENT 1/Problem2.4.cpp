#include<iostream>
using namespace std;

bool parsePacket(const int* rawData, int size,int** outMin, int** outMax){
	if(size<=0){
		return false ;
	}
	  const int* minCandidate = rawData;
	   const int* maxCandidate = rawData;

	   for (int i = 1; i < size; ++i) {
	          if (rawData[i] < *minCandidate) {
	              minCandidate = &rawData[i];
	          }
	          if (rawData[i] > *maxCandidate) {
	              maxCandidate = &rawData[i];
	          }
	      }
	   *outMin = const_cast<int*>(minCandidate);
	   *outMax = const_cast<int*>(maxCandidate);
	   return true;
}


int main10(){

	int packet[] = {45, 12, 67, 8, 55, 31};
	int* minPtr = nullptr;
	int* maxPtr = nullptr;
	if (parsePacket(packet, 6, &minPtr, &maxPtr)) {
	 cout << "Calibration Min : " << *minPtr << endl;
	 cout << "Calibration Max : " << *maxPtr << endl;

	}
	return 0;
}
