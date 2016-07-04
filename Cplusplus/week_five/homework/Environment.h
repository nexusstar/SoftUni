#ifndef __ENVIRONMENT_H_
#define __ENVIRONMENT_H_

#include <string>

class Environment
{
private:
    unsigned int _id;
    std::string _name;
    float _gravity; // In m/s²
public:
    Environment()
    {
    }

    Environment(unsigned int id, std::string name, float gravity)
    {
        setId(id);
        setName(name);
        setGravity(gravity);
    }

    // Destructor
    ~Environment()
    {
    }

    // Getters
    unsigned int getId()
    {
        return this->_id;
    }

    std::string getName()
    {
        return this->_name;
    }

    float getGravity()
    {
        return this->_gravity;
    }

    // Setters
    void setId(unsigned int &newId)
    {
        this->_id = newId;
    }

    void setName(std::string &newName)
    {
        this->_name = newName;
    }

    void setGravity(float &newGravity)
    {
        this->_gravity = newGravity;
    }
};
#endif
