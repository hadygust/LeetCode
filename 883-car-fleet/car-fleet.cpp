class Solution {
public:

    struct Car{
        int pos;
        int speed;
        double time;
    };

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], speed[i], ((double)(target-position[i])/speed[i])});
        }

        sort(cars.begin(), cars.end(), [](Car a, Car b){
            return a.pos > b.pos;
        });

        int res = 0; double curr = 0;
        for(auto car: cars){
            // cout << car.pos << " " << car.speed << endl;
                // cout << car.time << endl;
            if(car.time > curr) {
                curr = car.time;
                res++;
            }
        }

        return res;
    }
};