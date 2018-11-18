#include <iostream> //include library

using namespace std;

enum scale {ounces, kilograms};

class Zoo_Animal
{
private:
    char *name;
    int cageNo;
    int wtDate;
    int wt;
public:
    void Create (char*, int, int, int);
    void Destroy (); // function to destroy
    void changeWt (int pounds);
    inline void changeWtDate (int today)
    {
        wtDate = today;
    }
    char* rName ();
    int rWt ();
    void rWt (scale which);
    int rWtDate ();
    int LastWeighed (int today);
};

void Zoo_Animal::Create (char* a, int b, int c, int d)
{
    name=a;
    cageNo=b;
    wtDate=c;
    wt=d;
}
inline int Zoo_Animal::rWtDate ()
{
    return wtDate;
}


int main()
{
    Zoo_Animal dumbo;
    dumbo.Create ("Bozo", 4, 157, 187);
    dumbo.changeWtDate(256);
    
    cout << "last weighed date:” << dumbo.rWtDate() << endl;
    return 0;
}
