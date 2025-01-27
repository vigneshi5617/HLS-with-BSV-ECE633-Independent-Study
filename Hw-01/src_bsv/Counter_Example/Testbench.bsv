package Testbench;

import mkTb::*;


(* synthesize *)
module mkTestbench(Empty);

    Reg#(int) state <- mkReg(0);
    
    //Instatiate the mkTb module
    //mkTb tbInstance();

    //Rule to trigger the greet block
    rule start ;
        //Trigger the greet block
        mkTb.greet();


        $finish;
    endrule

endmodule :mkTestbench

endpackage : Testbench
