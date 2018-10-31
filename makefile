CC = /usr/bin/g++
CCFLAGS = -c -g -Wall
ROOT = .
ALGODIR = $(ROOT)/algo
TESTDIR = $(ROOT)/test
INCDIR = $(ROOT)/include
SRCDIR = $(ROOT)
OBJDIR = $(ROOT)/obj
BINOBJ = main

OBJ = $(OBJDIR)/berlekamp_massey.o $(OBJDIR)/dfft.o $(OBJDIR)/rank.o\
	$(OBJDIR)/approximate_entropy_test.o	$(OBJDIR)/autocorrelation_test.o $(OBJDIR)/binary_derivative_test.o\
	$(OBJDIR)/binary_matrix_rank_test.o $(OBJDIR)/cumulative_test.o $(OBJDIR)/Discrete_Fourier_Transform_test.o\
	$(OBJDIR)/frequency_test_within_a_block.o $(OBJDIR)/linear_complexity_test.o $(OBJDIR)/Maurers_universal_test.o\
	$(OBJDIR)/monobit_frequency_test.o $(OBJDIR)/poker_test.o $(OBJDIR)/runs_distribution_test.o\
	$(OBJDIR)/runs_test.o $(OBJDIR)/serial_test.o $(OBJDIR)/test_for_the_longest_run_of_ones_in_a_block.o\
	$(OBJDIR)/test.o $(OBJDIR)/testsuit.o $(OBJDIR)/util.o $(OBJDIR)/main.o
	
$(OBJDIR)/$(BINOBJ): $(OBJ)
	$(CC) -o $@ $^ -lstdc++
$(OBJDIR)/berlekamp_massey.o: $(ALGODIR)/berlekamp_massey.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/dfft.o: $(ALGODIR)/dfft.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/rank.o: $(ALGODIR)/rank.cpp
	$(CC) -o $@ $(CCFLAGS) $^

$(OBJDIR)/approximate_entropy_test.o: $(TESTDIR)/approximate_entropy_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/autocorrelation_test.o: $(TESTDIR)/autocorrelation_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/binary_derivative_test.o: $(TESTDIR)/binary_derivative_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/binary_matrix_rank_test.o: $(TESTDIR)/binary_matrix_rank_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/cumulative_test.o: $(TESTDIR)/cumulative_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/Discrete_Fourier_Transform_test.o: $(TESTDIR)/Discrete_Fourier_Transform_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/frequency_test_within_a_block.o: $(TESTDIR)/frequency_test_within_a_block.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/linear_complexity_test.o: $(TESTDIR)/linear_complexity_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/Maurers_universal_test.o: $(TESTDIR)/Maurers_universal_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/monobit_frequency_test.o: $(TESTDIR)/monobit_frequency_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/poker_test.o: $(TESTDIR)/poker_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/runs_distribution_test.o: $(TESTDIR)/runs_distribution_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/runs_test.o: $(TESTDIR)/runs_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/serial_test.o: $(TESTDIR)/serial_test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/test_for_the_longest_run_of_ones_in_a_block.o: $(TESTDIR)/test_for_the_longest_run_of_ones_in_a_block.cpp
	$(CC) -o $@ $(CCFLAGS) $^

$(OBJDIR)/test.o: $(TESTDIR)/test.cpp
	$(CC) -o $@ $(CCFLAGS) $^
	
$(OBJDIR)/testsuit.o: $(SRCDIR)/testsuit.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/util.o: $(SRCDIR)/util.cpp
	$(CC) -o $@ $(CCFLAGS) $^
$(OBJDIR)/main.o: $(SRCDIR)/main.cpp
	$(CC) -o $@ $(CCFLAGS) $^  -std=c++11


clean:	
	rm -f $(OBJDIR)/*.o		$(OBJDIR)/$(BINOBJ)