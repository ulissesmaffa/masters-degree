-- ==============================================================
-- Generated by Vitis HLS v2023.1.1
-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity kernel0_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    fifo_C_drain_PE_1_0_dout : IN STD_LOGIC_VECTOR (31 downto 0);
    fifo_C_drain_PE_1_0_num_data_valid : IN STD_LOGIC_VECTOR (1 downto 0);
    fifo_C_drain_PE_1_0_fifo_cap : IN STD_LOGIC_VECTOR (1 downto 0);
    fifo_C_drain_PE_1_0_empty_n : IN STD_LOGIC;
    fifo_C_drain_PE_1_0_read : OUT STD_LOGIC;
    local_C_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    local_C_ce0 : OUT STD_LOGIC;
    local_C_q0 : IN STD_LOGIC_VECTOR (127 downto 0);
    local_C_address1 : OUT STD_LOGIC_VECTOR (3 downto 0);
    local_C_ce1 : OUT STD_LOGIC;
    local_C_we1 : OUT STD_LOGIC;
    local_C_d1 : OUT STD_LOGIC_VECTOR (127 downto 0) );
end;


architecture behav of kernel0_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv7_40 : STD_LOGIC_VECTOR (6 downto 0) := "1000000";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_40 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001000000";
    constant ap_const_lv32_5F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001011111";
    constant ap_const_lv32_60 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001100000";
    constant ap_const_lv32_7F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001111111";

attribute shreg_extract : string;
    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal icmp_ln849_reg_363 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal icmp_ln849_fu_187_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_condition_exit_pp0_iter0_stage0 : STD_LOGIC;
    signal ap_loop_exit_ready : STD_LOGIC;
    signal ap_ready_int : STD_LOGIC;
    signal fifo_C_drain_PE_1_0_blk_n : STD_LOGIC;
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal icmp_ln849_reg_363_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln849_1_fu_242_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln849_1_reg_367 : STD_LOGIC_VECTOR (1 downto 0);
    signal local_C_addr_reg_371 : STD_LOGIC_VECTOR (3 downto 0);
    signal data_split_4_reg_377 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_data_split_8_phi_fu_120_p8 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_reg_pp0_iter2_data_split_8_reg_117 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_data_split_7_phi_fu_133_p8 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_reg_pp0_iter2_data_split_7_reg_130 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_data_split_6_phi_fu_146_p8 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_reg_pp0_iter2_data_split_6_reg_143 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_data_split_5_phi_fu_159_p8 : STD_LOGIC_VECTOR (31 downto 0);
    signal data_split_fu_283_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_reg_pp0_iter2_data_split_5_reg_156 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln859_fu_262_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal c7_fu_82 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln851_fu_267_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_loop_init : STD_LOGIC;
    signal c6_fu_86 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln849_1_fu_234_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal indvar_flatten_fu_90 : STD_LOGIC_VECTOR (6 downto 0);
    signal add_ln849_1_fu_193_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_sig_allocacmp_indvar_flatten_load : STD_LOGIC_VECTOR (6 downto 0);
    signal icmp_ln851_fu_216_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln849_fu_222_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln849_fu_210_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal trunc_ln849_fu_230_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_1_fu_246_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_254_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_continue_int : STD_LOGIC;
    signal ap_done_int : STD_LOGIC;
    signal ap_loop_exit_ready_pp0_iter1_reg : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_enable_pp0 : STD_LOGIC;
    signal ap_start_int : STD_LOGIC;
    signal ap_ce_reg : STD_LOGIC;

    component kernel0_flow_control_loop_pipe_sequential_init IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_start_int : OUT STD_LOGIC;
        ap_loop_init : OUT STD_LOGIC;
        ap_ready_int : IN STD_LOGIC;
        ap_loop_exit_ready : IN STD_LOGIC;
        ap_loop_exit_done : IN STD_LOGIC;
        ap_continue_int : OUT STD_LOGIC;
        ap_done_int : IN STD_LOGIC );
    end component;



