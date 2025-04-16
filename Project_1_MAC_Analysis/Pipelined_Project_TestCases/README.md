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
---

## 📘 ECE-633: Pipelined Multiply-Accumulate (MAC) Design using Bluespec System Verilog  
**Author**: Vignesh Anand  
**Course**: High-Level Synthesis with Bluespec System Verilog  
**Module**: Pipelined MAC Unit (Int8 + BF16)  
**Toolchain**: BSC + Verilator + Cocotb  
**Contribution**: Sole contributor for pipelined micro-architecture, modular IPs, verification & documentation

---

### 🔍 Overview

This project implements a **3-stage pipelined MAC unit** using **Bluespec System Verilog (BSV)** for high-throughput processing of:
- `int8 × int8 + int32` operations
- `BF16 × BF16 + FP32` operations

The design is written entirely in BSV using atomic rules and FIFO communication, with the goal of synthesizing **vendor-IP-free**, high-performance RTL suitable for ASIC or FPGA flows.

---

### ⚙️ Pipeline Architecture Overview

```
+------------------+       +------------------+       +------------------+
|   Stage 1        |       |    Stage 2       |       |     Stage 3      |
|------------------|       |------------------|       |------------------|
| Input Capture    | ----> | Multiplier       | ----> | Adder & Output   |
| Input FIFO       |       | Product FIFO     |       | Output FIFO      |
+------------------+       +------------------+       +------------------+
```

### Pipeline Stages

| Stage | Description                              |
|-------|------------------------------------------|
| 1️⃣    | Input registered → Enqueued into FIFO    |
| 2️⃣    | Integer/BF16 multiplication              |
| 3️⃣    | Addition (CLA or FP32), output result    |

---

### 📐 Folder Structure

```bash
Pipelined_MAC/
│
├── mac.bsv                      # Top-level pipelined MAC
│
├── mac_verif/                   # Cocotb testbenches
│   ├── test_mac.py
│   └── test_cases/              # Test vectors for int8MAC and bf16MAC
│
├── verilog/                     # BSC-generated Verilog
├── intermediate/                # Intermediate build outputs
├── Makefile                     # Build and simulation automation
```

---

### 🚀 Running the Design

**1. Generate Verilog:**
```bash
make generate_verilog
```

**2. Simulate via Verilator:**
```bash
make simulate
```

**3. Clean Project Files:**
```bash
make clean_build
```

---

### 💡 Key Features

| Feature                   | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| **Pipelined Execution**  | 3-stage architecture for concurrency & high throughput                     |
| **FIFO-Based Flow**      | `mkPipelineFIFO()` used between stages for in-order data propagation        |
| **Backpressure Support** | FIFOs implement `.notFull` and `.notEmpty` checks for rule gating           |
| **Mixed-Precision Logic**| Supports both Integer and Floating-Point operations                        |
| **Full IEEE754 Handling**| BF16 → FP32 multiply, FP32 add, manual normalization and rounding logic     |
| **Modular Design**       | CLA, Multiplier, FP logic as separate reusable blocks                      |
| **RTL Verified**         | Over 2000+ testcases passed via Cocotb simulation                          |
| **PnR-Ready Verilog**    | Verilog output is synthesizable, pushed through complete PnR flow          |

---

### ⏱️ Performance Comparison

| Metric             | Unpipelined        | Pipelined         |
|--------------------|--------------------|-------------------|
| Total INT Tests    | 1049               | 1049              |
| Total FP Tests     | 1000               | 1000              |
| Sim Time           | 61,485,000 ns      | **20,555,000 ns** |
| Speedup Achieved   | 1× (serial)        | **3× faster**     |

🟢 **Key Insight**: Pipeline enables concurrent processing of multiple MAC operations. While one test case is in the adder, the next can already be multiplying.

---

### 🧠 Pipeline Design Internals

#### 🧩 Pipeline Components

| FIFO Stage        | Data Carried                            |
|-------------------|------------------------------------------|
| `int_ififo`       | `{a, b, c}` for int MAC                  |
| `fp_ififo`        | `{a_bf16, b_bf16, c_fp32}`               |
| `int_pfifo`       | `product` output from INT multiplier     |
| `fp_pfifo`        | `product` output from BF16 multiplier    |
| `int_ofifo`       | Final INT result                         |
| `fp_ofifo`        | Final FP result                          |

#### 🛠 FIFO Flow Control
- **Enqueue only if `.notFull`** → prevents overflows
- **Dequeue only if `.notEmpty`** → ensures valid data
- BSV compiler automatically infers `.canFire` conditions
- No need for manual stall logic

---

### 🧪 Verification Strategy

- 🧬 **Cocotb-based testbench**
- 🗃️ Test vectors read from `.txt` files for 1000+ INT & FP cases
- 🧠 Assert DUT results against golden reference (bit-for-bit match)
- 📈 Edge case testing: zeroes, overflows, underflows, rounding edge cases

---

### 🔬 Advanced Design Notes

- Integer multiplication via **Shift-and-Add**
- CLA logic used for both `int` and `FP` mantissas
- BF16 × BF16 → FP32 multiplication uses:
  - Hidden bit (`1.m`) mantissa reconstruction
  - Manual exponent bias calculation
  - IEEE RNE rounding logic: bit masking + carry-in
- FP32 Addition:
  - Exponent alignment with shifting mantissas
  - Manual normalization & rounding post-addition

---

### 🎓 Course Context & Purpose

This project is part of **ECE-633: High-Level Synthesis using Bluespec System Verilog** at **NC State University**, aimed at exploring open-source HLS methodologies in **rule-based hardware design**. It acts as a proof-of-concept for building synthesizable RTL from high-level constructs — and is intended to form part of a **future course offering** in collaboration with **IIT Madras**, where BSV is actively used in processor design.

---

### 👤 Author

**Vignesh Anand**  
M.S. Electrical and Computer Engineering  
North Carolina State University  
_Email: vigneshi5617@gmail.com  
_GitHub: https://github.com/vigneshi5617  
---
