#define CATCH_CONFIG_MAIN  // Это нужно для автоматической генерации функции main()
#include "catch.hpp"
#include "BubbleSort.h"    // Подключаем реализацию BubbleSort

TEST_CASE("BubbleSort: Single Element Array", "[BubbleSort]") {
    int arr[] = { 5 };
    BubbleSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("BubbleSort: Already Sorted Array", "[BubbleSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    BubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Reversed Array", "[BubbleSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    BubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Array with Duplicates", "[BubbleSort]") {
    int arr[] = { 7, 7, 7, 7 };
    BubbleSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Array with Negative Numbers", "[BubbleSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    BubbleSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Double Array", "[BubbleSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    BubbleSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}