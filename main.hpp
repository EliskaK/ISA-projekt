/*
** VUT FIT 2017 - ISA
** Klient POP3 s podporou TLS
** Eliska Kadlecova
** login: xkadle34
*/

int main(int argc, char *argv[]);
char *parseArg(char ** begin, char ** end, const std::string &opt, bool value);
void error (std::string zprava, int error_code);
void help();
