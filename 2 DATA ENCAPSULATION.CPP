#include<iostream>

using namespace std;

class customer{
	
	private:
		
		int cust_id;
		int cust_age;
		int cust_mobile_number;
		char cust_name[100];
		char cust_telecome_brand_name[100];
		char cust_city[100];
		char cust_simcard_validity[100];
	
		public:
			void setter();
			void getter();
};

void customer::setter(){
	
	cout<<"Enter id:";
	cin>>cust_id;
	
	cout<<"Enter age:";
	cin>>cust_age;
	
	cout<<"Enter mobile number:";
	cin>>cust_mobile_number;
	
	cout<<"Enter name:";
	cin>>cust_name;
	
	cout<<"Enter telecome brand name:";
	cin>> cust_telecome_brand_name;
	
	cout<<"Enter city:";
	cin>>cust_city;
	
	cout<<"Enter cust simcard validity:";
	cin>>cust_simcard_validity;
}

void customer::getter(){
	
	cout<<cust_id<<endl;
	cout<<cust_age<<endl;
	cout<<cust_mobile_number<<endl;
	cout<<cust_name<<endl;
	cout<<cust_telecome_brand_name<<endl;
	cout<<cust_city<<endl;
	cout<<cust_simcard_validity<<endl;
}

main(){
	
	customer o[5];
	int i;
	 
	 for(i=0; i<=4; i++){
	 	o[i].setter();
	 	o[i].getter();
	 }
}

