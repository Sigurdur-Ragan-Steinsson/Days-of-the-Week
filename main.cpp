#include <iostream>

using namespace std;

int main() {
  int year, month, day, weekday;

  cout << "Please enter the year" << endl;
  cin >> year;

  cout << "Please enter the month" << endl;
  cin >> month;

  cout << "Please enter the day" << endl;
  cin >> day;

  if ((year >= 1582) || (month > 13) || (day > 31) || (month < 1) || (day < 1)){
    if (month == 2 && day > 28){
      return 0;
    }
    else{
      month -= 2;

      if (month <= 0){
        month += 12;
        year--;
      }
      month = (month * 83) / 32;
      month += day;
      month += year;
      month += year / 4;
      month -= year / 100;
      month += year / 400;
      weekday = month % 7;
      cout << weekday << endl;
   
    }
  }
  else{
    return 0;
  }
}

// 1. decrease month number by 2
// 2. if month number became less than zero, increment it by 12 and decrement year by 1
// 3. take month number, multiply it by 83 and divide by 32
// 4. add day number to month
// 5. add year number to month
// 6. add year/4 to month
// 7. subtract year/100 from month
// 8. add year/400 to month
// 9. find a remainder of dividing month by 7
// 10. Congrats! A week day number is ready for you! 0 - Sunday, 1 - Monday, ... and so on.