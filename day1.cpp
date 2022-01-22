#include <iostream>
#include <bits/stdc++.h>
// instead of using math.h or string.h. #include<bits/stdc++.h> There are alot of libraries inside c++, like math.h
// string.h etc, having to include all of them one by one can be time consuming,
// Hence in Competitive Programming the first rule is to write #include<bits/stdc++.h>
// But never use it in Interview becos when you include alot of header files it takes alot of time to import so many files,
// hence in interview just include those header files that are required.
using namespace std;
//
namespace shambhavi
{
    int val = 9;
};
// to create a datatype where we can store a string, and int a double a char using struct

struct Rectangle
{
    int width;  // member variable
    int height; // member variable

    // C++ constructors
    Rectangle()
    {
        width = 1;
        height = 1;
    }

    Rectangle(int width_)
    {
        width = width_;
        height = width_;
    }

    Rectangle(int width_, int height_)
    {
        width = width_;
        height = height_;
    }
    // ...
};

// struct is a user defined data type;
struct node
{
    string str;
    int num;
    double dub;
    char c;

    // constructor
    node(string str_, int num_, double dub_, char c_)
    {
        str = str_;
        num = num_;
        dub = dub_;
        c = c_;
    }
};

int main()
{
    int val = 10;

    cout << shambhavi::val << endl; // prints 9
    // if we dont write using namespace std we will have to write cout as
    std::cout << val << endl;

    // wrong way of defining
    // node shambhavi;
    // shambhavi.str = "sham";
    // shambhavi.num = 9;
    // shambhavi.dub = 9.83;

    node shambhaviii = new node("shambhavii", 79, 91.0, "");

    // Arrays

    // containers
    array<int, 100> arr; // an array of size 100, if declared inside int main it can have anything incase not initialised
    // at the same time if its not been initialised and it's outside int main it will be initialised with 0 by default
    // hence if defined globally it will have 0s while if defined inside int main() it can contain all possible garbage values

    array<int, 5> arr2 = {1, 2, 3}; // the other 2 values would be 0,0
    // hence if we declare and still dont declare all values, those not initialized take value of 0;

    array<int, 6> arr3 = {1}; // does NOT mean that it's been initialised with 1s , rather only value at index 0 is 1 and resta re 0s

    int arr[100] = {0}; // means youve initialised the 0th index however the rest since you have not initialised hence the rest becomes 0

    array<int, 5> arr_rand;
    arr_rand.fill(5); // fills value at all indexes til 0 to 4 with 5.

    /*arr_rand.at(index);*/

    // another way of printing the whole array
    for (int i; i < 5; i++)
    {
        cout << arr_rand.at(i) << " ";
    }

    // ITERATORS
    // begin(),end(),rbegin(),rend();
    // when declaring an array, the arressing is allotted in a contegious manner
    // end() points to the address right after the last element
    // rend(): right before the start of array, rend() is going to point there
    // begin() points at the first element
    // rbegin() points at the last element

    array<int, 5> arr4 = {1, 3, 4, 5, 6};
    for (auto it = arr4.begin(); it != arr4.end(); it++)
    {
        cout << *it << " ";
    }

    for (auto it = arr4.rbegin(); it != arr4.rend(); it++) // we wont write it--, we right ++ since its a reverse iterator only, it'll move backwards
    {
        cout << *it << " ";
    }

    for (auto it = arr4.end() - 1; it >= arr4.begin(); it--)
    {
        cout << *it << " ";
    }

    for (auto it : arr4)
    {
        cout << it << " ";
    }

    string s = "bcbdjeodfrzxd";
    for (auto c : s)
    {
        cout << c << " "; // going to characted not the address pointing
    }

    // printing the first element
    arr4.front();

    // printing the array back
    arr4.back(); // arr5.at(arr5.size()-1)

    /// VECTOR
    // with arrays we need to predefine their size and post predefining the size we cannot add elements mor ethan that size
    //  the max size of array that we can declare in c++,
    // within int main() arr max size can be 10^6 for int, double , char etc
    // globally arr max size can be 10^7
    // if arr is boolean , within int main max size can be 10^7
    // globally declared boolean arr max size can be 10^8

    // with vectors we dont need to tell them the size
    vector<int> arr6;
    cout << arr6.size() << " "; // prints 0
    arr6.push_back(20);
    // it can be increased dynamically
    arr6.pop_back();

    // segmentation fault means you cannot allocate memeory more than 10^6 in int main()

    vector<int> vec(4, 10); //{10,10,10,10}
    vec.clear();            /// erases all the elements of the vactor and vector will turn empty

    // inserting all elements of vec to vec2
    vector<int> vec2(vec.begin(), vec.end());
    // another way of copying entire vec to vec2
    vector<int> vec2(vec);

    vector<int> shamb;
    shamb.push_back(1); // shamb.emplace_back(1)///emplace_back takes lesser time than push_back
    shamb.push_back(2);
    shamb.push_back(3);
    shamb.push_back(4);
    shamb.push_back(5);

    // want to copy only first to elements to another vector

    vector<int> sham2(shamb.begin(), shamb.begin() + 2); //{1,2}

    // lower bound, upper bound
    // swap swap(vector1,vector2)

    // defining 2d vector

    vector<int> vec3;
    vec3.push_back(50);
    vec3.push_back(60);
    vector<vector<int>> vec4;
    vec4.push_back(vec);
    vec4.push_back(vec2);
    vec4.push_back(vec3);

    // here it will be a vector itself
    // first it will be vec, then vec2, then vec3
    for (auto vecc : vec4)
    {
        for (auto num : vecc)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    // define 10 x 20

    vector<vector<int>> vec6(10, vector<int>(20, 0));

    int arrayy[4]; /// means an array where each element is an int

    vector<int> arra6[4]; // is an array of vectors
    arra6[0].push_back(2);

    // defining a vector of 10 x 20 x 30

    vector<vector<vector<int>>> veccc(10, vector<vector<int>>(20, vector<int>(30)));
}
