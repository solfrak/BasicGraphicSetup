#include <Person.h>
#include <gtest/gtest.h>
//
// Created by lapor on 10/8/2024.
//
TEST(PersonTest, PersonShouldTalk)
{
    Person person;

    EXPECT_TRUE(person.canTalk());
}