begin
    flow_control_loop_pipe_sequential_init_U : component kernel0_flow_control_loop_pipe_sequential_init
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => ap_start,
        ap_ready => ap_ready,
        ap_done => ap_done,
        ap_start_int => ap_start_int,
        ap_loop_init => ap_loop_init,
        ap_ready_int => ap_ready_int,
        ap_loop_exit_ready => ap_condition_exit_pp0_iter0_stage0,
        ap_loop_exit_done => ap_done_int,
        ap_continue_int => ap_continue_int,
        ap_done_int => ap_done_int);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue_int = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_loop_exit_ready_pp0_iter1_reg = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_condition_exit_pp0_iter0_stage0)) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start_int;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    c6_fu_86_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                if ((ap_loop_init = ap_const_logic_1)) then 
                    c6_fu_86 <= ap_const_lv4_0;
                elsif ((ap_enable_reg_pp0_iter1 = ap_const_logic_1)) then 
                    c6_fu_86 <= select_ln849_1_fu_234_p3;
                end if;
            end if; 
        end if;
    end process;

    c7_fu_82_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                if ((ap_loop_init = ap_const_logic_1)) then 
                    c7_fu_82 <= ap_const_lv4_0;
                elsif ((ap_enable_reg_pp0_iter1 = ap_const_logic_1)) then 
                    c7_fu_82 <= add_ln851_fu_267_p2;
                end if;
            end if; 
        end if;
    end process;

    indvar_flatten_fu_90_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                if (((icmp_ln849_fu_187_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
                    indvar_flatten_fu_90 <= add_ln849_1_fu_193_p2;
                elsif ((ap_loop_init = ap_const_logic_1)) then 
                    indvar_flatten_fu_90 <= ap_const_lv7_0;
                end if;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
                icmp_ln849_reg_363 <= icmp_ln849_fu_187_p2;
                icmp_ln849_reg_363_pp0_iter1_reg <= icmp_ln849_reg_363;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln849_reg_363 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                data_split_4_reg_377 <= fifo_C_drain_PE_1_0_dout;
                local_C_addr_reg_371 <= zext_ln859_fu_262_p1(4 - 1 downto 0);
                trunc_ln849_1_reg_367 <= trunc_ln849_1_fu_242_p1;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    add_ln849_1_fu_193_p2 <= std_logic_vector(unsigned(ap_sig_allocacmp_indvar_flatten_load) + unsigned(ap_const_lv7_1));
    add_ln849_fu_210_p2 <= std_logic_vector(unsigned(c6_fu_86) + unsigned(ap_const_lv4_1));
    add_ln851_fu_267_p2 <= std_logic_vector(unsigned(select_ln849_fu_222_p3) + unsigned(ap_const_lv4_1));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_enable_reg_pp0_iter1, fifo_C_drain_PE_1_0_empty_n, icmp_ln849_reg_363)
    begin
                ap_block_pp0_stage0_11001 <= ((icmp_ln849_reg_363 = ap_const_lv1_0) and (fifo_C_drain_PE_1_0_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_enable_reg_pp0_iter1, fifo_C_drain_PE_1_0_empty_n, icmp_ln849_reg_363)
    begin
                ap_block_pp0_stage0_subdone <= ((icmp_ln849_reg_363 = ap_const_lv1_0) and (fifo_C_drain_PE_1_0_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1));
    end process;

        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_state2_pp0_stage0_iter1_assign_proc : process(fifo_C_drain_PE_1_0_empty_n, icmp_ln849_reg_363)
    begin
                ap_block_state2_pp0_stage0_iter1 <= ((icmp_ln849_reg_363 = ap_const_lv1_0) and (fifo_C_drain_PE_1_0_empty_n = ap_const_logic_0));
    end process;

        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_exit_pp0_iter0_stage0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone, icmp_ln849_fu_187_p2)
    begin
        if (((icmp_ln849_fu_187_p2 = ap_const_lv1_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_condition_exit_pp0_iter0_stage0 <= ap_const_logic_1;
        else 
            ap_condition_exit_pp0_iter0_stage0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_int_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_subdone, ap_done_reg, ap_loop_exit_ready_pp0_iter1_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_loop_exit_ready_pp0_iter1_reg = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_done_int <= ap_const_logic_1;
        else 
            ap_done_int <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);
    ap_enable_reg_pp0_iter0 <= ap_start_int;

    ap_idle_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_idle_pp0, ap_start_int)
    begin
        if (((ap_idle_pp0 = ap_const_logic_1) and (ap_start_int = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_loop_exit_ready <= ap_condition_exit_pp0_iter0_stage0;

    ap_phi_mux_data_split_5_phi_fu_159_p8_assign_proc : process(icmp_ln849_reg_363_pp0_iter1_reg, trunc_ln849_1_reg_367, data_split_4_reg_377, data_split_fu_283_p1, ap_phi_reg_pp0_iter2_data_split_5_reg_156)
    begin
        if (((trunc_ln849_1_reg_367 = ap_const_lv2_0) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0))) then 
            ap_phi_mux_data_split_5_phi_fu_159_p8 <= data_split_4_reg_377;
        elsif ((((trunc_ln849_1_reg_367 = ap_const_lv2_2) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_1) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_3) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)))) then 
            ap_phi_mux_data_split_5_phi_fu_159_p8 <= data_split_fu_283_p1;
        else 
            ap_phi_mux_data_split_5_phi_fu_159_p8 <= ap_phi_reg_pp0_iter2_data_split_5_reg_156;
        end if; 
    end process;


    ap_phi_mux_data_split_6_phi_fu_146_p8_assign_proc : process(local_C_q0, icmp_ln849_reg_363_pp0_iter1_reg, trunc_ln849_1_reg_367, data_split_4_reg_377, ap_phi_reg_pp0_iter2_data_split_6_reg_143)
    begin
        if (((trunc_ln849_1_reg_367 = ap_const_lv2_1) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0))) then 
            ap_phi_mux_data_split_6_phi_fu_146_p8 <= data_split_4_reg_377;
        elsif ((((trunc_ln849_1_reg_367 = ap_const_lv2_0) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_2) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_3) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)))) then 
            ap_phi_mux_data_split_6_phi_fu_146_p8 <= local_C_q0(63 downto 32);
        else 
            ap_phi_mux_data_split_6_phi_fu_146_p8 <= ap_phi_reg_pp0_iter2_data_split_6_reg_143;
        end if; 
    end process;


    ap_phi_mux_data_split_7_phi_fu_133_p8_assign_proc : process(local_C_q0, icmp_ln849_reg_363_pp0_iter1_reg, trunc_ln849_1_reg_367, data_split_4_reg_377, ap_phi_reg_pp0_iter2_data_split_7_reg_130)
    begin
        if (((trunc_ln849_1_reg_367 = ap_const_lv2_2) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0))) then 
            ap_phi_mux_data_split_7_phi_fu_133_p8 <= data_split_4_reg_377;
        elsif ((((trunc_ln849_1_reg_367 = ap_const_lv2_0) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_1) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_3) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)))) then 
            ap_phi_mux_data_split_7_phi_fu_133_p8 <= local_C_q0(95 downto 64);
        else 
            ap_phi_mux_data_split_7_phi_fu_133_p8 <= ap_phi_reg_pp0_iter2_data_split_7_reg_130;
        end if; 
    end process;


    ap_phi_mux_data_split_8_phi_fu_120_p8_assign_proc : process(local_C_q0, icmp_ln849_reg_363_pp0_iter1_reg, trunc_ln849_1_reg_367, data_split_4_reg_377, ap_phi_reg_pp0_iter2_data_split_8_reg_117)
    begin
        if ((((trunc_ln849_1_reg_367 = ap_const_lv2_0) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_2) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)) or ((trunc_ln849_1_reg_367 = ap_const_lv2_1) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0)))) then 
            ap_phi_mux_data_split_8_phi_fu_120_p8 <= local_C_q0(127 downto 96);
        elsif (((trunc_ln849_1_reg_367 = ap_const_lv2_3) and (icmp_ln849_reg_363_pp0_iter1_reg = ap_const_lv1_0))) then 
            ap_phi_mux_data_split_8_phi_fu_120_p8 <= data_split_4_reg_377;
        else 
            ap_phi_mux_data_split_8_phi_fu_120_p8 <= ap_phi_reg_pp0_iter2_data_split_8_reg_117;
        end if; 
    end process;

    ap_phi_reg_pp0_iter2_data_split_5_reg_156 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    ap_phi_reg_pp0_iter2_data_split_6_reg_143 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    ap_phi_reg_pp0_iter2_data_split_7_reg_130 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    ap_phi_reg_pp0_iter2_data_split_8_reg_117 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

    ap_ready_int_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_ready_int <= ap_const_logic_1;
        else 
            ap_ready_int <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_allocacmp_indvar_flatten_load_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, ap_loop_init, indvar_flatten_fu_90)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_loop_init = ap_const_logic_1))) then 
            ap_sig_allocacmp_indvar_flatten_load <= ap_const_lv7_0;
        else 
            ap_sig_allocacmp_indvar_flatten_load <= indvar_flatten_fu_90;
        end if; 
    end process;

    data_split_fu_283_p1 <= local_C_q0(32 - 1 downto 0);

    fifo_C_drain_PE_1_0_blk_n_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, fifo_C_drain_PE_1_0_empty_n, icmp_ln849_reg_363, ap_block_pp0_stage0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln849_reg_363 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            fifo_C_drain_PE_1_0_blk_n <= fifo_C_drain_PE_1_0_empty_n;
        else 
            fifo_C_drain_PE_1_0_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    fifo_C_drain_PE_1_0_read_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, icmp_ln849_reg_363, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln849_reg_363 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            fifo_C_drain_PE_1_0_read <= ap_const_logic_1;
        else 
            fifo_C_drain_PE_1_0_read <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln849_fu_187_p2 <= "1" when (ap_sig_allocacmp_indvar_flatten_load = ap_const_lv7_40) else "0";
    icmp_ln851_fu_216_p2 <= "1" when (c7_fu_82 = ap_const_lv4_8) else "0";
    local_C_address0 <= zext_ln859_fu_262_p1(4 - 1 downto 0);
    local_C_address1 <= local_C_addr_reg_371;

    local_C_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            local_C_ce0 <= ap_const_logic_1;
        else 
            local_C_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    local_C_ce1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            local_C_ce1 <= ap_const_logic_1;
        else 
            local_C_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    local_C_d1 <= (((ap_phi_mux_data_split_8_phi_fu_120_p8 & ap_phi_mux_data_split_7_phi_fu_133_p8) & ap_phi_mux_data_split_6_phi_fu_146_p8) & ap_phi_mux_data_split_5_phi_fu_159_p8);

    local_C_we1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            local_C_we1 <= ap_const_logic_1;
        else 
            local_C_we1 <= ap_const_logic_0;
        end if; 
    end process;

    select_ln849_1_fu_234_p3 <= 
        add_ln849_fu_210_p2 when (icmp_ln851_fu_216_p2(0) = '1') else 
        c6_fu_86;
    select_ln849_fu_222_p3 <= 
        ap_const_lv4_0 when (icmp_ln851_fu_216_p2(0) = '1') else 
        c7_fu_82;
    tmp_1_fu_246_p3 <= select_ln849_1_fu_234_p3(2 downto 2);
    tmp_fu_254_p3 <= (trunc_ln849_fu_230_p1 & tmp_1_fu_246_p3);
    trunc_ln849_1_fu_242_p1 <= select_ln849_1_fu_234_p3(2 - 1 downto 0);
    trunc_ln849_fu_230_p1 <= select_ln849_fu_222_p3(3 - 1 downto 0);
    zext_ln859_fu_262_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_254_p3),64));
end behav;