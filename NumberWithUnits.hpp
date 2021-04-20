#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
namespace ariel{
    class NumberWithUnits{
        public:
            std::string unit;
            double val;
            NumberWithUnits();
            // NumberWithUnits(int num);
            // NumberWithUnits(std::string un);
            NumberWithUnits(double num, std::string un);
            void setVal(double _val);
            void setUnit(string _unit);
            double getVal();
            string getUnit();
            static void read_units(ifstream& units_file);
            // void NumberWithUnits::read_units(ifstream& units_file);
            // bool changeUnit(NumberWithUnits num);
            NumberWithUnits operator +(const NumberWithUnits& num);
            NumberWithUnits operator +=(const NumberWithUnits& num);
            NumberWithUnits operator +();
            NumberWithUnits operator -(const NumberWithUnits& num);
            NumberWithUnits operator -=(const NumberWithUnits& num);
            NumberWithUnits operator -();
            NumberWithUnits& operator ++();
            NumberWithUnits& operator --();
            NumberWithUnits operator ++(int);
            NumberWithUnits operator --(int);
            NumberWithUnits operator *(double num);
            // NumberWithUnits& operator*(double num);
            friend bool operator >(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator <(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator >=(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator <=(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator ==(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator !=(const NumberWithUnits& num1, const NumberWithUnits& num2);
            // ostream operator<<(ostream& out);
            void operator>>(istream& in);
            friend ostream& operator <<(ostream& out, NumberWithUnits const& num);
            friend NumberWithUnits operator *(double num, NumberWithUnits const& num2);
            friend istream& operator >>(istream& in, NumberWithUnits& num);
    };
    // ostream& operator<<(ostream& out, NumberWithUnits const& num);
    // NumberWithUnits operator*(double num, NumberWithUnits const& num2);
    // void operator>>(istringstream& in, NumberWithUnits const& num);

}