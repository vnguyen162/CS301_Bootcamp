/**
 * Created by Varick Erickson on 10/25/2022.
 *
 * You should not remove or change any of the tests in this file.
 *
 * The purpose of this file is to test the functions for the various loop functions.
 */

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "../LinkListInt.h"
#include "unit_test_utils.h"

TEST_CASE("Exercise 1") {


}

TEST_CASE("Exercise 2") {

}

TEST_CASE("Exercise 3") {

    SECTION("Constructor Test") {
        LinkListInt list;
        if (list.Size() != 0) {
            INFO("..Actual Size: " << list.Size());
            INFO("Expected Size: " << 0);
            FAIL();
        }
    }

    SECTION("Add and Contain Test") {

        LinkListInt list;

        for (int i = 0; i < 10; i++) {
            list.Add(i);
        }

        for (int i = 0; i < 10; i++) {
            if (!list.Contains(i)) {
                INFO(i << " not found in list!");
                INFO("List should contain values 0 - 9 inclusive.");
                FAIL();
            }
        }

        for (int i = -10; i < -1; i++) {
            if (list.Contains(i)) {
                INFO(i << " found in list!");
                INFO("List should only contain values 0 - 9 inclusive.");
                FAIL();
            }
        }

        if (list.Size() != 10) {
            INFO("..Actual Size: " << list.Size());
            INFO("Expected Size: " << 10);
            FAIL();
        }

    }

    SECTION("Remove Tests") {
        LinkListInt list;
        for (int i = 0; i < 10; i++) {
            list.Add(i);
        }

        if (list.Size() != 10) {
            INFO("..Actual Size: " << list.Size());
            INFO("Expected Size: " << 10);
            FAIL();
        }

        for (int i = 0; i < 10; i+=2) {
            list.Remove(i);
        }

        if (list.Size() != 5) {
            INFO("..Actual Size: " << list.Size());
            INFO("Expected Size: " << 5);
            FAIL();
        }

        for (int i = 0; i < 10; i += 2) {
            if (list.Contains(i)) {
                INFO(i << " found in list!");
                INFO("List should only contain values 9, 7, 5, 3, 1");
                FAIL();
            }
        }
    }

    SECTION("ToString Tests") {
        LinkListInt list;

        for (int i = 0; i < 10; i++) {
            list.Add(i);
        }

        if (list.ToString() != "head->9->8->7->6->5->4->3->2->1->0->nullptr") {
            INFO("list.ToString() did not match");
            INFO("..Actual: " << list.ToString());
            INFO("Expected: head->9->8->7->6->5->4->3->2->1->0->nullptr");
            FAIL();
        }

        for (int i = 0; i < 10; i++) {
            if (i%3 == 0) {
                list.Remove(i);
            }
        }

        if (list.ToString() != "head->8->7->5->4->2->1->nullptr") {
            INFO("list.ToString() did not match");
            INFO("..Actual: " << list.ToString());
            INFO("Expected: head->8->7->5->4->2->1->nullptr");
            FAIL();
        }

        for (int i = 0; i < 10; i++) {
            if (i%2 == 0) {
                list.Remove(i);
            }
        }

        if (list.ToString() != "head->7->5->1->nullptr") {
            INFO("list.ToString() did not match");
            INFO("..Actual: " << list.ToString());
            INFO("Expected: head->7->5->1->nullptr");
            FAIL();
        }
    }
}