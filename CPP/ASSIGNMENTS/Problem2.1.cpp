#include<iostream>
using namespace std;


void resetSensorPairV1(int reading1, int reading2){
	int a=reading1;
	int b =reading2;
	cout<<"After: "<<"A="<<a<<" B="<<b<<endl;
}
void resetSensorPairV2(int &reading1, int &reading2){
	int a=reading1;
	int b =reading2;
	 a=a+b;
	 b=a-b;
	 a=a-b;

	cout<<"After: "<<"A="<<a<<" B="<<b<<endl;
}
void resetSensorPairV3(int *reading1, int *reading2){
	int a=*reading1;
	int b =*reading2;
	 a=a+b;
	 b=a-b;
	 a=a-b;

	cout<<"After: "<<"A="<<a<<" B="<<b<<endl;
}



int main7(){
	int a = 55;
	int b = 12;
	cout<<"--- V1: Call by Value ---"<<endl;
	cout<<"Before: "<<"A="<<a<<" B="<<b<<endl;
	resetSensorPairV1(a,b);

	cout<<"--- V2: Call by Reference ---"<<endl;
	cout<<"Before: "<<"A="<<a<<" B="<<b<<endl;
	resetSensorPairV2(a, b);

	cout<<"--- V3: Call by pointer ---"<<endl;
	cout<<"Before: "<<"A="<<a<<" B="<<b<<endl;
	resetSensorPairV3(&a, &b);

	return 0;
}
