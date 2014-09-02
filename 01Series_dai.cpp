#include <iostream>
using namespace std;
int main()
{
	int out[6] = {0};
	bool end = true;
	while(end)
	{
		int i = 0;
		while(i < 6)
		{
			if(!out[i])
			{
				out[i] = 1;
				break;
			}
			else
			{
				out[i] = 0;
				i++;
			}
		}
		if(i == 6) break;
		for(int i = 5; i >= 0; i--)
			cout << out[i];
		cout << endl;
	}

	return 0;

}
