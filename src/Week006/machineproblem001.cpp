#include <iostream>
#include <string> 
#include <string>

constexpr int FRESHMAN{ 1500 };
constexpr int SOPHOMORE{ 1800 };
constexpr int JUNIOR{ 2000 };
constexpr int SENIOR{ 2300 };
constexpr double DPRATE{ 0.30 };
const std::string YEARNAMEFM{ "Year Name: FRESHMAN" };
const std::string YEARNAMESM{ "Year Name: SOPHOMORE" };
const std::string YEARNAMEJR{ "Year Name: JUNIOR" };
const std::string YEARNAMESR{ "Year Name: SENIOR" };

void GetInput(std: :string& stName, std: :string& progCourse, int& yrLevel, double& unitEn);
void DisplayResults(const std: :string stName,
const std::string progCourse,
const std::string yearName,
const int TF,
const double unitEn,
const double DP,
const double BAL);

int main ()
{
    std::string stName, progCourse;
    int yrLevel{};
    double unitEn{};
    int TF{};
    double DP{};
    double BAL{};

    GetInput(stName, progCourse, yrLevel, unitEn);
    std::cout << "\n";

    if (yrLevel ==1)
    {
        TF = unitEn * FRESHMAN;
        DP= TF * DPRATE;
        double BAL = TF - DP;
        DisplayResults(stName, progCourse, YEARNAMEFM, unitEn, TF, DP, BAL);
    }
    else if (yrLevel == 2)
    {
        TF = unitEn * SOPHOMORE;
        DP= TF * DPRATE;
        double BAL = TF - DP;
        DisplayResults(stName, progCourse, YEARNAMESM, unitEn, TF, DP, BAL);
        std::cout << "\n";
    }
    else if (yrLevel == 3)
    {
        TF = unitEn * JUNIOR;
        DP= TF * DPRATE;
        double BAL = TF - DP;
        DisplayResults(stName, progCourse, YEARNAMEJR, unitEn, TF, DP, BAL);
        std::cout << "\n";
    }
    else if (yrLevel == 4)
    {
        TF = unitEn * SENIOR;
        DP= TF * DPRATE;
        double BAL = TF - DP;
        DisplayResults(stName, progCourse, YEARNAMESR, unitEn, TF, DP, BAL);
        std::cout << "\n";
    }
    else if (yrLevel == 5)
    {
        TF = unitEn * SENIOR;
        DP= TF * DPRATE;
        double BAL = TF - DP;
        DisplayResults(stName, progCourse, YEARNAMESR, unitEn, TF, DP, BAL);
        std::cout << "\n";
    }
    
    void GetInput(std: :string& stName, std: :string& progCourse, int& yrLevel, double& unitEn);
    {
        std::cout << "Student Name: ";
        std::getline(std: :cin, stName);
        std::cout << "Program / Course: ";
        std::getline(std: :cin, progCourse);
        std::cout << "Year Level: ";
        std::cin >> yrLevel;
        std::cout << "Number of units: ";
        std::cin >> unitEn;
    }

    void DisplayResults(const std: :string stName,
    const std::string progCourse,
    const std::string yearName,
    const double unitEn,
    const int TF,
    const double DP,
    const double BAL);
    {
        std::cout << "\n";
        std::cout << "***ENROLLMENT SLIP***";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "Student Name: " << stName;
        std::cout << "\n";
        std::cout << "Program / Course: " << progCourse;
        std::cout << "\n";
        std::cout << "Program / Course: " << progCourse;
        std::cout << "\n";
        std::cout << "Number of Units: " << unitEn;
        std::cout << "\n";
        std::cout << "Tuition Fee: " << TF;
        std::cout << "\n";
        std::cout << "Down Payment: " << DP;
        std::cout << "\n";
        std::cout << "Balance: " << BAL;
        std::cout << "\n";
    }

