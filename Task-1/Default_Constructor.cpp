#include<iostream>
using namespace std;

class student {
	
   private:
   	int Roll;
   	double Marks;
   	string name;
   	public:
   		
   		student ()
	{
   		name = "Adnan";
   		Marks = 0;
   		Roll = 0;
   	 }
   	
   	    void Display (){
   	    cout<<endl<<"=====Student Details====="<<endl;
   	    cout<<"Name: "<<name<<endl;
   	    cout<<"Roll: "<<Roll<<endl;
   	    cout<<"Marks: "<<Marks<<endl;
   	    cout<<"=========================="<<endl;	
   	    	
		   }
   };
	
	int main(){
			

    student s[3];

    for(int i = 0; i < 3; i++) {
        s[i].Display();
    }
	return 0;
		
	
	
	
	
	
	
	
	
	
	
	
}
