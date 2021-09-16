class ParkingSystem {
    
    public:
    vector<int>carsize;
    
    ParkingSystem(int big, int medium, int small) {
        carsize ={big,medium,small};
    }
    
    bool addCar(int carType) {
        return carsize[carType-1]-- > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
