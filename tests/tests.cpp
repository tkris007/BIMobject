
#include <hasTriangles.h>

#include <gmock/gmock.h>
#include <gtest/gtest.h>


TEST(hasTriangle,
     Given_an_array_with_size_lesser_than_3_When_checking_for_triangles_Then_returns_false)
{
	ASSERT_THAT(hasTriangles({}), false);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}