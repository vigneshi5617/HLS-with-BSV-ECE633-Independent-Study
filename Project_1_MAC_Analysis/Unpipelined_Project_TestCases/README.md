# Run Commands for the code
This is the folder for testing coverage of fp32 MAC.

## Test Cases
The code works for 1049 int and 1000 float test cases and the performance is seen the main readme file


Make a clone of the mac folder in this repo. Run the following commands.
## To activate pyenv

```
pyenv activate py38
```

## To setup cocotb (remove any older versions and install v1.6.2)
```
pip uninstall cocotb
pip install cocotb==1.6.2
```

## To compile and generate verilog from bsv

```
make  generate_verilog
```

## To simulate using cocotb
```
pip install cocotb_coverage==1.1
make simulate 
```

## To clean all the builds
```
make clean_build
```





Absolutely! Let's start with a **detailed, clean, and professional `README.md`** tailored for your **Unpipelined MAC Design** project under **ECE-633: High-Level Synthesis using Bluespec System Verilog**, assuming you're the sole contributor.

---

## 📘 ECE-633: Multiply-Accumulate (MAC) Design using Bluespec System Verilog  
**Author**: Vignesh S  
**Course**: High-Level Synthesis with Bluespec System Verilog  
**Module**: Unpipelined MAC Unit  
**Toolchain**: BSV Compiler (BSC) + Verilator + Cocotb  
**Contribution**: Sole contributor for architecture, design, simulation, and verification

---

### 🔍 Overview

This project implements a **Multiply-Accumulate (MAC) unit** using **Bluespec System Verilog (BSV)** in an **unpipelined** fashion. The design supports:
- Integer MAC operation using `int8` × `int8` + `int32`
- Floating-point MAC using `BF16` × `BF16` + `FP32`  

The goal of this project is to explore RTL design using a rule-based HLS approach, and to build end-to-end verification infrastructure using Python-based **Cocotb testbenches**.

---

### 📐 Design Structure

```bash
Unpipelined_MAC/
│
├── mac.bsv                    # Main BSV MAC module
│
├── mac_verif/                # Cocotb testbenches and test vectors
│   ├── test_mac.py
│   ├── test_cases/
│       ├── int8MAC/          # Integer test cases (a, b, c, expected)
│       ├── bf16MAC/          # FP test cases (a, b, c, expected)
│
├── verilog/                  # Generated Verilog files from BSV
├── intermediate/             # Intermediate files for synthesis
├── Makefile                  # Main Makefile to build & simulate
```

---

### ⚙️ Features Implemented

| Feature                      | Description                                                                 |
|-----------------------------|-----------------------------------------------------------------------------|
| **Int Mode**                | Supports `int8 × int8 + int32` operation using shift-and-add + CLA adder   |
| **FP Mode**                 | Supports `BF16 × BF16 + FP32` fully in hardware, without DesignWare modules |
| **IEEE-754 Support**        | Implements manual rounding (Round-to-Nearest-Even), normalization           |
| **Modular Libraries**       | CLA, FP adder, BF16 mult written as independent BSV modules                |
| **Cocotb Testbench**        | Validates outputs against 1000+ test cases for each mode                    |
| **Synthesizable RTL**       | Generates clean Verilog via BSC, suitable for full ASIC PnR flow            |

---

### 🚀 How to Run

1. **Generate Verilog**
```bash
make generate_verilog
```

2. **Run Simulation**
```bash
make simulate
```

3. **Clean All Builds**
```bash
make clean_build
```

---

### 🧠 Technical Deep Dive

#### 1. Shift-and-Add Multiplier (INT Mode)
- Accepts two `int8` values (lower 8 bits of `a` and `b`)
- Converts to 2's complement if negative
- Accumulates partial products using bitwise shifts
- Produces signed `int32` product

#### 2. Carry Lookahead Adder (CLA)
- Uses `Generate (G)` and `Propagate (P)` bits for fast carry resolution
- 32-bit addition in constant time for MAC final output
- Also used in FP32 addition block

#### 3. BF16 × BF16 → FP32 Multiplier
- BF16: 1 sign, 8 exponent, 7 mantissa
- Reconstructs mantissa as 1.m
- Exponent biasing handled (bias = 127)
- Manual normalization & rounding logic (ties-to-even)

#### 4. FP32 Adder
- Aligns mantissas based on exponent delta
- Uses CLA to perform add/subtract
- Normalizes result post computation
- Handles overflow, underflow, and subnormal conditions

---

### 🧪 Verification Details

- Uses **Cocotb** for co-simulation with Verilator
- Integer and FP test cases read from structured `.txt` files
- Each output from DUT (`macop`) compared to golden reference
- IEEE rounding tested using edge cases (0.5, ties, small deltas)

---

### 📊 Results

| Metric              | Unpipelined MAC |
|---------------------|-----------------|
| INT Testcases       | 1049            |
| FP Testcases        | 1000            |
| Total Time          | 61,485,000 ns   |
| Cocotb Assertions   | ✅ All Passed    |

---

### 📌 Notes

- This is **not** a cycle-accurate pipelined design; each test waits for 3 cycles.
- All components (CLA, Multiplier, FP logic) are **BSV native** — no vendor IP used.
- Verilog output is synthesis-ready and can be taken through downstream EDA tools.

---

### 👤 Author

**Vignesh Anand**  
M.S. Electrical and Computer Engineering  
North Carolina State University  
_Email: vigneshi5617@gmail.com  
_GitHub: https://github.com/vigneshi5617  

---






