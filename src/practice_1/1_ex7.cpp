#include <iostream>

using namespace std;

/*
    Image we have an analogic watch. Given the exact time (hours and minutes), write an algorithm that calculates the angle between both hands. I.e: at three o'clock the angle will be of 90°. At a quarter past three, the angle will be 7.5°.
*/

int main() {
    int h, min, degH;
    float degMin, diff, totDeg;

    cout << "Please insert hours: " << endl;
    cin >> h;

    cout << "Please insert minutes: " << endl;
    cin >> min;
    //initializing variables of hours and minutes

    if(h > 12 || h < 0 ){
        cout << "Sorry that is not a real time in an analog watch " << endl;
        return -1;
    }
    if (min < 0 || min > 59){
        cout << "Sorry that is not a real time in an analog watch " << endl;
        return -1;
    }
    //making sure we're inserting real units in for the watch

    //every minute represents 6° for the minute hand and 0.5° for the hour hand, therefore the relation is 1° for hour hand and 12° for minute hand. Or accordingly, 30° for every hour for the hour hand and 360° for every hour for the minute hand

    degH = h * 30;

    degMin = min * 6;

    totDeg = degH + (degMin / 12);
    //appyling ratio of minutes - hours to obtain additional degrees for the hour

    if(totDeg < degMin){
        diff = degMin - totDeg;
    //if the minutes degrees are greater than totDeg, we'll substract to degMin totDeg and then compare if the result is greater that 180°, thus substracting that magnitude to obtain the smaller angle

        if (diff >= 180) {
            diff = 360 - diff;
        }
    } else {
        diff = totDeg - degMin;
        //else we'll subtract degMin from totDeg, obtaining the actual difference we're looking for
    }

    cout << "The angle difference between " << h << " and " << min << " is: " << diff << "°"<< endl;
    //outputting result

    return 0;
}