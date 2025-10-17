# Simple FPGA Adder

A basic FPGA hardware accelerator example that demonstrates a simple adder function.

## Project Structure
simple_fpga_adder/
├── README.md
├── src/
│ ├── adder.h
│ └── adder.cpp
└── test/
└── test_adder.cpp

## Function Description
- `simple_adder(int a, int b)`: Hardware-accelerated addition function

## Usage
1. Open in Vitis HLS
2. Run C Simulation to test functionality
3. Synthesize to generate hardware IP

## Test Results
The testbench verifies:
- 2 + 3 = 5
- 10 + 20 = 30  
- -5 + 8 = 3

## Author
Your Name

