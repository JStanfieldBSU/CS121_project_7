#ifndef DATE_H
#define DATE_H

class Date{
  protected:
    std::string dateString;
    std::string day;
    std::string month;
    std::string year;

  public:
    Date();
    void init(int day, int month, int year);
    void printDate();
    int getDay();
    void setDay(int day);
    int getMonth();
    void setMonth(int month);
    int getYear();
    void setYear(int year);
};

#endif