#include<iostream>
#include<string>

using namespace std;
class BMI{
	public:
		void setH(float height);
		int getH();
		void setM(float weight);
		int getM();
		float getBMI();
		void reset();
		string BMIcategory(float yourBMI);
	private:
		float test_h;
		float test_w;
		float BMI;
		float yourBMI;
};

