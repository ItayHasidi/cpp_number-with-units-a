#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "NumberWithUnits.hpp"
using namespace ariel;

ariel::NumberWithUnits a;
NumberWithUnits::NumberWithUnits(){}
NumberWithUnits::NumberWithUnits(double num, std::string un){
    this->val = num;
    this->unit = un;
}

void NumberWithUnits::read_units(ifstream& units_file){

}
void NumberWithUnits::setVal(double _val){
    this->val = _val;
}
void NumberWithUnits::setUnit(string _unit){
    this->unit = _unit;
}

double NumberWithUnits::getVal(){
    return this->val;
}
string NumberWithUnits::getUnit(){
    return this->unit;
}
/*
bool changeUnit(const NumberWithUnits& num1,const  NumberWithUnits& num2){
    bool flag = true;
    //length
    if(num1.unit == "km"){
        if(num2.unit == "m"){
            num2.val = num2.val/1000;
            num2.unit = "km";
            flag = true;
        }
        else if(num2.unit == "cm"){
            num2.val = num2.val/100/1000;
            num2.unit = "km";
            flag = true;
        }
    }
    else if(num1.unit == "m"){
        if(num2.unit == "km"){
            num2.val = num2.val*1000;
            num2.unit = "m";
            flag = true;
        }
        else if(num2.unit == "cm"){
            num2.val = num2.val/100;
            num2.unit = "m";
            flag = true;
        }
    }
    else if(num1.unit == "cm"){
        if(num2.unit == "m"){
            num2.val = num2.val*100;
            num2.unit = "cm";
            flag = true;
        }
        else if(num2.unit == "km"){
            num2.val = num2.val*100*1000;
            num2.unit = "cm";
            flag = true;
        }
    }

    //weight
    else if(num1.unit == "ton"){
        if(num2.unit == "kg"){
            num2.val = num2.val/1000;
            num2.unit = "ton";
            flag = true;
        }
        else if(num2.unit == "g"){
            num2.val = num2.val/1000/1000;
            num2.unit = "ton";
            flag = true;
        }
    }
    else if(num1.unit == "kg"){
        if(num2.unit == "ton"){
            num2.val = num2.val*1000;
            num2.unit = "kg";
            flag = true;
        }
        else if(num2.unit == "g"){
            num2.val = num2.val*1000;
            num2.unit = "kg";
            flag = true;
        }
    }
    else if(num1.unit == "g"){
        if(num2.unit == "kg"){
            num2.val = num2.val*1000;
            num2.unit = "g";
            flag = true;
        }
        else if(num2.unit == "ton"){
            num2.val = num2.val*1000*1000;
            num2.unit = "g";
            flag = true;
        }
    }

    //time
    else if(num1.unit == "sec"){
        if(num2.unit == "hour"){
            num2.val = num2.val*60*60;
            num2.unit = "sec";
            flag = true;
        }
        else if(num2.unit == "min"){
            num2.val = num2.val*60;
            num2.unit = "sec";
            flag = true;
        }
    }
    else if(num1.unit == "min"){
        if(num2.unit == "hour"){
            num2.val = num2.val*60;
            num2.unit = "min";
            flag = true;
        }
        else if(num2.unit == "sec"){
            num2.val = num2.val/60;
            num2.unit = "min";
            flag = true;
        }
    }
    else if(num1.unit == "hour"){
        if(num2.unit == "min"){
            num2.val = num2.val/60;
            num2.unit = "hour";
            flag = true;
        }
        else if(num2.unit == "sec"){
            num2.val = num2.val/60/60;
            num2.unit = "hour";
            flag = true;
        }
    }

    //currency
    else if(num1.unit == "USD"){
        if(num2.unit == "ILS"){
            num2.val = num2.val/3.33;
            num2.unit = "USD";
            flag = true;
        }
    }
    else if(num1.unit == "ILS"){
        if(num2.unit == "USD"){
            num2.val = num2.val*3.33;
            num2.unit = "ILS";
            flag = true;
        }
    }
    return flag;
}
*/

NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& num){
    // if(this->unit == num.unit){
    //     this->val += num.val;
    // }
    // else if(changeUnit(*this, num) == true){
    //     this->val += num.val;
    // }
    return *this;
}
NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits& num){
    // if(this->unit == num.unit){
    //     this->val += num.val;
    // }
    // else if(changeUnit(*this, num) == true){
    //     this->val += num.val;
    // }
    return *this;
}
NumberWithUnits NumberWithUnits::operator+(){
    return *this;
}
NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& num){
    // if(this->unit == num.unit){
    //     this->val -= num.val;
    // }
    // else if(changeUnit(*this, num) == true){
    //     this->val -= num.val;
    // }
    return *this;
}
NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits& num){
    // if(this->unit == num.unit){
    //     this->val -= num.val;
    // }
    // else if(changeUnit(*this, num) == true){
    //     this->val -= num.val;
    // }
    return *this;
}
NumberWithUnits NumberWithUnits::operator-(){
    // printf("here\n");
    this->val = -1 * this->val;
    return *this;
}

NumberWithUnits& NumberWithUnits::operator ++(){
    ++this->val;
    return *this;
}
NumberWithUnits& NumberWithUnits::operator --(){
    --this->val;
    return *this;
}

NumberWithUnits NumberWithUnits::operator ++(int){
    this->val++;
    return *this;
}
NumberWithUnits NumberWithUnits::operator --(int){
    this->val--;
    return *this;
}

NumberWithUnits NumberWithUnits::operator *(double num){
    this->val *= num;
    return *this;
}

bool ariel::operator >(const NumberWithUnits& num1, const NumberWithUnits& num2){
    bool flag = true;
    // if(num1.unit == num2.unit){
    //     if (num1.unit > num2.unit){
    //         flag = true;
    //     }
    // }
    // else if(changeUnit(num1, num2) == true){
    //     if (num1.unit > num2.unit){
    //         flag = true;
    //     }
    // }
    return flag;
}
bool ariel::operator<(const NumberWithUnits& num1, const NumberWithUnits& num2){
    bool flag = true;
    // if(num1.unit == num2.unit){
    //     if (num1.unit < num2.unit){
    //         flag = true;
    //     }
    // }
    // else if(changeUnit(num1, num2) == true){
    //     if (num1.unit < num2.unit){
    //         flag = true;
    //     }
    // }
    return flag;
}
bool ariel::operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2){
    bool flag = true;
    // if(num1.unit == num2.unit){
    //     if (num1.unit >= num2.unit){
    //         flag = true;
    //     }
    // }
    // else if(changeUnit(num1, num2) == true){
    //     if (num1.unit >= num2.unit){
    //         flag = true;
    //     }
    // }
    return flag;
}
bool ariel::operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2){
    bool flag = true;
    // if(num1.unit == num2.unit){
    //     if (num1.unit <= num2.unit){
    //         flag = true;
    //     }
    // }
    // else if(changeUnit(num1, num2) == true){
    //     if (num1.unit <= num2.unit){
    //         flag = true;
    //     }
    // }
    return flag;
}
bool ariel::operator==(const NumberWithUnits& num1, const NumberWithUnits& num2){
    bool flag = true;
    // if(num1.unit == num2.unit){
    //     if (num1.unit == num2.unit){
    //         flag = true;
    //     }
    // }
    // else if(changeUnit(num1, num2) == true){
    //     if (num1.unit == num2.unit){
    //         flag = true;
    //     }
    // }
    return flag;
}
bool ariel::operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2){
    bool flag = true;
    // if(num1.unit == num2.unit){
    //     if (num1.unit != num2.unit){
    //         flag = true;
    //     }
    // }
    // else if(changeUnit(num1, num2) == true){
    //     if (num1.unit != num2.unit){
    //         flag = true;
    //     }
    // }
    return flag;
}

ostream& ariel::operator <<(ostream& out, const NumberWithUnits& num){
    return out << num.val << "[" << num.unit << "]";
}
NumberWithUnits ariel::operator *(double num, const NumberWithUnits& num2){

    return num2;
}
istream& ariel::operator >>(istream& in, NumberWithUnits& num){
    
    return in;
}
// }
