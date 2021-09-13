.PHONY = all clean figs cleanfig problem_2

CC = g++                        # compiler to use

LINKERFLAG = -lm

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:%.cpp=%)
FIGS := $(wildcard figs)

all: ${BINS} figs
	@echo ${SRCS}

figs:
	@echo "Making figures"
	@touch figs/fig-{1..10}.svg

problem_2:
	./main_2 > data/problem_2.dat
	python3 plot_2.py

cleanfig:
	@echo "Cleaning up"
	rm -rvf data/*.dat
	rm -rvf figs/*


%: %.o
	@echo "Checking.."
	${CC} ${LINKERFLAG} $< -o $@

%.o: %.c
	@echo "Creating object.."
	${CC} -c $<

clean:
	@echo "Cleaning up..."
	@rm -rvf *.o ${BINS}
	@rm -vf *.log *.aux *.fls