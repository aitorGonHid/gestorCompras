//constants
#define MAX_CHAR 25
//types
typedef enum{aitor, paula}comprador;
typedef char string[MAX_CHAR+1];
//struct
typdef struct{
	comprador user;
	float cost;
	string shop;
	char date;
}compra;