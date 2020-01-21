//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>

using namespace std;

int main(){
	float old,money,tall;
	string status="";
	
	cout<<"How old are you ? : ";
	
	cin>>old;
	
	if(old<=20){
		cout<<"how tall are you ? : ";
		cin>>tall;
			if(tall<160){
				status="UNFRIEND";
				cout<<"your status :" << status;
				return 0;
			}
			else if(tall<175){
				status="FRIEND";
				cout<<"your status :" << status;
				return 0;
			}
			cout<<"How mush money do you have ? : ";
			cin>>money;
				if(money>69000000){
					status="MARRIED";
				}
				else{
					status="ONE-NIGHT-STAND";
				}
		
	}
	else if(old<=30){
		cout<<"How mush money do you have ? :";
		cin>>money;
			if(money>10000000){
				status="BEST FRIEND";
			}
			else{
				status="UNFRIEND";
			}
	}
	else{
		status="UNFRIEND";
		
	}
	
	cout<<"your status : "<<status;
	
	
	return 0 ;
}
