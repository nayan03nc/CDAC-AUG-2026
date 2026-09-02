#include <iostream>
#include<vector>
#include<string>
using namespace std;

enum class HttpStatus {
	 OK = 200,
	 Created = 201,
	 BadRequest = 400,
	 Unauthorized = 401,
	 NotFound = 404,
	 ServerError = 500
	};





void handleResponse(HttpStatus status, const string& endpoint){

	switch(static_cast<int>(status)){
	case 200: cout << "[GET /api/users] -->"<<static_cast<int>(status) <<" "<< endpoint << " : Request successful" << endl;
		break;

	case 401: cout << "[POST /api/login] -->"<<static_cast<int>(status)<<" " << endpoint << " : Authentication required" << endl;
			break;

	case 404: cout << "[GET /api/products/99] -->"<<static_cast<int>(status)<<" " << endpoint << " : Endpoint does not exist" << endl;
			break;

	case 500: cout << "[POST /api/order] -->"<<static_cast<int>(status)<<" "<< endpoint << " : Internal server error — retry later" << endl;
			break;

	}
}
//---------------Part b--------------------------------------------
using Header = pair<string, string>;
using HeaderList = vector<Header>;
using Port = unsigned int;
using IPAddress = string;

// traditional alis
typedef unsigned long long RequestId;


 void	printHeaders(const HeaderList& headers){
		for(const auto& header:headers){
			cout<<"  "<<header.first<<" : "<<header.second<<endl;
		}
	}





int main(){
	 handleResponse(HttpStatus::OK, "OK");
	 handleResponse(HttpStatus::Unauthorized, "Unauthorized");
	 handleResponse(HttpStatus::NotFound, "Not Found ");
	 handleResponse(HttpStatus::ServerError, "Server Error");

	 cout<<endl;
	 cout<<endl;
	 cout<<endl;


	 //part b---------------------------

	 RequestId requestId = 1748293847;
	 Port port=8080;

	 cout<<"Request ID  :"<<requestId<<endl;
	 cout<<"Server Port :"<<port<<endl;

	 cout<<endl;

	 cout<<"Headers:"<<endl;

	    HeaderList headers = {
	        {"Content-Type", "application/json"},
	        {"Authorization", "Bearer eyJhbGci..."},
	        {"Accept-Language", "en-US"}
	    };

	    printHeaders(headers);

	return 0;
}
