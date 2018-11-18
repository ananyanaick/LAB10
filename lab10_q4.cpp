#include<iostream> //include library
using namespace std;

class Zoo_Animal
{
private:
    char *name;
    int cageNo;
    int wtDate;
    int wt;
    Zoo_Animal *mother;
public:
    void Create (char*, int, int, int);
    void Destroy (); // function to destroy
    void MotherOf ();
    void changeWt (int pounds);
    void changeWtDate (int today);
    char* rName ();
    int rWt ();
    inline int rWtDate () {return wtDate;};
    int LastWeighed (int today);
};
void Zoo_Animal::Create (char* a, int b, int c, int d)
{
    name=a;
    cageNo=b;
    wtDate=c;
    wt=d;
}

void Zoo_Animal::MotherOf ()
{
    mother = this;
}


int main()
{
    Zoo_Animal dumbo;
    dumbo.Create ("DUMBO", 4, 157, 187);
    dumbo.isMotherOf ();
    cout << "last weighed on:” << dumbo.rWtDate() << endl;
    return 0;
}


