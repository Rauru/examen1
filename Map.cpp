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
    int index = hash(key);
	if (index >=0 && index < array.size())
	{
		if (array[index]!=0)
		{
			array[index] *= value;
		}else{
			array[index] = value;
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


