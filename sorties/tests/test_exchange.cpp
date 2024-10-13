#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "ExchangeSort.h"  

TEST_CASE("ExchangeSort: Single Element Array", "[ExchangeSort]") {
    int arr[] = { 5 };
    ExchangeSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("ExchangeSort: Already Sorted Array", "[ExchangeSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    ExchangeSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Reversed Array", "[ExchangeSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    ExchangeSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Array with Duplicates", "[ExchangeSort]") {
    int arr[] = { 7, 7, 7, 7 };
    ExchangeSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Array with Negative Numbers", "[ExchangeSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    ExchangeSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Double Array", "[ExchangeSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    ExchangeSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}