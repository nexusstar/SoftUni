#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <ctime>

using namespace std;
using std::chrono::system_clock;

int main()
{
  cout << "The id of current thread is " << this_thread::get_id << endl;

  // get current time
  time_t timet = system_clock::to_time_t(system_clock::now());

  //convert it to tm struct
  struct tm * time = localtime(&timet);

  cout << "Current time: " << put_time(time, "%X") << endl;
  cout << "Waiting for the next minute to begin ...\n";
  time -> tm_min++; time -> tm_sec = 0;

  //sleep until next minute is not reached
  this_thread::sleep_until(system_clock::from_time_t(mktime(time)));
  cout << put_time(time, "%X") << " reached" << endl;

  //sleep for 5 sec
  this_thread::sleep_for(chrono::seconds(5));

  //get current time
  timet = system_clock::to_time_t(system_clock::now());

  //convert it to tm struct
  time = localtime(&timet);
  cout << "Current time: " << put_time(time, "%X") << endl;
}
