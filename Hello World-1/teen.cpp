#include <iostream>
#include <cstring>
using namespace std;
const class People* nobody=0;
enum Sex {male, female};
class People
{
const char *name;
const Sex sex;
People* in_marriage_to;
bool married() const { return in_marriage_to!=nobody; }
static void m_error (const char* e) 
{
cout << "*** marriage error: " << e << endl;
}
const char* wife_or_husband() const
{
return sex==male ? "wife" : "husband";
}
People* partner() const
{
if (married())
return in_marriage_to;
else return const_cast<People*>(nobody);
}
public:
// enter the scene
People(const char* n, Sex s)
:name(new char[strlen(n)+1]),
sex(s), in_marriage_to(const_cast<People*>(nobody))
{
strcpy(const_cast<char*>(name), n);
cout << "Hi, this is " << name << endl;
}
// leave the scene
~People()
{
cout << "Bye, bye says "<< name << endl;
delete[] const_cast<char*>(name);
}
// 11 Objektorientierte Programmierung in C++ 
void hello() const
{
cout << "Hello, I am " << name;
if (married())
cout << " and this is my "
<< wife_or_husband() << ' '
<< partner()->name;
cout << endl;
}
void marries (People& to_whome)
{
if (sex==to_whome.sex)
{
m_error ("bad sex"); return;
}
if (married() || to_whome.married())
{
m_error ("bigamy"); return;
}
in_marriage_to = &to_whome;
to_whome.in_marriage_to=this;
}
};
People Fred ("Fred", male);
People Wilma ("Wilma", female);
People Barney ("Barney", male);
People Betty ("Betty", female);
int main()
{
Fred .marries (Wilma);
Wilma .marries (Barney);
Barney.marries(Fred);
Betty .marries(Barney);
Fred .hello();
Barney.hello();
Wilma .hello();
Betty .hello();
return 0; // not necessary (VC++ needs it !)
}