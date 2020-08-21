#include <iostream>
#include <vector>

using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2)
{
    if(v1.empty() && v2.empty())
    {
        vector<int>var1;
        return var1;
    }

    else if(v2.empty() && !v1.empty())
    {
        return v1;
    }

    else if(v1.empty() && !v2.empty())
    {
        return v2;
    }

    else if(v1.size()==v2.size())
    {
        unsigned int i=0;

        vector<int>var2;

        for(i=0; i<v2.size(); i++)
        {
            var2.push_back(v1[i]+v2[i]);
        }

        return var2;
    }

    else if(v1.size()<v2.size())
    {
        int val;

        val=(v2.size()-v1.size())+1;

        vector<int>var2;

        unsigned int i=0;
        unsigned int j=0;

        for(i=0; i<val; i++)
        {
            v1.push_back(0);
        }

        for(j=0; j<v2.size(); j++)
        {
            var2.push_back(v1[j]+v2[j]);
        }

        return var2;
    }

   vector<int>var3;

   int val2;
   val2=v1.size()-v2.size();

   unsigned int i=0;
   unsigned int k=0;

   for(i=0; i<val2; i++)
   {
       v2.push_back(0);
   }

   for(k=0; k<v2.size(); k++)
   {
       var3.push_back(v1[k]+v2[k]);
   }

   return var3;
    

}

int main()
{
    unsigned int i=0;
    
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    
    sumPairWise(v1,v2); // returns [5, 7, 3]

    
    return 0;
}
STUDENT
Fariha Hossain
AUTOGRADER SCORE
5.0 / 5.0
