#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "OptimizedBubbleSort.h"  

TEST_CASE("OptimizedBubbleSort: Single Element Array", "[OptimizedBubbleSort]") {
    int arr[] = { 5 };
    OptimizedBubbleSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("OptimizedBubbleSort: Already Sorted Array", "[OptimizedBubbleSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Reversed Array", "[OptimizedBubbleSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Array with Duplicates", "[OptimizedBubbleSort]") {
    int arr[] = { 7, 7, 7, 7 };
    OptimizedBubbleSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Array with Negative Numbers", "[OptimizedBubbleSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Array with Negative Numbers", "[OptimizedBubbleSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Double Array", "[OptimizedBubbleSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    OptimizedBubbleSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}