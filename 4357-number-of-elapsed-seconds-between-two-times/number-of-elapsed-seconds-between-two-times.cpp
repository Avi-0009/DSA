class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sec = stoi(endTime.substr(6, 2)) - stoi(startTime.substr(6, 2));
        int min = stoi(endTime.substr(3, 2)) - stoi(startTime.substr(3, 2));
        int hr = stoi(endTime.substr(0, 2)) - stoi(startTime.substr(0, 2));

        if(sec < 0){
            sec += 60;
            min --;
        }

        if(min < 0){
            min += 60;
            hr--;
        }

        return (hr * 60 * 60) + (min * 60) + sec;
    }
};