N meetings in one room
https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<vector<int>> schedule;
        for(int i=0;i<n;i++){
            schedule.push_back({start[i], end[i]});
        }
        sort(schedule.begin(), schedule.end(), [&](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        
        int ans = 1;
        int busyUntil = schedule[0][1];
        for(int i=0;i<n;i++){
            if(schedule[i][0]>busyUntil){
                ans++;
                busyUntil = schedule[i][1];
            }
        }
        return ans;
    }
};
