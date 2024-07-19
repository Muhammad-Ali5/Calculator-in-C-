#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//template <class T>
class Calculator{
	protected:
		double num1,num2;
		double result;
	public:
		void Add(double a, double b){
			result=a+b;
			cout<<"NUmber one : "<<a<<endl;	
			cout<<"Number two : "<<b<<endl;
			cout<<"======================"<<endl;	
			cout<<"Sum is     : "<<result<<endl;
		}
		void Sub(double a, double b){
			result=a-b;
			cout<<"NUmber one : "<<a<<endl;	
			cout<<"Number two : "<<b<<endl;
			cout<<"======================"<<endl;	
			cout<<"Subtraction is : "<<result<<endl;
		}
		void Mult(double a, double b){
			result=a*b;
			cout<<"NUmber one : "<<a<<endl;	
			cout<<"Number two : "<<b<<endl;
			cout<<"======================"<<endl;
			cout<<"Multiplication is : "<<result<<endl;
		}
		void Divi(double a, double b){
			if(b!=0){
				if(a>b){
					result=a/b;
						cout<<"Division is : "<<result<<endl;
				    }
				    else{
						cout<<"denomenator is greater  "<<endl;
				    }
			}
			else{
				cout<<"Denomenator is zero "<<endl;	
	    	}
		}	
};

class Scientific_calculator:public Calculator {
	protected:
		int n1;
	public:
		float result;
			int Power(float n1,float n2){
			result=pow(n1,n2);
			cout<<"Power is : "<<result<<endl;
		}
		int Squ_root(float n1){
			result=sqrt(n1);
			cout<<" Square root of "<<n1<<" is :"<<result<<endl;
		}
		int Cos(float n1){
			result=cos(n1);
			cout<<" Cos of "<<n1<<" is :"<<result<<endl;
		}
		int Sine(float n1){
			result=sin(n1);
			cout<<" Sin of "<<n1<<" is :"<<result<<endl;
		}
		int Tan(float n1){
			result =tan(n1);
			cout<<"Tan of "<<n1<<" is :"<<result<<endl;
		}
		int Log(float n1){
			result =log(n1);
			cout<<"Natural Logarithem of "<<n1<<" is :"<<result<<endl;
		}
		int BaseLog(float n1){
			result = log10(n1);
			cout<<" log with Base 10 of "<<n1<<" is :"<<result<<endl;
		}
};
class CGPA_calculator:public Scientific_calculator{
	protected:
		int no_of_subjects;
		float total_points=0, total_credit_h=0, cgpa;
	public:
		CGPA_calculator(){
//			cout<<"\t-->WELCOME TO CGPA CLACULATOR=="<<endl;
//			cout<<"----------------------------------"<<endl;
		}
		void getData(){
			cout<<"Enter the number of subjects : "<<endl;
			cin>>no_of_subjects;
		}
		void calculateData(){
			for(int i=1; i<=no_of_subjects; i++){
				float credit_h, points;
				cout<<"Enter the credit hour for subject "<<i<<" :";
				cin>>credit_h;
				cout<<"Enter the points for subject "<<i<<" :";
				cin>>points;
				cout<<"----------------------------------"<<endl;
				
				total_points = total_points + (points*credit_h);
				total_credit_h = total_credit_h + credit_h;
			}
			cgpa = total_points/total_credit_h;
			cout<<"Your CGPA is : "<<cgpa<<endl;
		}
		void setGrading(){
			cout<<"Grading According To Your Cgpa is :) "<<endl;
			cout<<"----------------------------------"<<endl;
			if(cgpa==4.00){
				cout<<"GRADE IS : A "<<endl;
			}
			else if (cgpa>=3.67){
				cout<<"GRADE IS : A- "<<endl;
			}
			else if (cgpa>=3.33){
				cout<<"GRADE IS : B+ "<<endl;
			}
			else if (cgpa>=3.00){
				cout<<"GRADE IS : B "<<endl;
			}
			else if (cgpa>=2.67){
				cout<<"GRADE IS : B- "<<endl;
			}
			else if (cgpa>=2.33){
				cout<<"GRADE IS : C+ "<<endl;
			}
			else if (cgpa>=2.00){
				cout<<"GRADE IS : C "<<endl;
			}
			else if (cgpa>=1.67){
				cout<<"GRADE IS : C- "<<endl;
			}
			else if (cgpa>=1.33){
				cout<<"GRADE IS : D+ "<<endl;
			}
			else if (cgpa>=1.00){
				cout<<"GRADE IS : D "<<endl;
			}
			else if (cgpa>=0.67){
				cout<<"GRADE IS : D- "<<endl;
			}
			else if (cgpa>=0.00){
				cout<<"GRADE IS : F "<<endl;
			}
		}
};
class Add_two_Fraction:public CGPA_calculator{
	public:
		int gcd(int a, int b){
			if(b==0){
				return a;
			}else{
				return gcd(b,a%b);
			}	
		}
		void AddFraction(double n1,double d1,double n2,double d2){
			double lcm; 
			double new_num1;
			double new_num2; 
			lcm = (d1 * d2) / gcd(d1, d2);
			new_num1=n1*(lcm/d1);
			new_num2=n2*(lcm/d2);
			double result;
			result=new_num1+new_num2;
			cout<<result<<"/"<<lcm<<endl;
		}
};

