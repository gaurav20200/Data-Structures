#include <bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class Arithmetic{
    private:
   T a;
   T b;
    public:
        Arithmetic(T a,T b);
        T add();
        T sub();
        };
        template<class T>
        Arithmetic<T>::Arithmetic(T a,T b)
        {
            this->a=a;
            this->b=b;
        }
        template<class T>
         T Arithmetic<T>::add()
        {  return a+b;

        }
        template<class T>
        T Arithmetic<T>::sub()
        {  T c =a-b;
            return c;
        }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Arithmetic<int> ar(10,5);
    cout<<ar.add()<<endl;
    Arithmetic<float> a(10.00,5.00);
    cout<<a.sub()<<endl;
return 0;
}

