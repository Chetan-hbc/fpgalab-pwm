module LED_PWM(input wire clk, input wire[3:0] PWM_input,output reg LED);

reg [4:0] PWM;

always @(posedge clk) PWM <= PWM[3:0]+PWM_input;

assign LED = PWM[4];
endmodule
