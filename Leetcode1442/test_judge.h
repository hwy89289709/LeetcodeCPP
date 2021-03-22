#include "test_header.h"


template<typename ANS_T>
bool judge(ANS_T &your_ans, ANS_T &right_ans)
{
  return your_ans == right_ans;
}

bool judge(vector<int> &your_ans, vector<int> &right_ans)
{
  if (your_ans.size() != right_ans.size()) return false;
  for (int i = 0; i < your_ans.size(); ++i)
  {
    if (your_ans[i] != right_ans[i]) return false;
  }  
  return true;
}

template<>
bool judge(vector<vector<int>> &your_ans, vector<vector<int>> &right_ans)
{
  if (your_ans.size() != right_ans.size()) return false;
  for (int i = 0; i < your_ans.size(); ++i)
  {
    if (your_ans[i].size() != right_ans[i].size()) return false;
    for (int j = 0; j < your_ans.size(); ++j)
    {
      if (your_ans[i][j] != right_ans[i][j]) return false;
    }    
  }  
  return true;
}