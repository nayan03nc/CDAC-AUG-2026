#include<iostream>
using namespace std;
int main3(){
	double temp;
	cout<<"Enter Floor temperature:";
	cin>>temp;
	double tempf = ( temp* 9 / 5) + 32;
	cout<<"Temperature:"<<temp<<"°C" <<"/"<<tempf<<"°F"<<""<<endl;
	int CODE_STATUS;
	string AvgReading;




	if(temp<0){
		CODE_STATUS=-1;

		cout<<"STATUS : SENSOR_ERROR"<<endl;
	}
	else if(temp<=29){
		CODE_STATUS=0;

		cout<<"STATUS : NORMAL"<<endl;
	}
	else if(temp<=44){
			CODE_STATUS=1;

			cout<<"STATUS : WARNING"<<endl;
		}
	else if(temp<=59){
			CODE_STATUS=2;

			cout<<"STATUS : CRITICAL"<<endl;
		}
	else {
			CODE_STATUS=3;

			cout<<"STATUS : SHUTDOWN"<<endl;
		}

	switch(CODE_STATUS){
	case -1: cout<<"ACTION: Sensor fault — check wiring"<<endl;
		break;
	case 0: cout<<"ACTION: No action required"<<endl;
			break;
	case 1: cout<<"ACTION: Alert sent to supervisor"<<endl;
			break;
	case 2: cout<<"ACTION: Cooling system triggered"<<endl;
			break;
	case 3: cout<<"ACTION: Emergency shutdown initiated"<<endl;
			break;
	default: cout<<"INVALID"<<endl;
				break;
	}

	AvgReading= (temp>25)?"Above Average":"below average";
	cout<<"READING: "<<AvgReading;
	return 0;
}
