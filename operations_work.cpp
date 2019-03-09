#include <iostream>
using namespace std;

//prototypes
void test(int arg1);
int sum(int x , int y);
int sub(int x , int y);
int mup(int x , int y);
int dev(int x , int y);

int main()
{
	//declaring variables
int Arg1_g;
int Arg2_g;
int ResultOfSumation_g;
int ResultOfSubtraction_g;
int ResultOfDevision_g;
int ResultOfMultiplication_g;

//printing variables
cout<< "Arg1 = ";
cin>>Arg1_g;
cout<< "Arg2 = ";
cin>>Arg2_g;

//calling functions
ResultOfSumation_g = sum( Arg1_g , Arg2_g );
ResultOfSubtraction_g = sub( Arg1_g , Arg2_g );
ResultOfDevision_g = mup( Arg1_g , Arg2_g );
ResultOfMultiplication_g = dev( Arg1_g , Arg2_g );

//printing  answers
cout << "Arg1 + Arg2 = " << ResultOfSumation_g << "\r\n";
test(ResultOfSumation_g);
cout << "Arg1 - Arg2 = " << ResultOfSubtraction_g << "\r\n";
test(ResultOfSubtraction_g);
cout << "Arg1 * Arg2 = " << ResultOfDevision_g << "\r\n";
test(ResultOfDevision_g);
cout << "Arg1 / Arg2 = " << ResultOfMultiplication_g << "\r\n";
test(ResultOfMultiplication_g);
    return 0;	
}
//finctions 
void test(int arg1)
{
    if (arg1 > 0)
    {
    	cout << "Greater than zero" << "\r\n";
	}
	if (arg1 < 0)
	{
		cout << "Lower than zero" << "\r\n";
	}
	if (arg1 == 0)
	{
		cout << "Equal to zero" << "\r\n";
	}
}
int sum(int x, int y)
{
	return(x + y);
}
int sub( int x, int y)
{
	return(x - y);
}
int mup( int x, int y)
{
	return(x * y);

}
int dev(int x , int y )
{
	return(x / y);
}
