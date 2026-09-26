#include<iostream>
using namespace std;

class student {
	
   private:
   	int Roll;
   	double Marks;
   	string name;
   	public:
   		
   	
   		student (){
   			cout<<"This is default constructor";
   		
        name = "Adnan"; 
   		Marks = 0;
   		Roll = 0;
   	 }
   	student (string n, int r, double m ){
   		name = n;
   		Roll = r;
   		Marks = m;
   		
   		
   		
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
			
    student s[3] = {
    	
    student("Adnan", 324 , 90),
       student("Adnan", 324,90),
          student("Adnan", 324,90)
      };
    
    for(int i = 0; i < 3; i++) {
        s[i].Display();
    }
	return 0;
		
	
	
	
	
	
	
	
	
	
	
	
}
