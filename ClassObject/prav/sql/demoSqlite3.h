#ifndef _DEMO_SQLITE3_H_
#define _DEMO_SQLITE3_H_
#include <sqlite3.h>


class SQL
{

public:
    SQL( const char * dbname);
    bool sqlCreate();
    bool sqlInsert(int id,  const char  *name, int age);
    bool sqlSelect();
    ~SQL();
    



private:
    sqlite3 *m_db;
    char *errorVal = nullptr; 
};

#endif