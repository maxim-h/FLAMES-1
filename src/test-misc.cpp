#include <testthat.h>
#include <vector>
#include <unordered_map>
#include <string>

#include "utility/utility.h"
#include "test_utilities.h"

context("Test misc functions & utilities") {
	test_that("Most common elements are found") {
		std::vector<int> x {10, 15, 20, 30, 45, 50, 50, 15, 10, 15};

		expect_true(mostCommon<int>(x) == 15);

		std::vector<std::string> y {"one", "two", "one", "five", "0", "one"};
		expect_true(mostCommon<std::string>(y) == "one");

		std::vector<std::vector<int>> z {
			{1, 2, 3, 4, 5},
			{1, 5, 6, 7, 8},
			{2, 2, 5, 6, 7},
			{3, 3, 5, 4, 7}
		};

		std::vector<int> z1 = mostCommonEachCell(z, 5);
		std::vector<int> z_real{1,2,5,4,7};
		expect_true(compare_stream(z_real, z1));
	}
}