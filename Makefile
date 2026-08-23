CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic -O0
VERIFY_BIN := .all_tests_verify

.PHONY: verify clean-tests

verify:
	$(CXX) $(CXXFLAGS) -I. tools/all_tests.cpp -o $(VERIFY_BIN)
	./$(VERIFY_BIN)
	@rm -f $(VERIFY_BIN)

clean-tests:
	rm -f $(VERIFY_BIN)
