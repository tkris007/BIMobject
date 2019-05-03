
#include <hasTriangles.h>
#include <chrono>


#include <gmock/gmock.h>
#include <gtest/gtest.h>


TEST(hasTriangle,
     Given_lesser_than_3_elements_When_checking_for_triangles_Then_returns_false)
{
	ASSERT_THAT(hasTriangles({}), false);
	ASSERT_THAT(hasTriangles({1}), false);
	ASSERT_THAT(hasTriangles({1, 2}), false);
}

TEST(hasTriangle,
     Given_3_elements_as_a_triangle_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({2, 3, 4}), true);
	ASSERT_THAT(hasTrianglesOptimized({2, 3, 4}), true);
}

TEST(hasTriangle,
     Given_3_elements_and_first_plus_second_is_not_greater_than_the_third_When_checking_for_triangles_Then_returns_false)
{
	ASSERT_THAT(hasTriangles({1, 2, 3}), false);
	ASSERT_THAT(hasTrianglesOptimized({1, 2, 3}), false);
}

TEST(hasTriangle,
     Given_3_elements_and_second_plus_third_is_not_greater_than_the_first_When_checking_for_triangles_Then_returns_false)
{
	ASSERT_THAT(hasTriangles({3, 2, 1}), false);
	ASSERT_THAT(hasTrianglesOptimized({3, 2, 1}), false);
}

TEST(hasTriangle,
     Given_3_elements_and_third_plus_first_is_not_greater_than_the_second_When_checking_for_triangles_Then_returns_false)
{
	ASSERT_THAT(hasTriangles({1, 3, 2}), false);
	ASSERT_THAT(hasTrianglesOptimized({1, 3, 2}), false);
}

TEST(hasTriangle,
     Given_5_elements_a_triangele_in_first_second_and_last_value_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({2, 3, 0, 0, 4}), true);
	ASSERT_THAT(hasTrianglesOptimized({2, 3, 0, 0, 4}), true);
}

TEST(hasTriangle,
     Given_5_elements_a_triangele_in_first_middle_and_last_value_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({2, 0, 3, 0, 4}), true);
	ASSERT_THAT(hasTrianglesOptimized({2, 0, 3, 0, 4}), true);
}

TEST(hasTriangle,
     Given_5_elements_a_triangele_in_second_middle_and_last_value_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({0, 2, 3, 0, 4}), true);
	ASSERT_THAT(hasTrianglesOptimized({0, 2, 3, 0, 4}), true);
}

TEST(hasTriangleAcceptance,
     Given_the_example_data_with_triangles_in_it_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({10, 2, 5, 1, 8, 20}), true);
	ASSERT_THAT(hasTrianglesOptimized({10, 2, 5, 1, 8, 20}), true);
}

TEST(hasTriangleAcceptance,
     Given_the_example_data_with_no_triangles_in_it_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({10, 50, 5, 1}), false);
	ASSERT_THAT(hasTrianglesOptimized({10, 50, 5, 1}), false);
}

TEST(hasTriangleAcceptance,
     Given_a_modified_example_data_with_no_triangles_in_it_When_checking_for_triangles_Then_returns_true)
{
	ASSERT_THAT(hasTriangles({10, 5, 50, 1}), false);
	ASSERT_THAT(hasTrianglesOptimized({10, 5, 50, 1}), false);
}


TEST(optimization,
     Optimized_function_runs_faster_than_old_version)
{
	std::vector<int> sides;
	sides.resize(1000, 0);

	auto start = std::chrono::high_resolution_clock::now();
	hasTriangles(sides);
	auto time = std::chrono::high_resolution_clock::now() - start;


	auto startopt = std::chrono::high_resolution_clock::now();
	hasTrianglesOptimized(sides);
	auto timeopt = std::chrono::high_resolution_clock::now() - startopt;

	ASSERT_THAT(timeopt.count(), ::testing::Lt(time.count()));
}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}