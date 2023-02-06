#include "gtest/gtest.h"
#include "temperaturecontrollerapi.h"


TEST(TemperatureControllerAPITest, HeatingStartsWhenTooCold) {
    // Test that the temperature control function works as expected with different input values
    int min_temp = 10;
    int max_temp = 20;
    //TemperatureControllerAPI::controlTemperature(min_temp, max_temp);
    // check output to verify that the correct actions are taken
    // (the implementation for the actions are not provided, so this check would need to be adjusted based on the actual implementation)
    std::string expected_output = "Starting cooling...\n";
    testing::internal::CaptureStdout();
    TemperatureControllerAPI::controlTemperature(min_temp, max_temp);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, expected_output);
}

TEST(TemperatureControllerAPITest, CoolingStartsWhenTooHot) {
    // Test that the temperature control function works as expected with different input values
    int min_temp = 30;
    int max_temp = 40;
    // check output to verify that the correct actions are taken
    // (the implementation for the actions are not provided, so this check would need to be adjusted based on the actual implementation)
    std::string expected_output = "Starting heating...\n";
    testing::internal::CaptureStdout();
    TemperatureControllerAPI::controlTemperature(min_temp, max_temp);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, expected_output);
}

TEST(TemperatureControllerAPITest, NoActionTakenWhenInRange) {
    // Test that the temperature control function works as expected with different input values
    int min_temp = 20;
    int max_temp = 30;
    //TemperatureControllerAPI::controlTemperature(min_temp, max_temp);
    // check output to verify that the correct actions are taken
    // (the implementation for the actions are not provided, so this check would need to be adjusted based on the actual implementation)
    std::string expected_output = "Temperature is within range...\n";
    testing::internal::CaptureStdout();
    TemperatureControllerAPI::controlTemperature(min_temp, max_temp);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, expected_output);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}