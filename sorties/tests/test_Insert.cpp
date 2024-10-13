#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "InsertionsSort.h"


TEST_CASE("InsertionsSort: Single Element Array", "[InsertSort]") {
    int arr[] = { 5 };
    InsertSort(arr, 1);
    REQUIRE(arr[0] == 5);
}


TEST_CASE("InsertionsSort: Sorted Array", "[InsertSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    InsertSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}


TEST_CASE("InsertionsSort: Reversed Array", "[InsertSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    InsertSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}


TEST_CASE("InsertionsSort: All Same Elements", "[InsertSort]") {
    int arr[] = { 7, 7, 7, 7 };
    InsertSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}


TEST_CASE("InsertionsSort: Array with Negative Numbers", "[InsertSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    InsertSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}


TEST_CASE("InsertionsSort: Double Array", "[InsertSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    InsertSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}