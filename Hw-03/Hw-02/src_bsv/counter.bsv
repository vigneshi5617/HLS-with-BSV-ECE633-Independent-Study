
package Tb;

(* synthesize *)
module mkTb(Empty);


	rule greet ;
		$display(" Hello World - From Vignesh ! ");
		$finish;
	endrule
endmodule :mkTb

endpackage : Tb
