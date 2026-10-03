#include "fibonacci.h"
#include "utest.h"

UTEST(fibonacci, term1) {
    ASSERT_EQ(1, fibonacci(1));
}

UTEST(fibonacci, term2) {
    ASSERT_EQ(1, fibonacci(2));
}

UTEST(fibonacci, term3) {
    ASSERT_EQ(2, fibonacci(3));
}

UTEST(fibonacci, term4) {
    ASSERT_EQ(3, fibonacci(4));
}

UTEST(fibonacci, term5) {
    ASSERT_EQ(5, fibonacci(5));
}

UTEST(fibonacci, term6) {
    ASSERT_EQ(8, fibonacci(6));
}

UTEST(fibonacci, term7) {
    ASSERT_EQ(13, fibonacci(7));
}

UTEST(fibonacci, term8) {
    ASSERT_EQ(21, fibonacci(8));
}

UTEST(fibonacci, term9) {
    ASSERT_EQ(34, fibonacci(9));
}

UTEST(fibonacci, term10) {
    ASSERT_EQ(55, fibonacci(10));
}

UTEST_MAIN()
