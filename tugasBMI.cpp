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
    else if (bmi < 30)
        return "berat badan kelebihan";
    else
        return "obesitas";
}
int main ()
{
    float berat, tinggi, bmi;
    string status;
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "masukkan  berat badan = ";
    cin >>berat;
    cout << "masukkan tinggi badan =";
    cin >> tinggi;

     bmi = Hitung_BMI(berat, tinggi);

     cout << endl << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << Status_BMI(bmi) << endl;
}