#include <iostream>
#include <thread>
#include <mutex>

#include <time.h>
#include <unistd.h>
#include <vector>
#include <algorithm>


#define CAPACITY_OF_DISCO 100

int numPeopleWaiting = 0;
int numFreeSpots = CAPACITY_OF_DISCO;
unsigned long secondsAfterStart = 0;
std::vector<std::thread>vThreads;
const int numSecurityGuards = 2;
std::mutex mFaceCheckLock;
std::mutex exitLock;
bool programMustEnd;

void faceCheck()
{
  //if there are no more free spots sleep
  while(numFreeSpots < 1)
  {
    usleep(100);
  }
  // take resource for amount of time and then release it
  mFaceCheckLock.lock();
  numPeopleWaiting -= 1;
  numFreeSpots -= 1;
  usleep(30000);
  mFaceCheckLock.unlock();

}

void exitTheClub()
{

  exitLock.lock();
  numFreeSpots += 1;
  exitLock.unlock();

}

void peopleIn()
{
  // every 1 minute 1 to 5 people come in the disco
  while( (float)(clock() - secondsAfterStart) / CLOCKS_PER_SEC < 0.54 )
  {
    usleep(1000);
  }

  while(programMustEnd == false)
  {
    usleep(60000);
    numPeopleWaiting += ((rand()%5) + 1);
  }
}

void peopleOut()
{
  // every 1 minute 2 to 10 people exit the disco
  while(!programMustEnd)
  {
    usleep(60000);
    numFreeSpots += ((rand()%9) + 2);
  }
}


int main()
{
  numPeopleWaiting = 50;
  secondsAfterStart = clock();
  std::thread incoming = std::thread(peopleIn);
  std::thread exiting = std::thread(peopleOut);

  while(programMustEnd == false)
  {
    while(numPeopleWaiting > 0)
    {
      vThreads.push_back(std::thread(faceCheck));
    }

    if( numPeopleWaiting == 0 && numFreeSpots == CAPACITY_OF_DISCO)
    {
      programMustEnd = true;
    }
  }

  std::for_each(vThreads.begin(), vThreads.end(),[](std::thread &t){ t.join();});
  incoming.join();
  exiting.join();

  std::cout << ((double)(clock() - secondsAfterStart) / CLOCKS_PER_SEC) << std::endl;

  return 0;
}
