#include "demoSqlite3.h"
#include <sqlite3.h>
#include <cerrno>
#include <iostream>

SQL::SQL( const char * dbname):m_db(nullptr)
{
    int ret = sqlite3_open("chatBase.db", &m_db);
    if (ret != SQLITE_OK)
    {
        perror("sqlite3_open error");
        exit(-1);
    }
}


bool SQL::sqlCreate()
{
    const char *sql = "create table  if not exists usr (id int primary key not null, name text not nul, lage int not null)";
    int ret = sqlite3_exec(m_db, sql, NULL, NULL, &errorVal);
    if (ret != SQLITE_OK)
    {
        std ::cout << "sqlite exec " << errorVal << std ::endl;
        return false;
    }
    return true;
}

bool SQL::sqlInsert(int id,  const char * name, int age)
{
    char sql[128] = {0};
    sprintf(sql, "insert into usr  values(%d, %s, %d)", id, name, age);
    int ret = sqlite3_exec(m_db, sql, NULL, NULL, &errorVal);
    if (ret != SQLITE_OK)
    {
        std ::cout << "sqlite insert " << errorVal << std ::endl;
        return false;
    }
    return true;
}

bool SQL::sqlSelect()
{
    const char *sql = "select * from usr";

    char **result = NULL;
    int row = 0;
    int column = 0;

    int ret = sqlite3_get_table(m_db, sql, &result, &row, &column, &errorVal);
    if (ret != SQLITE_OK)
    {
        std ::cout << "select error " << errorVal << std ::endl;
       return false;
    }
    std ::cout << "row " << row <<  " column" << column << std ::endl;

    int idex = column;
    for (int idx = 0; idx <= row; idx++)
    {
        for (int jdx = 0; jdx < column; jdx++)
        {
            printf("%s\t", result[idx * column + jdx]);
        }
        printf("\n");
    }
    return true;
}

SQL::~SQL()
{
        if(m_db == nullptr)
        {
            sqlite3_close(m_db);
        }

}

int main()
{
    
    SQL SQL("chatBase.db");
    SQL.sqlCreate();
    std ::cout << "sql table  create successful "  <<  std ::endl;
    SQL.sqlInsert(1001, "zhangsan", 19);
    SQL.sqlSelect();
    SQL.~SQL();

    return 0;
}