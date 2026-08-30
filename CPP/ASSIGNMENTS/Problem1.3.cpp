#include<iostream>
using namespace std;
int main5(){
	int floor=1;

	double arr[3][3];
	cout<<"enter your 3 by 3 array elemet:";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cin>>arr[i][j];
		}
	}

	int room=1;
	cout<<"       ";
	for(int i=1 ;i<=3;i++){
		cout<<" Room"<<room<<" ";
		room++;
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<"FLOOR "<<floor<<" : ";
		floor++;
		for(int j=0;j<3;j++){

				cout<<arr[i][j]<<"      ";

				}
		cout<<endl;
	}

	cout<<"Hottest Room: ";
	double hottest = arr[0][0];
    int floorNo=1;
    int roomNo=1;
	for(int i=0;i<3;i++){

			for(int j=0;j<3;j++){

				if(hottest<arr[i][j]){
					hottest=arr[i][j];
					floorNo=i+1;
					roomNo=j+1;
				}

			}

		}
	  cout<<"floor"<<(floorNo)<<"  room"<<roomNo<<"-->"<<hottest<<"°C"<<endl;

	  cout<<"Hottest floor: ";

	  double max_avg = -1;
	  	  int highest_avg_floor = 1;

	  	  for(int i=0; i<3; i++){
	  	  		double sum = 0;
	  	  		for(int j=0; j<3; j++){
	  	  			sum += arr[i][j];
	  	  		}
	  	  		double avg = sum / 3.0;

	  	  		if(avg > max_avg){
	  	  			max_avg = avg;
	  	  			highest_avg_floor = i + 1;
	  	  		}


	  	  	}


	  	 cout << "floor"<< highest_avg_floor << " (Average "<< max_avg<<"°C)"<< endl;
	  	int count=0;
	  	 for(int i=0;i<3;i++){

	  				for(int j=0;j<3;j++){

	  					if(30<arr[i][j]){
	  						count++;

	  					}

	  				}

	  			}
	  	 cout<<"Room at Warning Or Above: "<<count;
	  	 return 0;

}
