#include "Map.h"

Map::Map()
{
    for (int i = 0; i < 999999; ++i)
	{
		 //array.push_back(new vector< pair<string,int>* >);
		array.push_back(0);
	}
}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum+=str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{
    /*
    int rehash = 0;
    while(array[hash(key,rehash)]->first != ""
            && array[hash(key,rehash)]->first != "deleted")
    {
        rehash++;
    }
    array[hash(key,rehash)] = new pair<string, int>(key,value);
    size++;
    */
    int rehash = hash(key);
	if (rehash >=0 && rehash < array.size())
	{
		if (array[rehash]!=0)
		{
			array[rehash] *= value;
		}else{
			array[rehash] = value;
		}
	}
}

int Map::get(string key)
{
    /*int rehash = 0;
    pair<string, int> current_pair;
    do
    {
        current_pair = *(array[hash(key,rehash)]);
        rehash++;
        if(current_pair.first == key)
        return current_pair.second;

    }while(current_pair.first != "");

    return -1;*/
    int rehas = hash(key);
	if (rehas >=0 && rehas < array.size())
	{
		return array[rehas];
	}
	return -1;
}


