#include <iostream>
#include <list>
#include <algorithm>

bool myFunc(int a, int b)
{
    return a > b;
}

using namespace std;
int main()
{
//    Function list
//    push_back()
//    push_front()
//    pop_front()
//    pop_back()
//    reverse()
//    sort()  #include <algorithm>
//    find()  #include <algorithm>
//    insert()
//    unique()
//    erase()
//    remove()
//    empty()
//    clear()

//We can't access of a list elements using [] operator
//We have to use an iterator to access over all elements


    list <int> myList;
    list <int>::iterator it;

    //Using of push_back
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(20);
    myList.push_back(20);
    cout << "Last element    : " << myList.back() << endl << "\n" ;

    //Using of push_front
    myList.push_front(3);
    myList.push_front(2);
    myList.push_front(1);
    cout << "First element   : " << myList.front() << endl << "\n" ;

    cout << "Size of list    : ";
    cout << myList.size() << endl << "\n" ;

    cout << "Element list    : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout<<*it<<"\t";
    }
    puts("\n");

    //Using of pop_front() and push front
    myList.pop_front();
    myList.pop_back();

    cout << "Update list     : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout<<*it<<"\t";
    }
    puts("\n");

    //Using of erase
    //Erase one element using iterator
    it = myList.begin();
    myList.erase(it);
    cout << "After erase     : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("\n");

    //Using of remove
    //Remove one element by passing the element
    myList.remove(10);
    cout << "After remove    : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("\n");

    //Using of reverse
    myList.reverse();

    cout << "After reverse   : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("\n");

    //Ascending sort
    myList.sort();

    cout << "Ascending sort  : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("\n");

    //Descending sort
    myList.sort(myFunc);

    cout << "Descending sort : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("\n");

    //Using of find
    //For inserting a element we need to find the insertion position
    it = find(myList.begin(),myList.end(),2);

    //Using of insert
    //Insert a value at a certain position
    myList.insert(it, 15);
    cout << "After insert    : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("\n");

    //Using of unique
    //Removes duplicate elements
    /*
    list/vector এর সকল element unique করার জন্য আগে sort করে নিতে হবে।
          কারণ unique ফাংশন পাশাপাশি দুইটি ভ্যালু সেম হলে একটি সেভ করে।
          এইজন্য আগে সর্ট করে নিলে সবগুলো element unique হবে।
    */
    myList.unique();
    cout << "After unique    : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout<<*it<<"\t";
    }
    puts("\n");

    //Using of empty
    //Checks the list is empty or not
    if (myList.empty())
    {
        cout << "\t\tList is not Empty" << endl <<"\n";
    }
    else
        cout << "\t\tList is Filled" << endl <<"\n";


    //Using of clear
    //Clear the whole list
    myList.clear();
    cout << "After clear     : ";
    for(it = myList.begin(); it != myList.end(); it++)
    {
        cout<<*it<<"\t";
    }
    puts("\n");

    //Copy an array into a list
    int arr[4] = {2, 5, 7, 9};
    list <int> copyArr(arr, arr+4);
    cout << "Copy an array   : ";
    for(it = copyArr.begin(); it != copyArr.end(); it++)
    {
        cout<<*it<<"\t";
    }
    puts("\n");
}
