#include "test_header.h"
#include "test_output.h"
#include "test_judge.h"


class Solution {
public:
  int countTriplets(vector<int>& arr) {
    int n_num = arr.size();
    int xor_sums[n_num+1];
    memset(xor_sums, 0, sizeof(xor_sums));
    int res = 0;
    for (int i = 0; i < n_num; ++i) {
      xor_sums[i+1] = xor_sums[i] ^ arr[i];
    }

    for (int i = 1; i < n_num; ++i) {
      for (int j = i+1; j <= n_num; ++j) {
        const auto &f = xor_sums[j];
        const auto &s = xor_sums[i-1];
        if ( !(f ^ s)) {
          res += (j-i);
        }
      }
    }
    return res;
  }
};

template<typename INPUT1_T, typename ANS_T>
void Case1()
{
  INPUT1_T input1;
  ANS_T right_ans, your_ans;
  input1 = {
    2,3,1,6,7
  };
  right_ans = 4;
  your_ans = Solution().countTriplets(input1);
  // print2D(your_ans);
  if (!judge< ANS_T >(your_ans, right_ans)) {
    cout << __func__ << " err your_ans: " << your_ans << " right_ans: " << right_ans << endl;
    exit(1);
  }
  cout << __func__ << " AC, your ans:" << your_ans << endl;
}

template<typename INPUT1_T, typename ANS_T>
void Case2()
{
  INPUT1_T input1;
  ANS_T right_ans, your_ans;
  input1 = {
    1,1,1,1,1
  };
  right_ans = 10;
  your_ans = Solution().countTriplets(input1);
  // print2D(your_ans);
  if (!judge< ANS_T >(your_ans, right_ans)) {
    cout << __func__ << " err your_ans: " << your_ans << " right_ans: " << right_ans << endl;
    exit(1);
  }
  cout << __func__ << " AC, your ans:" << your_ans << endl;
}

template<typename INPUT1_T, typename ANS_T>
void Case3()
{
  INPUT1_T input1;
  ANS_T right_ans, your_ans;
  input1 = {
    2,3
  };
  right_ans = 0;
  your_ans = Solution().countTriplets(input1);
  // print2D(your_ans);
  if (!judge< ANS_T >(your_ans, right_ans)) {
    cout << __func__ << " err your_ans: " << your_ans << " right_ans: " << right_ans << endl;
    exit(1);
  }
  cout << __func__ << " AC, your ans:" << your_ans << endl;
}

template<typename INPUT1_T, typename ANS_T>
void Case4()
{
  INPUT1_T input1;
  ANS_T right_ans, your_ans;
  input1 = {
    1,3,5,7,9
  };
  right_ans = 3;
  your_ans = Solution().countTriplets(input1);
  // print2D(your_ans);
  if (!judge< ANS_T >(your_ans, right_ans)) {
    cout << __func__ << " err your_ans: " << your_ans << " right_ans: " << right_ans << endl;
    exit(1);
  }
  cout << __func__ << " AC, your ans:" << your_ans << endl;
}

template<typename INPUT1_T, typename ANS_T>
void Case5()
{
  INPUT1_T input1;
  ANS_T right_ans, your_ans;
  input1 = {
    7,11,12,9,5,2,7,17,22
  };
  right_ans = 8;
  your_ans = Solution().countTriplets(input1);
  // print2D(your_ans);
  if (!judge< ANS_T >(your_ans, right_ans)) {
    cout << __func__ << " err your_ans: " << your_ans << " right_ans: " << right_ans << endl;
    exit(1);
  }
  cout << __func__ << " AC, your ans:" << your_ans << endl;
}

// 由于比较懒,只想改一个地方
#define INPUT1_TYPE vector<int>
#define ANS_TYPE int

void case_test()
{
  Case1<INPUT1_TYPE, ANS_TYPE>();
  Case2<INPUT1_TYPE, ANS_TYPE>();
  Case3<INPUT1_TYPE, ANS_TYPE>();
  Case4<INPUT1_TYPE, ANS_TYPE>();
  Case5<INPUT1_TYPE, ANS_TYPE>();
}

int main()
{
  case_test();
}