#pragma once

#define dbg_start &kp F5
#define dbg_end   &kp LS(F5)
#define dbg_reset &kp LC(LS(F5))
#define run_nodbg &kp LC(F5)

#define bp_set   &kp F9
#define bp_list  &kp LA(F9)

#define dbg_step_into  &kp F11
#define dbg_step_out &kp LS(F11)
#define dbg_step_over &kp F10
#define dbg_step_goto &kp LS(F10)
#define dbg_eval &kp LS(F9)
#define dbg_eval_view &kp F2
   
#define cntx_help &kp LC(F1)

#define follow_symbol &kp F12
#define follow_fwd &kp LC(LS(MINUS))
#define follow_bwd &kp LC(MINUS)

#define cfg_apply &kp F7

#define wnd_bp &kp LA(F9)
#define wnd_stack &kp LC(LA(C)) 
#define wnd_cfg &kp LC(LS(C))
#define wnd_vars &kp LC(LA(W))  
   
            


