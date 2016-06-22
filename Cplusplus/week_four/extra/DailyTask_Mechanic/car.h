class Car
{
  friend class Mechanic;
  friend class Man;
  private:
    float price;
    bool needsRepair;
  public:
    Car(float carPrice): price(carPrice), needsRepair(true){};
    ~Car(){};
};
