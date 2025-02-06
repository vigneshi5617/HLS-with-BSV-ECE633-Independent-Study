package interface_intro;

interface Ifc_tpye1;
    method Action the_assign(int x, int y, int z);
    method int the_answer();
endinterface : Ifc_tpye1


(* synthesize *)
module mkModuleDeepThought(Ifc_tpye1);

        Reg#(int) a <- mkReg(0);
        Reg#(int) b <- mkReg(0);
        Reg#(int) c <- mkReg(0);
        Reg#(int) d <- mkReg(0);


        rule compute_answer;
            $display("Firing with a=%d, b= %d, c= %d",a,b,c);
            d <= a+b+c;
        endrule

        method Action the_assign(int x,int y,int z);

            a <= x;
            b <= y;
            c <= z;
            $display("After firing the values are  a=%d, b= %d, c= %d",a,b,c);

        endmethod

        method int the_answer();
            return d;
            endmethod
    endmodule: mkModuleDeepThought

endpackage: interface_intro