#include"BMI.h"
#include<string>


		void BMI::setH(float height)
		{
			test_h=height;
		}
		int BMI::getH()
		{
			return test_h;
		}
		void BMI::setM(float weight)
		{
			test_w=weight;
		}
		int BMI::getM()
		{
			return test_w;
		}
		float BMI::getBMI()
		{
			BMI=test_w/(test_h*test_h);
			return BMI;
		}
		void BMI::reset()
		{
			test_h=0;
			test_w=0;
		}
		string BMI::BMIcategory(float yourBMI)
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
				return "Obese Class I (Moderately obese)\n";
			else if(35<=yourBMI&&yourBMI<40)
				return "Obese Class II (Severely obese)\n";
			else if(40<=yourBMI)	
				return "Obese Class III (Very severely obese)\n";
		}
