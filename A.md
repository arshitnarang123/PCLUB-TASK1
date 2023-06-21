A. Watering IITK Trees:-
Time limit:-1sec
Memory limit:-256MB
There is a special tree in IITK which requires a certain amount of water daily to survive. As summers are at peak in Kanpur at this time, so this amount increases regularly by a fixed value.This tree dries up in Kanpur heat if it is not given required amount of water on regular basis.Your are given n water tankers(in starting itself), each containing a certain amount of water 'a'.You can use any water tanker on any day.Your task is to find out maximum days over which tree can survive with those water tankers.
Input:-
First line of input consists of no. of test cases t(t<=1000).
Second line consists of n(no. of water tankers avaliable),a(amount of water tree requires to survive on first day),d(amount by which water requirement increases daily).(1<=a,d<=2*10^5)
Third line consists of n values each indicating quantity of water every tanker can store.  
Output:-
Output in single line the maximum no. of days for which you can water this tree without drying it up.
Sum of n over all test cases does not exceed 2*10^5.
Sample case:-
INPUT
4
5 2 2
1 3 4 6 6
7 1 3
2 2 6 10 12 14 19
4 1 1
5 5 5 5
7 2 2
1 1 1 1 1 1 1
OUTPUT
3
6
4
0