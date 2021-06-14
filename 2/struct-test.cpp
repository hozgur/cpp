#include <iostream>
#include <stdio.h>
using namespace std;

struct test {
    int (*get_id) (const char *);
    const char* (*get_name) (const char *);

};

int do_getid(const char* name)
{
    cout << "Log: Get Id Name = " << name << "\n";
    return 23;
}

const char* do_getname(const char* name)
{
    cout << "Log: Get Name Name = " << name << "\n";
    return "Hakan ÖZGÜR";
}

int main()
{
    test t = {
        .get_id = do_getid,
        .get_name = do_getname
    };

    cout << "ID = " << t.get_id("Hello") << " Name = " << t.get_name("Hello");
   return 0;
}
