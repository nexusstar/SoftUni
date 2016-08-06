#ifndef Date_h
#define Date_h

#include <string>

class Date {
protected:
    // Attributes
    unsigned short int _day;
    unsigned short int _month;
    unsigned short int _year;
public:
    // Constructors
    Date()
    {

    }

    Date(unsigned short int day, unsigned short int month, unsigned short int year)
    {
        setDay(day);
        setMonth(month);
        setYear(year);
    }

    ~Date()
    {}

    // Getters
    unsigned short int getDay() const
    {
        return this->_day;
    }

    unsigned short int getMonth() const
    {
        return this->_month;
    }

    unsigned short int getYear() const
    {
        return this->_year;
    }

    // Setters
    void setDay(unsigned short int &newDay)
    {
        this->_day = newDay;
    }

    void setMonth(unsigned short int &newMonth)
    {
        this->_month = newMonth;
    }

    void setYear(unsigned short int &newYear)
    {
        this->_year = newYear;
    }

    // Method declaration
    std::string getDateToString() const;
};

#endif /* Date_h */
