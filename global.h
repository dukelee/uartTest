
extern int uart0_filestream;
void init(char *);
void serialFlush(int);
void serialClose(int);
void serialPutchar(int, unsigned char);
void serialPuts(int, char *);
int serialDataAvail(int);
int serialGetchar(int);
