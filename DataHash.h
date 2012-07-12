#ifndef _DataHash_H
#define _DataHash_H

#include <map>
#include <string>

using namespace std;

struct Data {
	string data;
};

class DataHash
{
private:
	
	map<int, Data> hashTable;

public:
	
	/**
	*	Returns the size of the hash table on this server.
	*/
	int size();
	
	/**
	*	
	*/
	int insert(int key, Data value);
	
	/**
	*
	*/
	int remove(int key);
	
	/**
	*
	*/
	int removeSmallest();
	
	/**
	*
	*/
	int removeLargest();
	
	/**
	*
	*/
	bool exist(int key);
	
	/**
	*
	*/
	int insertAndRemoveLargest();
	
	/**
	*
	*/
	int insertAndRemoveSmallest();
	
};

#endif