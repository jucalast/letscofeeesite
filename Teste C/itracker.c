#include <stdio.h>
#include <sql.h>
#include <sqlext.h>
#include <string.h>  // Inclua a biblioteca para usar strcat

int main() {
    SQLHENV henv;
    SQLHDBC hdbc;
    SQLHSTMT hstmt;

    // Informações de conexão ao banco de dados Azure SQL
    const char* server = "itracker.database.windows.net";
    const char* database = "itracker";
    const char* username = "itracker";
    const char* password = "Mkio086+";

    // Inicialize o ambiente ODBC
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
    SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);

    // Inicialize a conexão com o banco de dados
    SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);

    // Construa a string de conexão
    char connectionString[256];
    strcpy(connectionString, "DRIVER={ODBC Driver for SQL Server};SERVER=");
    strcat(connectionString, server);
    strcat(connectionString, ";DATABASE=");
    strcat(connectionString, database);
    strcat(connectionString, ";UID=");
    strcat(connectionString, username);
    strcat(connectionString, ";PWD=");
    strcat(connectionString, password);

    SQLDriverConnect(hdbc, NULL, (SQLCHAR*)connectionString, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);

     // Coleta de dados do formulário
    char nome[100], sobrenome[100];
    int idade;

    printf("Informe o nome: ");
    scanf("%s", nome);
    printf("Informe o sobrenome: ");
    scanf("%s", sobrenome);
    printf("Informe a idade: ");
    scanf("%d", &idade);

    // Execute uma consulta de inserção
    char insertSQL[256];
    sprintf(insertSQL, "INSERT INTO SuaTabela (Nome, Sobrenome, Idade) VALUES ('%s', '%s', %d);", nome, sobrenome, idade);
    SQLExecDirect(hstmt, (SQLCHAR*)insertSQL, SQL_NTS);

    // Encerre a conexão e libere os recursos
    SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
    SQLDisconnect(hdbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hdbc);
    SQLFreeHandle(SQL_HANDLE_ENV, henv);

    return 0;
}
