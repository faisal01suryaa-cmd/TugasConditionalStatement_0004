#include <iostream>
using namespace std;

float Hitung_BMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}
string Status_BMI(float bmi) 
{
    if (bmi < 18.5)
        return "berat badan kurang";
    else if (bmi < 25)
        return "berat badan normal";

}