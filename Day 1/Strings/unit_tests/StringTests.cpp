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
#include "../String_Practice.h"
#include "unit_test_utils.h"

TEST_CASE("String Tests") {

    SECTION("CountVowels Tests") {
        std::ofstream out("vowel_out.txt");
        SetCoutOfstream(out);

        CountVowels("hello");
        CountVowels("supercalifragilisticexpialidocious");

        out.close();  // finish redirecting the cout

        CompareOutput("Vowel Tests", "expected_output/expected_vowel_output.txt", "vowel_out.txt");
    }

    SECTION("Shouting Tests") {
        string shout_msg;

        shout_msg = Shout("hello");
        if (shout_msg != "HELLO!!!!!") {
            INFO("....Your Shout: " << shout_msg);
            INFO("Expected Shout: HELLO!!!!!");
            FAIL();
        }

        shout_msg = Shout("supercalifragilisticexpialidocious");
        if (shout_msg != "SUPERCALIFRAGILISTICEXPIALIDOCIOUS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!") {
            INFO("....Your Shout: " << shout_msg);
            INFO("Expected Shout: SUPERCALIFRAGILISTICEXPIALIDOCIOUS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            FAIL();
        }

        shout_msg = Shout("I'm not shouting");
        if (shout_msg != "I'M NOT SHOUTING!!!!!!!!!!!!!!!!") {
            INFO("....Your Shout: " << shout_msg);
            INFO("Expected Shout: I'M NOT SHOUTING!!!!!!!!!!!!!!!!");
            FAIL();
        }
    }

    SECTION("Punctuation Removal Tests") {
        string msg;

        msg = RemovePunctuation("Well, hello world!");
        if (msg != "Well hello world") {
            INFO("....Your output: " << msg);
            INFO("Expected ourput: Well hello world");
            FAIL();
        }

        msg = RemovePunctuation("WHAT???!!! YEAH!!!! OK!!!!");
        if (msg != "WHAT YEAH OK") {
            INFO("....Your output: " << msg);
            INFO("Expected ourput: WHAT YEAH OK");
            FAIL();
        }

        msg = RemovePunctuation("!\"#$%h&'()*+,-./:;<=>?@[\\]^_`{i|}~.");
        if (msg != "hi") {
            INFO("....Your output: " << msg);
            INFO("Expected ourput: hi");
            FAIL();
        }
    }

}