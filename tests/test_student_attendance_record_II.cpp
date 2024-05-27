#include "pch.h"

#include "../solutions/student_attendance_record_II.cpp"

namespace {
    using namespace StudentAttendanceRecordII;

    TEST(StudentAttendanceRecordIITest, Example1) {
        int n = 1;
        int records = 3;
        EXPECT_EQ(records, checkRecord(n));
    }

    TEST(StudentAttendanceRecordIITest, Example2) {
        int n = 2;
        int records = 8;
        EXPECT_EQ(records, checkRecord(n));
    }

    TEST(StudentAttendanceRecordIITest, Example4) {
        int n = 10101;
        int records = 183236316;
        EXPECT_EQ(records, checkRecord(n));
    }

    TEST(StudentAttendanceRecordIITest, Public1) {
        int n = 3;
        int records = 19;
        EXPECT_EQ(records, checkRecord(n));
    }

    TEST(StudentAttendanceRecordIITest, Public2) {
        int n = 4;
        int records = 43;
        EXPECT_EQ(records, checkRecord(n));
    }

    TEST(StudentAttendanceRecordIITest, Public3) {
        int n = 4;
        int records = 43;
        EXPECT_EQ(records, checkRecord(n));
    }
}
