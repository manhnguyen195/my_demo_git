#include <iostream>
#include <stdio.h>  
#include <time.h> 
#include <string>
using namespace std;
int comparetime(time_t time1,time_t time2){
    return difftime(time1,time2) > 0.0 ? 1 : -1; 
} 
time_t string2time(string t)
{
    string startTime = t;// "2016/05/18 13:10:00";

    time_t tStart;
    int yy, month, dd, hh, mm, ss;
    struct tm whenStart;
    const char *zStart = startTime.c_str();

    sscanf(zStart, "%d/%d/%d %d:%d:%d", &yy, &month, &dd, &hh, &mm, &ss);
    whenStart.tm_year = yy - 1900;
    whenStart.tm_mon = month - 1;
    whenStart.tm_mday = dd;
    whenStart.tm_hour = hh;
    whenStart.tm_min = mm;
    whenStart.tm_sec = ss;
    whenStart.tm_isdst = -1;

    tStart = mktime(&whenStart);

    return tStart;
}
int main(){
    time_t t = string2time("2016/05/18 13:10:00");
    time_t t2 = string2time("2020/05/18 10:10:00");
    if(comparetime(t,t2) == 1)
        cout << "time 1 > time 2";
    else
    {
        cout << "time 1 < time 2";
    }
    
    return 0;
}