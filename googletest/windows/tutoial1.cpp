

#include <gmock/gmock.h>
//include the google test dependencies
#include <gtest/gtest.h>
#include <map>


using namespace std;




int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    //testing::InitGoogleTest(&argc, argv);
   //testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}



// cl -I D:\3rdLib\googletest\googletest\include -I D:\3rdLib\googletest\googlemock\include .\tutoial1.cpp