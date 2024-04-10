#include <iostream>
#include <vector>
using namespace std;

const int N = 101000;
int nums[N] = { 0 };
bool IsNotTotalMinus(int cnt, int nums[]) {
    for (int i = 1; i <= cnt; i++) {
        if (nums[i] > 0)
            return true;
    }
    return false;
}

int MaxSumOfSub4(int cnt,int nums[]) {
    if (!IsNotTotalMinus(cnt, nums))
        return 0;
    int res = INT_MIN;
    vector<int> dp(N, 0);
    dp[0] = 0;
    for (int i = 1; i <= cnt; ++i) {
        dp[i] = max(dp[i - 1] + nums[i], nums[i]);
        res = max(dp[i], res);
    }
    return res;
}

int main() {
    int cnt = 0;
    cout << "数的个数：";
    cin >> cnt;
    for (int i = 1; i <= cnt; i++) {
        cout << "数" << i << "：";
        cin >> nums[i];   // 数组下标从1开始
    }
    cout << "最大子段和为：" << MaxSumOfSub4(cnt,nums) << endl;
    return 0;
}