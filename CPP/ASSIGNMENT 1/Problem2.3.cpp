#include<iostream>
using namespace std;
int main9(){
	int statusReg = 0b10110001;
	const int* regPtr1=&statusReg;
	cout<<"Status registr value:"<<*regPtr1;
	//*regPtr1=123456 ;//--gives error assignment of read only location *regPtr1 because *regPtr1 is constant pointer we cant change value;
	//regPtr1=&statusReg;//---here we can repoint the address of status register;
	int controlReg = 0b00000000;
	int* const regPtr2=&controlReg;
	cout<<"control registr value:"<<*regPtr2;
	//*regPtr2=123456 ;//here no error it is allow
	//regPtr2=&statusReg;//here error assignment of read only location *regPtr2 .
	int dataReg = 0b11001010;
	const int* const regPtr3=&dataReg;
	 cout << "data Register Value : " << *regPtr3 ;
	 // *regPtr3 = 123456;  // not allow or cannot modify value (const int)
	 // regPtr3 = &statusReg;   // here also not allow or  cannot repoint (const pointer)
	return 0;
}
