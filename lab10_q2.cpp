#include <iostream>

using namespace std;//include the library

enum scale {ounces, kilograms};

class Zoo_Animal
{
private:
    char *name;
    int wtDate;
    int cageNo;
    int wt;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // function to destroy
    void changeWt (int pounds);
    void changeWtDate (int today);
    char* rName ();
    int rWt ();
    void rWt (scale which);
    inline int rWtDate ();
    int LastWeighed (int today);
};
//Member function
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
    dumbo.Create ("DUMBO", 4, 157, 180);
    
    cout << "last weighed the animal :” << dumbo.rWtDate() << endl;
    return 0;
}
