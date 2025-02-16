#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
float nthmax=0;
float ratiomax=0;

  for(float pb=100;pb <=200;pb++)
  {

    for(float pc =0.001; pc <=pb ; pc++)
    {
        float a = 100 - pb - pc;  // el nth
        float ratio = a / (pb * pc);// el ratio

        if(ratio > ratiomax)
        {
            ratiomax = ratio;
            nthmax = a;
        }

    }
  }
}