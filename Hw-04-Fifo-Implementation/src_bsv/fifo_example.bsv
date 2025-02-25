
// Copyright 2010 Bluespec, Inc.All rights reserved.
package fifo_example;

import FIFO :: *;

/*
changelog:
1. making a basic fifo
2. making it an up-down counter with simplified interfaces

*/
interface Ifc_fifo_example;
   method Action put_data(int a , int b);
   method ActionValue#(Tuple2#(int,int)) get_data ();
endinterface

(* synthesize *)
module mk_fifo_example(Ifc_fifo_example);


   FIFO#(int) fifo_1 <- mkFIFO;
   FIFO#(int) fifo_2 <- mkFIFO;

   method Action put_data(int a ,int b);
      fifo_1.enq(a);
      fifo_2.enq(b);
      endmethod

   method ActionValue#(Tuple2#(int,int)) get_data();
   
      fifo_1.deq(); fifo_2.deq();

      return (tuple2(fifo_1.first(),fifo_2.first()));

      endmethod

   
endmodule: mk_fifo_example

endpackage: fifo_example