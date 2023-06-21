The most easiest approach to this question would be to first sort the array of water tankers. Create a variable REQ_VAL(whose initial value is a i.e. the amount of water which tree requires on first day) which indicates the minimum amount of water required. Also create a counter variable which counts the number of days for which trees can survive. Then start from the most smallest quantity of water and check if it is greater than REQ_VAL or not. If it is greater than REQ_VAL then, then increase the counter by 1 and REQ_VAL by 'd'(common difference). In this way by traversing the whole sorted array we can find the value of maximum number of days for which tree can survive.

The above approach uses O(nlogn) time complexity.

Polygon link:-https://polygon.codeforces.com/p7pm95z/vector123/watering-iitk-trees

