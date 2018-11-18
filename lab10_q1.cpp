#include<iostream>// include th elibrary
using namespace std;

class Zoo_Animal
{
    char *name;
    int cageNo;
    int wDate;
    int w;
public:
    char* rName ();
    void Destroy (); //function to destroy
    int lastwt (int today);
    void create (char * a,int b,int r,int s);
};

void ZooAnimal::Destroy ()
{
    delete [] name;
}

//member function to return the animal's name
char* Zoo_Animal::rName ()
{
    return name;
}

void Zoo_Animal::create(char *a,int b,int wd ,int wt)
{
    name=a;
    cageNo=b;
    wDate=wd;
    w=wt;
}

//member function to return the number of days
//since the animal was last weighed
int Zoo_Animal::LastWt (int today)
{
    int first, this;
    this = today/100*30 + today - today/100*100;
    First = wDate/100*30 + wDate - wDate/100*100;
    if (this < first)
    { this += 360;
        return (this-first);}
    
    if (today < wDate)
    { today += 360;
        return (today-wDate);}
}

int main()
{
    Zoo_Animal dumbo;
    dumbo.create ("DUMBO", 4, 157, 180);
    
    cout << “animal name: " << dumbo.rName() << endl;
    return 0;
}


