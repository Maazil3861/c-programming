#include<iostream>

using namespace std;

class Default_argumnet
{

private:

	int first_number,second_number;

public:

	Default_argumnet(int first_number=10,int second_number=20)  //Both default value are used because value are not passed through object 
	{
  
		int sum;

		sum=first_number+second_number;

		cout<<"Addition of first and second number is ="<<sum<<endl;

	}
  
};

int main()
{  
  // Explicit call of constructor with default argument to passing the argument through object . 
  
  Default_argumnet object=Default_argumnet();   //warning: variable 'object' set but not used [-Wunused-but-set-variable]
 
 return 0:
 
 }
 /*
 OUTPUT
 Addition of first and second number is =30
 */
