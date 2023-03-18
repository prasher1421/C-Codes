#include<bits/stdc++.h>
using namespace std;

float Division(float num, float den)
{
	if (den == 0) {
		throw runtime_error("Math error: Divsion by Zero\n");
	}
	return (num / den);
}

int main()
{
	float numer, denom, result;
	cout<<"Enter Numerator and Denominator : ";
	cin>>numer>>denom;

	try {
		result = Division(numer, denom);
		cout << "The quotient is "
			<< result << endl;
	}
	catch (runtime_error& e) {
		cout << "Exception occurred" << endl <<e.what();
	}
}
