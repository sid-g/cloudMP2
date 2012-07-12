#include <string>

#include "DataHash.h"

using namespace std;

int DataHash::size() 
{
	return hashTable.size();
	// return -1;
}

int insert(int key, Data value)
{
	pair<map<int,Data>::iterator,bool> ret;
	ret = hashTable.insert(pair<int, Data>(key, value));
	if(ret.second == false) // there is already a value for this key.
	{
		return -1;
	}
	else
	{
		return 0;
	}
	// return -1;
}

int remove(int key)
{
	// if(hashTable.erase(key) == 0) // number of elements with this key erased = 0
	// {
		// return -1;
	// }
	// else
	// {
		// return 0;
	// }
	return -1;
}

int removeSmallest()
{
	return -1;
}

int removeLargest()
{
	return -1;
}

bool exist(int key)
{
	//map<int,string>::iterator it;
	return false;
}

int insertAndRemoveLargest()
{
	return -1;
}

int insertAndRemoveSmallest()
{
	return -1;
}