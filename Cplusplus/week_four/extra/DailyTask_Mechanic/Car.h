class Car
{
  private:
    bool needsARepair;
    bool isEngineBroken;
    friend void repairEngine(Car &aCar);
  public:
    float priceOfCar;
};
