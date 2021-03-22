#include "test_header.h"

ostream& operator<<(ostream& os, const vector<int>& ans)
{
  for (int i = 0; i < ans.size(); ++i) {
    os << " " << ans[i];
  }
  os << endl;
  return os;
}

ostream& operator<<(ostream& os, const vector<string>& ans)
{
  for (int i = 0; i < ans.size(); ++i) {
    os << " " << ans[i];
  }
  os << endl;
  return os;
}

ostream& operator<<(ostream& os, const vector<vector<int>>& ans)
{
  for (int i = 0; i < ans.size(); ++i) {
    os << "(" ;
    for (int j = 0; j < ans[i].size(); ++j) {
      os << ans[i][j];
      if (j != ans[i].size()-1) os << ",";
    }
    os << ")";
  }
  os << endl;
  return os;
}