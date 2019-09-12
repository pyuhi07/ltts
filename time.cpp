#include<iostream>

using namespace std;

class Time
{

public:
  Time ();
  void setTime (int, int, int);
  void PrintMilitary ();
  void PrintStandard ();
private:

  int hour;
  int minute;
  int second;
};

Time::Time ()
{
  hour = minute = second = 0;
}

void
Time::setTime (int h, int m, int s)
{
  hour = (h >= 0 && h < 24) ? h : 0;
  minute = (m >= 0 && m < 60) ? m : 0;
  second = (s >= 0 && s < 60) ? s : 0;
}

  void Time::PrintMilitary ()
  {
    cout << (hour < 10 ? "0" : "") << hour << ":"
      << (minute < 10 ? "0" : "") << minute;
  }

  void Time::PrintStandard ()
  {
    cout << (hour == 0 || hour == 12 ? "0" : "") << hour - 12
      << ":" << (minute < 10 ? "0" : "") << minute
      << ":" << (second < 10 ? "0" : "") << second
      << (hour < 12 ? "AM" : "PM");
  }










  int main ()
  {
    Time t;

    cout << " military time,which is ";
    t.PrintMilitary ();

    cout << " The initail standard time is";
    t.PrintStandard ();

    t.setTime (13, 27, 6);
    cout << "\n\nMilitary time after set is";
    t.PrintMilitary ();

    cout << "\nstandard after set is";
    t.PrintStandard ();

    t.setTime (99, 99, 99);
    cout << "\n after attempting invalid settings" << "\n\nMilitary time  is";
    t.PrintMilitary ();

    cout << "\nstandard time is";
    t.PrintStandard ();

    return 0;


  }
