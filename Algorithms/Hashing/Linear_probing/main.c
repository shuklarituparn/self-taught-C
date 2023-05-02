//
// Created by rituparn on 01.05.23.
//

#include <stdio.h>
#define SIZE 10 //Size of the hash table
int hash(int key) //hash function
{
    return key%SIZE;
}
int probe(int H[],int key) //probing the given array
{
    int index=hash(key); //finding the index
    int i=0;
    while(H[(index+i)%SIZE]!=0)
        i++;
    return (index+i)%SIZE; //returning the space free for the key to be stored
}
void Insert(int H[],int key)  //Insert function to insert a key in the table
{
    int index=hash(key);  //first getting the hash value by calling the hash function

    if(H[index]!=0)
        index=probe(H,key);  //now calling the probe function just in case that the space was not available
    H[index]=key; //after finding the index, storing the key on that index
}
int Search(int H[],int key) //Search function
{
    int index=hash(key); //calling the hash function to get the hash value

    int i=0; //the loop variable

    while(H[(index+i)%SIZE]!=key) //looping the table to find the element
        i++; //incrementing the variable

    return (index+i)%SIZE; //returning the location of the element after finding it
}
int main()
{
    int HT[10]={0}; //Initializing the hash table with 0 in the start

    Insert(HT,12); //Inserting an element in the table
    Insert(HT,25);
    Insert(HT,35);
    Insert(HT,26);

    printf("\nKey found at %d\n",Search(HT,35)); //calling the search function
    return 0;
}