#include "Time2.h"

Time2::Time2(int h, int m, int s, string n) //ctor
:name(n)//initialize the const members
{
    try{
        setHour(h).setMin(m).setSec(s);
    }catch(const char * e){
        throw e;
    }
}

Time2::~Time2()
{
  //dtor
}


int Time2::getHour() const
{
  return hour;

}

int Time2::getMin() const
{
  return min;
}

int Time2::getSec() const
{
  return sec;
}

string Time2::getName() const
{
    return name;
}


Time2& Time2::setHour(int h)  
{
  if(h <= 23 && h >= 0){
    hour = h;
  }else{
    throw "wrong hour";
  }
}


Time2& Time2::setMin(int m) 
{
  if(m <= 59 && m >= 0){
    min = m;
  }else{
    throw "wrong minute";
  }
}


Time2& Time2::setSec(int s) 
{
  if(s <= 59 && s >= 0){
    sec = s;
  }else{
    throw "wrong second";
  }
}

Time2& Time2::operator ++()
{
  if(min == 59 && sec ==59){
    sec = 0;
    min = 0;
    hour++;
  }else if(sec == 59){
    sec = 0;
    min++;
  }else{
    sec++;
  } 
  return *this;
} 

Time2 Time2::operator ++(int)
{
  Time2 temp = *this;
  ++(*this);
  return temp; 
}

Time2& Time2::printTime()
{
  cout << "hour" << "-" << "min" << "-" << "sec" << endl;
  return *this;
}

Time2& Time2::operator -- ()
{
  return *this;
}

bool Time2::am()
{
  if(hour >= 12){
    cout << "pm" << endl;
  }else{
    cout << "am" << endl;
  }
} 