int main(){
//	CGPA_calculator s_cal;
//	CGPA_calculator gpa_cal;
	Add_two_Fraction s_cal;
	int choice;
	char  option;
	double num1, num2;
	
	do{
		start1:
//		system("cls");
		cout<<"\t\t--> CALCULATOR :)"<<endl;
		cout<<"\t======================================"<<endl;
		cout<<"\tPress 1. For Simple Calculator     ==:)"<<endl;
		cout<<"\tPress 2. For Scientfic Calculator  ==:)"<<endl;
		cout<<"\tPress 3. For CGPA Calculator       ==:)"<<endl;
		cout<<"\tPress 4. For Fractional Addition   ==:)"<<endl;
		cout<<"\tPress 5. For Exit Program          ==:)"<<endl;
		cout<<"\t======================================"<<endl;
		cout<<"\n\t Enter your choice :)"<<endl;
		cout<<"\t---------------------------"<<endl;
		cin>>choice;
		switch(choice){
			case 1:{
				start2:
				cout<<"\t\t======================================"<<endl;
				cout<<"\t\tPress 1.  For Addition         -o-o-o-"<<endl;
				cout<<"\t\tPress 2.  For Subtraction      -o-o-o-"<<endl;
				cout<<"\t\tPress 3.  For Multiplication   -o-o-o-"<<endl;
				cout<<"\t\tPress 4.  For Diviosion        -o-o-o-"<<endl;
				cout<<"\t\tPress 5.  For Exit program     -o-o-o-"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\n\t Enter your choice :)"<<endl;			
				
				int choice;
				
				cin>>choice;
				
				if(choice==1){
					cout<<"Enter the number : "<<endl;
					cin>>num1>>num2;
					s_cal.Add(num1,num2);
					break;
				}
				if(choice==2){
					cout<<"Enter the number : "<<endl;
					cin>>num1>>num2;
					s_cal.Sub(num1,num2);
					break;
			}
				if(choice==3){
					cout<<"Enter the number : "<<endl;
					cin>>num1>>num2;
					s_cal.Mult(num1,num2);
					break;
			}
				if(choice==4){
					cout<<"Enter the number : "<<endl;
					cin>>num1>>num2;
					s_cal.Divi(num1,num2);
					break;
				}
				if(choice==5){
					cout<<"Successfully terminated : "<<endl;
					exit(0);
				}
				cout<<"-------------------------------------------"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\tDo You Want to try again : "<<endl;
				cout<<"\t==YES || NO== "<<endl;			
				cout<<"\tPress y or Y for YES & n or N for NO  "<<endl;	
				cout<<"\t---------------------------"<<endl;
				char option;
				cin>>option;
				if(option=='y'||option=='Y'){
					goto start2;
				cout<<"----------------------"<<endl;
				}else if(option=='n'||option=='N'){
					cout<<"program successfuly terminated..."<<endl;
					exit(0);
				}
									
			}
			case 2:{
				start3:
				cout<<"\t\t==> SECIENTIFIC CALCULATOR :==="<<endl;
				cout<<"\t\t======================================"<<endl;
				cout<<"\t\tPress 1.  For Power Operation  -o-o-o-"<<endl;
				cout<<"\t\tPress 2.  For Square Root      -o-o-o-"<<endl;
				cout<<"\t\tPress 3.  For Cos Operation    -o-o-o-"<<endl;
				cout<<"\t\tPress 4.  For Sin Operation    -o-o-o-"<<endl;
				cout<<"\t\tPress 5.  For Tan Operation    -o-o-o-"<<endl;
				cout<<"\t\tPress 6.  For Log Operation    -o-o-o-"<<endl;
				cout<<"\t\tPress 7.  For Base log         -o-o-o-"<<endl;
				cout<<"\t\tPress 8.  For Exit Program     -o-o-o-"<<endl;
				cout<<"\t\t---------------------------"<<endl;
				cout<<"\n\t\t Enter your choice :)"<<endl;
				cout<<"\t\t---------------------------"<<endl;
				int choice;
				cin>>choice;
				if(choice==1){
					cout<<"Enter the Two number : "<<endl;
					cin>>num1>>num2;
					s_cal.Power(num1,num2);
					break;
				}
				else if(choice==2){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.Squ_root(num1);
					break;
				}
				else if(choice==3){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.Cos(num1);
					break;
				}
				else if(choice==4){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.Sine(num1);
					break;
				}
				else if(choice==5){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.Sine(num1);
					break;
				}
				else if(choice==6){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.Tan(num1);
					break;	
				}
				else if(choice==7){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.Log(num1);
					break;
				}
				else if(choice==8){
					cout<<"Enter the number : "<<endl;
					cin>>num1;
					s_cal.BaseLog(num1);
					break;	
				}
				else if(choice==8){
					cout<<"Successfully Terminated :)"<<endl;
					exit(0);
					break;
				}
				else {
					cout<<"Invalid input.........."<<endl;
				}
				cout<<"-------------------------------------------"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\tDo You Want to try again : "<<endl;
				cout<<"\t==YES || NO== "<<endl;			
				cout<<"\tPress y or Y for YES & n or N for NO  "<<endl;	
				cout<<"\t---------------------------"<<endl;
					char option;
					cin>>option;
				if(option=='y'||option=='Y'){
					goto start3;
					cout<<"----------------------"<<endl;
				}else if(option=='n'||option=='N'){
					cout<<"program successfuly terminated..."<<endl;
					exit(0);
				}
				
			}//case 2 end bracket
			
			case 3:{
				start4:
				cout<<"\t\t==> GPA CALCULATOR ==="<<endl;
				cout<<"\t\t======================================"<<endl;
				cout << "\t\tPress 1. For subjects         -o-o-o-" << endl;
       			cout << "\t\tPress 2. For Exit Program     -o-o-o-" << endl;
       			cout << "\t\t---------------------------" << endl;
       			cout << "\n\t\t Enter your choice :)" << endl;
       			cin >> choice;
       			 cout << "\t\t---------------------------" << endl;
        		if(choice==1) {
            		s_cal.getData();
					s_cal.calculateData();
					s_cal.setGrading();
                	break;
          		}
            	else if(choice==2){
               		cout << "Program successfully terminated :) " << endl;
               		return 0; // Terminate the program gracefully
                	break;
				}
           		 else{
                	cout << "Invalid choice!" << endl;
                	break;
				}
				cout<<"-------------------------------------------"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\tDo You Want to try again : "<<endl;
				cout<<"\t==YES || NO== "<<endl;			
				cout<<"\tPress y or Y for YES & n or N for NO  "<<endl;	
				cout<<"\t---------------------------"<<endl;
					char option;
					cin>>option;
				if(option=='y'||option=='Y'){
					goto start4;
					cout<<"----------------------"<<endl;
				}else if(option=='n'||option=='N'){
					cout<<"program successfuly terminated..."<<endl;
					exit(0);
				}
        			break;
       		}//case 3 end bracket
       		
       		case 4:{
       		 	double num1,den1, num2, den2;
				cout<<"Enter the 1st numerator value : ";
				cin>>num1;
				cout<<"Enter the 1st denomenator value : ";
				cin>>den1;
				cout<<"Enter the 2nd numerator value : ";
				cin>>num2;
				cout<<"Enter the 2nd denomenator value : ";
				cin>>den2;
				cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<endl;
				s_cal.AddFraction(num1,den1,num2,den2);
				break;
			   }//case 4 end bracket
			   
			case 5:{
				cout<<"program successfuly terminated..."<<endl;
				exit(0);
			} 
			   
                     		
		}//switch bracket
			cout<<"-------------------------------------------"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\tDo You Want to try again : "<<endl;
				cout<<"\t==YES || NO== "<<endl;			
				cout<<"\tPress y or Y for YES & n or N for NO  "<<endl;	
				cout<<"\t---------------------------"<<endl;
					char option;
					cin>>option;
				if(option=='y'||option=='Y'){
					goto start1;
					cout<<"----------------------"<<endl;
				}else if(option=='n'||option=='N'){
					cout<<"program successfuly terminated..."<<endl;
					exit(0);
				}
						
	}while(option=='y' || option=='Y'); //while loop bracket			
	return 0;	
}
