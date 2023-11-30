#include <stdio.h>
#include <sql.h>
#include <sqlext.h>

SQLHENV henv;
SQLHDBC hdbc;
SQLRETURN retcode;

retcode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
retcode = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);
retcode = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);

SQLCHAR* connStr = (SQLCHAR*)"DSN=NomeDaSuaFonteDeDadosODBC;";
retcode = SQLDriverConnect(hdbc, NULL, connStr, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);
if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
    printf("Conexão com o banco de dados Access estabelecida.\n");
} else {
    printf("Erro ao conectar ao banco de dados Access.\n");
}

char nome[100];
int idade;

printf("Informe o nome: ");
scanf("%s", nome);
printf("Informe a idade: ");
scanf("%d", &idade);

SQLHSTMT hstmt;
SQLCHAR* insertQuery = (SQLCHAR*)"INSERT INTO SuaTabela (Nome, Idade) VALUES (?, ?)";

retcode = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
retcode = SQLPrepare(hstmt, insertQuery, SQL_NTS);
retcode = SQLBindParameter(hstmt, 1, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, 0, 0, nome, 0, NULL);
retcode = SQLBindParameter(hstmt, 2, SQL_PARAM_INPUT, SQL_C_LONG, SQL_INTEGER, 0, 0, &idade, 0, NULL);
retcode = SQLExecute(hstmt);
SQLFreeHandle(SQL_HANDLE_STMT, hstmt);

if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
    printf("Dados inseridos com sucesso.\n");
} else {
    printf("Erro ao inserir dados no banco de dados Access.\n");
}

SQLDisconnect(hdbc);
SQLFreeHandle(SQL_HANDLE_DBC, hdbc);
SQLFreeHandle(SQL_HANDLE_ENV, henv);

