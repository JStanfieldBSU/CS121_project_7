# Heap of Students
### CS121 Stanfield

## Student Class
```
  # studentString : string
  # firstName : string
  # lastName : string
  # studentAddress : Address*
  # birthDate : Date*
  # gradDate : Date*
  # creditHours : int

  + Student()
  + ~Student()
  + init(studentString)
  + void printStudent()
  + string getFirstName()
  + void setFirstName()
  + string getLastName()
  + void setLastName()
  + Address getStudentAddress()
  + void setStudentAddress()
  + Date getBirthDate()
  + void setBirthDate()
  + Date getGradDate()
  + void setGradDate()
  + int getCreditHours()
  + void setCreditHours()
```

## Address Class
```
  # street : string
  # city : string
  # state : string
  # zip : string

  + Address()
  + void init(street : string, city : string, state : string, zip : string)
  + void printAddress()
  + string getStreet()
  + void setStreet()
  + string getCity()
  + void setCity()
  + string getState()
  + void setState()
  + string getZip()
  + void setZip()
```

## Date Class
```
  # dateString : string
  # day : int
  # month : int
  # year : int

  + Date()
  + void init(dateString)
  + void printDate()
  + int getDay()
  + void setDay()
  + int getMonth()
  + void setMonth()
  + int getYear()
  + void setYear()
```

## Main.cpp
```
import libraries (iostream fstream string sstream)


```

### sort
```
implement a sort algo.
professor probably wants bubble sort. would it be blackbelt to learn insertion?
figure out how to alphabetize the creditHours with same int.
should this be two different functions for sorting alphabet vs by int.

while(keepGoing)
  something
  something
  something
```

### studentSwap(Student a, Student b)
```
create a temporary student variable 'temp'
set temp to student a
set student a to student b
set student b to temp
```

## Student.h
```

```

## Address.h
```
ifndef ADDRESS_H
define ADDRESS_H

class Address{
  protected:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

  public:
    Address();
    void init(std::string street, std::string city, std::string state, std::string zip);
    void printAddress();
    std::string getStreet();
    void setStreet(std::string street);
    std::string getCity();
    void setCity(std::string city);
    std::string getState();
    void setState(std::string state);
    std::string getZip();
    void setZip(std::string zip);
};
```

## Date.h
```
ifndef DATE_H
define DATE_H

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
```

do i need setters? honestly probably not. probably better to keep them though. Even if they're unneccesary, they could be used for a blackbelt at the end.