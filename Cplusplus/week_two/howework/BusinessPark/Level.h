#include <string>

class Level
{
  private:
    int _level;
    std::string _purpose;
  public:
    void level(int newLevel){ _level = newLevel; }
    int getLevel(){ return _level; }

    void purpose( std::string newPurpose ){ _purpose = newPurpose; }
    std::string getPurpose(){ return _purpose; }

    Level(int newLevel, std::string newPurpose);
    Level();
    ~Level();
};
