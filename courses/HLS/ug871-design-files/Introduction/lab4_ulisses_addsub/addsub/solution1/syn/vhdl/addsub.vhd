-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity addsub is
port (
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    a : IN STD_LOGIC_VECTOR (31 downto 0);
    b : IN STD_LOGIC_VECTOR (31 downto 0);
    c : OUT STD_LOGIC_VECTOR (31 downto 0);
    c_ap_vld : OUT STD_LOGIC );
end;


architecture behav of addsub is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "addsub,hls_ip_2019_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-i,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=1.142000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=39,HLS_VERSION=2019_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;



begin



    ap_done <= ap_start;
    ap_idle <= ap_const_logic_1;
    ap_ready <= ap_start;
    c <= std_logic_vector(unsigned(b) + unsigned(a));

    c_ap_vld_assign_proc : process(ap_start)
    begin
        if ((ap_start = ap_const_logic_1)) then 
            c_ap_vld <= ap_const_logic_1;
        else 
            c_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

end behav;