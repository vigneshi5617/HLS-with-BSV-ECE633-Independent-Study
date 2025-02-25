## **📌 README: Makefile for FIFO Example Simulation**  

This Makefile provides a streamlined way to **compile, simulate, and verify** the **FIFO example testbench** using both **Bluesim and Verilog** flows. Below is a structured explanation of each target and its purpose.

---

## **📂 Directory Structure**
```
project-root/
│── src_bsv/                   # Contains BSV source files
│   ├── fifo_example_testbench.bsv   # BSV testbench
│── verilog/                    # Contains generated Verilog files
│── build_bsim/                 # Bluesim build artifacts
│── build_v/                    # Verilog simulation build artifacts
│── Makefile                    # Main makefile for build automation
│── dump.vcd                     # Waveform file (Generated after simulation)
```

---

## **📌 How to Use the Makefile**
### **✅ Setup**
Ensure you have installed:  
- **Bluespec Compiler (BSC)**
- **Verilator / Icarus Verilog (for Verilog simulation)**
- **GTKWave (for viewing waveforms)**

---

### **🔹 Available Make Commands**
Run any of these commands in the terminal:
```sh
make <command>
```
Example:  
```sh
make compile
```

| **Command**      | **Description** |
|------------------|----------------|
| `make compile`   | Compiles the **BSV** testbench for Bluesim simulation. |
| `make link`      | Links compiled Bluesim artifacts into an executable. |
| `make simulate`  | Runs the Bluesim simulation and generates a waveform (`dump.vcd`). |
| `make v_compile` | Compiles **BSV to Verilog** for later Verilog-based simulation. |
| `make v_link`    | Links Verilog output for simulation (using **Icarus Verilog**). |
| `make v_simulate` | Runs Verilog-based simulation. |
| `make view_wave` | Opens the waveform (`dump.vcd`) using **GTKWave**. |
| `make clean`     | Removes all temporary build files. |
| `make full_clean` | Cleans everything including generated Verilog files. |

---

## **🔹 Makefile Breakdown**
Below is a **line-by-line explanation** of the Makefile.

### **1️⃣ Common Compilation Flags**
```makefile
BSC_COMP_FLAGS = -elab -keep-fires -aggressive-conditions -no-warn-action-shadowing
BSC_LINK_FLAGS =
BSC_PATHS = -p .:./src_bsv:%/Prelude:%/Libraries
```
- **`-elab`** → Enables elaboration (full compilation)
- **`-keep-fires`** → Prevents rules from being optimized away
- **`-aggressive-conditions`** → Optimizes conditional expressions
- **`-no-warn-action-shadowing`** → Suppresses warnings about variables being overwritten

---

### **2️⃣ Directory Setup**
```makefile
# Bluesim directories
BSIM_DIRS = -simdir build_bsim -bdir build_bsim -info-dir build_bsim

# Verilog directories
V_DIRS = -vdir verilog -bdir build_v -info-dir build_v
```
- **`build_bsim/`** → Stores compiled **Bluesim** artifacts.
- **`build_v/`** → Stores compiled **Verilog** artifacts.

---

### **3️⃣ Bluesim Compilation**
```makefile
.PHONY: compile
compile:
	@echo "Compiling fifo_example_testbench.bsv for Bluesim..."
	bsc -u -sim $(BSIM_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mk_fifo_example_testbench src_bsv/fifo_example_testbench.bsv
```
- **Compiles BSV for Bluesim.**
- `-g mk_fifo_example_testbench` → Specifies the **top-level module**.

---

### **4️⃣ Bluesim Linking**
```makefile
.PHONY: link
link:
	@echo "Linking mk_fifo_example_testbench for Bluesim..."
	bsc -sim -e mk_fifo_example_testbench -o ./Testbench_bsim $(BSIM_DIRS) $(BSC_LINK_FLAGS)
```
- Links compiled Bluesim object files to create an **executable**.

---

### **5️⃣ Running Bluesim Simulation**
```makefile
.PHONY: simulate
simulate:
	@echo "Running Bluesim simulation..."
	./Testbench_bsim +bscvcd +fstname=dump.vcd
```
- Runs **Bluesim simulation**.
- Generates a **VCD waveform file (`dump.vcd`)** for debugging.

---

### **6️⃣ Viewing Waveform in GTKWave**
```makefile
.PHONY: view_wave
view_wave:
	@echo "Opening waveform viewer..."
	gtkwave dump.vcd
```
- Opens the waveform viewer.

---

### **7️⃣ Convert BSV to Verilog**
```makefile
.PHONY: v_compile
v_compile:
	@echo "Compiling fifo_example_testbench.bsv to Verilog (mk_fifo_example_testbench.v)..."
	bsc -u -verilog $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mk_fifo_example_testbench src_bsv/fifo_example_testbench.bsv
```
- Generates **Verilog files (`mk_fifo_example_testbench.v`)** from BSV.

---

### **8️⃣ Link Verilog for Simulation**
```makefile
.PHONY: v_link
v_link:
	@echo "Linking Verilog for simulation..."
	bsc -verilog -e mk_fifo_example_testbench -o ./tb_v $(V_DIRS) -vsim iverilog verilog/mk_fifo_example_testbench.v
```
- Links Verilog files to create an executable `tb_v`.

---

### **9️⃣ Run Verilog Simulation**
```makefile
.PHONY: v_simulate
v_simulate:
	@echo "Running Verilog simulation..."
	./tb_v
```
- Runs Verilog **simulation**.

---

### **🔟 Cleaning Temporary Files**
```makefile
.PHONY: clean
clean:
	rm -f ./*~
	rm -rf build_bsim/* build_v/*
	rm -f Testbench_bsim Testbench_bsim.so tb_v
	rm -f dump.vcd
	rm -f verilog/*.v
```
- **Removes compiled Bluesim & Verilog files** but keeps source files.

---

### **💥 Full Cleanup**
```makefile
.PHONY: full_clean
full_clean: clean
	rm -rf build_bsim build_v verilog
```
- **Deletes everything** including **generated Verilog files**.

---

## **🔹 Summary**
| **Feature**            | **Bluesim Flow** | **Verilog Flow** |
|------------------------|-----------------|------------------|
| **Compile**           | `make compile`  | `make v_compile` |
| **Link**              | `make link`     | `make v_link`    |
| **Simulate**          | `make simulate` | `make v_simulate` |
| **View Waveform**     | `make view_wave` | N/A |
| **Clean Files**       | `make clean`    | `make clean`     |

---

## **🚀 Next Steps**
- Run:
  ```sh
  make clean
  make compile
  make link
  make simulate
  make view_wave
  ```
- For **Verilog simulation**:
  ```sh
  make v_compile
  make v_link
  make v_simulate
  ```

---

## **📌 Final Thoughts**
This Makefile enables **automated simulation** for both **Bluesim and Verilog flows** with structured **compilation, linking, and waveform generation**. The README provides a **clear roadmap** for anyone using the project. 🚀
