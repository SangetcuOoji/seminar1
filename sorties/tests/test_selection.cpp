#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "SelectionSort.h"  

TEST_CASE("SelectionSort: Single Element Array", "[SelectionSort]") {
    int arr[] = { 5 };
    SelectionSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("SelectionSort: Already Sorted Array", "[SelectionSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    SelectionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Reversed Array", "[SelectionSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    SelectionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Array with Duplicates", "[SelectionSort]") {
    int arr[] = { 7, 7, 7, 7 };
    SelectionSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Array with Negative Numbers", "[SelectionSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    SelectionSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Array with Negative Numbers", "[SelectionSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    SelectionSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Double Array", "[SelectionSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    SelectionSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}