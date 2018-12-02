                                                                                                                                                                                          
 #include<iostream>
 #include<vector>
 #include<math.h>
 using  namespace std;
 
 int main()
 {
     vector<int> a;
     int b = 78293;
    /* 
     for(int i = 2; i <= b/2; i++)
         {
             if(b%i == 0)
             {    a.push_back(i);
              //   cout<<"factors are = "<<i<<"\n";
             }
         }
 
      for(int i = 0; i < a.size(); ++i)
          {
             cout<<"factors are = "<<a[i]<<"\n";
          }
 */
     for(int i = 1; i<= sqrt(b); i++ )
         {
             if(b%i ==0)
                 {
                     a.push_back(i);
                     if(i != sqrt(b))
                     {
                         int n = b/i;
                         a.push_back(n);
                     }
                 }
 
         }
 
      for(int i = 0; i < a.size(); ++i)
           {
              cout<<"factors are = "<<a[i]<<"\n";
           }
 
 }

