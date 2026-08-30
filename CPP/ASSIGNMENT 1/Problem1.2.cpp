#include<iostream>
#include<algorithm>
using namespace std;

int main4(){
	double sum=0;
	int reading;
	int count=0;
	int normal=0;
	int warning=0;
	int critical=0;
	int shutdown=0;

	cout<<"Enter Your Reading:";
	cin>>reading;
	cout<<"Reading Entered:"<<reading;
	double arr[reading];

	for(int i=0;i<reading;i++){
		cin>>arr[i];
	}
	cout<<"Valid Readings :";

	    double min = arr[0];
		double max = arr[0];

	for(int i=0;i<reading;i++){
		if(arr[i]<0)
		{
			count++;
			continue;
		}
		cout<<arr[i]<<" ";

		}


	cout<<""<<endl;
	cout<<"Skipped (error):"<<count<<endl;

	for(int i=0;i<reading;i++){
			if(arr[i]>=45){
				cout<<"First Critical: Index:"<< i<<" --->"<<arr[i]<<"°C";
				break;
			}

		}

	for(int i=0;i<reading;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
		sum=sum+arr[i];
	}
	cout<<endl;
	cout<<"min: "<<min<<"°C   "<<"max: "<<max<<"°C"<<"  "<<"avg: "<<(sum/reading)<<"°C"<<endl;

	for(int i=0;i<reading;i++){
		if(0<=arr[i]<=29){
			normal++;
		}
		else if(arr[i]<=44){
			warning++;
			}
		else if(arr[i]<=59){
			critical++;
			}
		else{
			shutdown++;
		}
		}
	cout<<"Normal:"<<normal<<"  Warning:"<<warning<<"  Critical:"<<critical<<"  Shutdown:"<<shutdown;


}
