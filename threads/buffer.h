class buffer{
public:
	int getSize(); //return the total size of buffer
	int getCount(); //return the number of items in buffer
	

private:
	int SIZE = 100;
	int buf[SIZE];
	int nextRead = -1;
	int nextWrite = 0;

	
