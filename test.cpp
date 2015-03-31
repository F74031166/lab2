#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include"BMI.h"

using namespace std;

/*class BMI{
	public:
		void setH(float height)
		{
			test_h=height;
		}
		int getH()
		{
			return test_h;
		}
		void setM(float weight)
		{
			test_w=weight;
		}
		int getM()
		{
			return test_w;
		}
		float getBMI()
		{
			BMI=test_w/(test_h*test_h);
			return BMI;
		}
		void reset()
		{
			test_h=0;
			test_w=0;
		}
		string BMIcategory(int yourBMI)
		{
			
			if(yourBMI<15)
				return "Very severely underweight\n";
			else if(15.0<=yourBMI&&yourBMI<16.0)
				return "Severely underweight\n";
			else if(16.0<=yourBMI&&yourBMI<18.5)
				return "Underweight\n";
			else if(18.5<=yourBMI&&yourBMI<25)
				return "Normal\n";
			else if(25<=yourBMI&&yourBMI<30)
				return "Overweight\n";
			else if(30<=yourBMI&&yourBMI<35)
				return "Obese Class I (Moderately obese) good\n";
			else if(35<=yourBMI&&yourBMI<40)
				return "Obese Class II (Severely obese)\n";
			else if(40<=yourBMI)	
				return "Obese Class III (Very severely obese)\n";
		}
	private:
		float test_h;
		float test_w;
		float BMI;
		float yourBMI;
};*/

int main()
{
	fstream file,fi;
	float h,m,bb;
	char c;
	file.open("file_in.txt",ios::in);
	fi.open("file_out.txt",ios::out);
	BMI bmi;
	while(!file.eof())
	{
		file>>h;
		h=h/100;
		//cout<<a<<endl;
		bmi.setH(h);
		file>>m;
		//cout<<b<<endl;
		bmi.setM(m);
		bb=bmi.getBMI();
		//cout<<bb<<"\n";
			fi<<fixed<<setprecision(2)<<bb<<"\t";
			fi<<bmi.BMIcategory(bb);
			/*if(yourBMI<15)
				fi<<"Very severely underweight"<<endl;
			else if(15.0<=yourBMI&&yourBMI<16.0)
				fi<<"Severely underweight"<<endl;
			else if(16.0<=yourBMI&&yourBMI<18.5)
				fi<<"Underweight"<<endl;
			else if(18.5<=yourBMI&&yourBMI<25)
				fi<<"Normal"<<endl;
			else if(25<=yourBMI&&yourBMI<30)
				fi<<"Overweight"<<endl;
			else if(30<=yourBMI&&yourBMI<35)
				fi<<"Obese Class I (Moderately obese)"<<endl;
			else if(35<=yourBMI&&yourBMI<40)
				fi<<"Obese Class II (Severely obese)"<<endl;
			else if(40<=yourBMI)	
				fi<<"Obese Class III (Very severely obese)"<<endl;
			fi<<"\n";*/
		bmi.reset();
	}
	file.close();
	fi.close();

	return 0;
}
