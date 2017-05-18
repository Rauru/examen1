#include "Map.h"

Map::Map()
{

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
    int rehash = 0;
    while(array[hash(key,rehash)]->first != ""
        && array[hash(key,rehash)]->first != "deleted")
    {
        rehash++;
    }
    array[hash(key,rehash)] = new pair<string, int>(key,value);
    size++;


}

int Map::get(string key)
{
    int rehash = 0;
    pair<string, int> current_pair;
    do
    {
        current_pair = *(array[hash(key,rehash)]);
        rehash++;
        if(current_pair.first == key)
        return current_pair.second;

    }while(current_pair.first != "");

    return -1;
}


