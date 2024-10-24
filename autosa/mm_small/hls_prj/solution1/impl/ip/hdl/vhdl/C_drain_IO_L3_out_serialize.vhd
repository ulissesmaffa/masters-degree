-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity C_drain_IO_L3_out_serialize is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    m_axi_C_V_AWVALID : OUT STD_LOGIC;
    m_axi_C_V_AWREADY : IN STD_LOGIC;
    m_axi_C_V_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_C_V_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_C_V_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_C_V_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_C_V_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_C_V_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_C_V_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_C_V_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_C_V_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_C_V_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_WVALID : OUT STD_LOGIC;
    m_axi_C_V_WREADY : IN STD_LOGIC;
    m_axi_C_V_WDATA : OUT STD_LOGIC_VECTOR (511 downto 0);
    m_axi_C_V_WSTRB : OUT STD_LOGIC_VECTOR (63 downto 0);
    m_axi_C_V_WLAST : OUT STD_LOGIC;
    m_axi_C_V_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_ARVALID : OUT STD_LOGIC;
    m_axi_C_V_ARREADY : IN STD_LOGIC;
    m_axi_C_V_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_C_V_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_C_V_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_C_V_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_C_V_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_C_V_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_C_V_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_C_V_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_C_V_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_C_V_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_RVALID : IN STD_LOGIC;
    m_axi_C_V_RREADY : OUT STD_LOGIC;
    m_axi_C_V_RDATA : IN STD_LOGIC_VECTOR (511 downto 0);
    m_axi_C_V_RLAST : IN STD_LOGIC;
    m_axi_C_V_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_C_V_BVALID : IN STD_LOGIC;
    m_axi_C_V_BREADY : OUT STD_LOGIC;
    m_axi_C_V_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_C_V_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_C_V_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    C_V_offset_dout : IN STD_LOGIC_VECTOR (31 downto 0);
    C_V_offset_empty_n : IN STD_LOGIC;
    C_V_offset_read : OUT STD_LOGIC;
    fifo_C_drain_local_in_V_V_dout : IN STD_LOGIC_VECTOR (127 downto 0);
    fifo_C_drain_local_in_V_V_empty_n : IN STD_LOGIC;
    fifo_C_drain_local_in_V_V_read : OUT STD_LOGIC );
end;


architecture behav of C_drain_IO_L3_out_serialize is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (10 downto 0) := "00000000010";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000100";
    constant ap_ST_fsm_pp0_stage1 : STD_LOGIC_VECTOR (10 downto 0) := "00000001000";
    constant ap_ST_fsm_pp0_stage2 : STD_LOGIC_VECTOR (10 downto 0) := "00000010000";
    constant ap_ST_fsm_pp0_stage3 : STD_LOGIC_VECTOR (10 downto 0) := "00000100000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (10 downto 0) := "00001000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (10 downto 0) := "00010000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (10 downto 0) := "00100000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (10 downto 0) := "01000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (10 downto 0) := "10000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv32_100 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100000000";
    constant ap_const_lv64_FFFFFFFFFFFFFFFF : STD_LOGIC_VECTOR (63 downto 0) := "1111111111111111111111111111111111111111111111111111111111111111";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv9_100 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal C_V_blk_n_AW : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal C_V_blk_n_W : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage1 : signal is "none";
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_block_pp0_stage1 : BOOLEAN;
    signal icmp_ln1164_reg_159 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln1164_reg_159_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal C_V_blk_n_B : STD_LOGIC;
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal C_V_offset_blk_n : STD_LOGIC;
    signal fifo_C_drain_local_in_V_V_blk_n : STD_LOGIC;
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal ap_CS_fsm_pp0_stage2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage2 : signal is "none";
    signal ap_block_pp0_stage2 : BOOLEAN;
    signal ap_CS_fsm_pp0_stage3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage3 : signal is "none";
    signal ap_block_pp0_stage3 : BOOLEAN;
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal t_V_reg_96 : STD_LOGIC_VECTOR (8 downto 0);
    signal C_V_offset1_i_reg_148 : STD_LOGIC_VECTOR (25 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal icmp_ln1164_fu_127_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state3_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state7_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal i_V_fu_133_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_V_reg_163 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_V_reg_168 : STD_LOGIC_VECTOR (127 downto 0);
    signal ap_block_state4_pp0_stage1_iter0 : BOOLEAN;
    signal ap_block_state8_pp0_stage1_iter1 : BOOLEAN;
    signal ap_block_state8_io : BOOLEAN;
    signal ap_block_pp0_stage1_11001 : BOOLEAN;
    signal tmp_V_2_reg_173 : STD_LOGIC_VECTOR (127 downto 0);
    signal ap_block_state5_pp0_stage2_iter0 : BOOLEAN;
    signal ap_block_pp0_stage2_11001 : BOOLEAN;
    signal tmp_V_3_reg_178 : STD_LOGIC_VECTOR (127 downto 0);
    signal ap_block_state6_pp0_stage3_iter0 : BOOLEAN;
    signal ap_block_pp0_stage3_11001 : BOOLEAN;
    signal tmp_V_4_reg_183 : STD_LOGIC_VECTOR (127 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state3 : STD_LOGIC;
    signal ap_block_pp0_stage3_subdone : BOOLEAN;
    signal ap_block_pp0_stage1_subdone : BOOLEAN;
    signal ap_phi_mux_t_V_phi_fu_100_p4 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln1159_fu_117_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage1_01001 : BOOLEAN;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_block_pp0_stage2_subdone : BOOLEAN;
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
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
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((m_axi_C_V_BVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state13))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state3) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif (((m_axi_C_V_AWREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
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
                if ((((ap_const_boolean_0 = ap_block_pp0_stage3_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3)) or ((ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1)))) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif (((m_axi_C_V_AWREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    t_V_reg_96_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
                t_V_reg_96 <= i_V_reg_163;
            elsif (((m_axi_C_V_AWREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                t_V_reg_96 <= ap_const_lv9_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_0 = C_V_offset_empty_n) or (ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                C_V_offset1_i_reg_148 <= C_V_offset_dout(31 downto 6);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                i_V_reg_163 <= i_V_fu_133_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                icmp_ln1164_reg_159 <= icmp_ln1164_fu_127_p2;
                icmp_ln1164_reg_159_pp0_iter1_reg <= icmp_ln1164_reg_159;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then
                tmp_V_2_reg_173 <= fifo_C_drain_local_in_V_V_dout;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage3_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then
                tmp_V_3_reg_178 <= fifo_C_drain_local_in_V_V_dout;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                tmp_V_4_reg_183 <= fifo_C_drain_local_in_V_V_dout;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then
                tmp_V_reg_168 <= fifo_C_drain_local_in_V_V_dout;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, m_axi_C_V_AWREADY, m_axi_C_V_BVALID, C_V_offset_empty_n, ap_CS_fsm_state2, ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter1, ap_CS_fsm_state13, ap_enable_reg_pp0_iter0, icmp_ln1164_fu_127_p2, ap_block_pp0_stage0_subdone, ap_block_pp0_stage3_subdone, ap_block_pp0_stage1_subdone, ap_block_pp0_stage2_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_const_logic_0 = C_V_offset_empty_n) or (ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((m_axi_C_V_AWREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (icmp_ln1164_fu_127_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (icmp_ln1164_fu_127_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_pp0_stage1 => 
                if ((not(((ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) and (ap_const_boolean_0 = ap_block_pp0_stage1_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage2;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage1_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                end if;
            when ap_ST_fsm_pp0_stage2 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage2_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage3;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage2;
                end if;
            when ap_ST_fsm_pp0_stage3 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage3_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage3;
                end if;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                if (((m_axi_C_V_BVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state13))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state13;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXX";
        end case;
    end process;

    C_V_blk_n_AW_assign_proc : process(m_axi_C_V_AWREADY, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            C_V_blk_n_AW <= m_axi_C_V_AWREADY;
        else 
            C_V_blk_n_AW <= ap_const_logic_1;
        end if; 
    end process;


    C_V_blk_n_B_assign_proc : process(m_axi_C_V_BVALID, ap_CS_fsm_state13)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            C_V_blk_n_B <= m_axi_C_V_BVALID;
        else 
            C_V_blk_n_B <= ap_const_logic_1;
        end if; 
    end process;


    C_V_blk_n_W_assign_proc : process(m_axi_C_V_WREADY, ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter1, ap_block_pp0_stage1, icmp_ln1164_reg_159_pp0_iter1_reg)
    begin
        if (((icmp_ln1164_reg_159_pp0_iter1_reg = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1))) then 
            C_V_blk_n_W <= m_axi_C_V_WREADY;
        else 
            C_V_blk_n_W <= ap_const_logic_1;
        end if; 
    end process;


    C_V_offset_blk_n_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, C_V_offset_empty_n)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            C_V_offset_blk_n <= C_V_offset_empty_n;
        else 
            C_V_offset_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    C_V_offset_read_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, C_V_offset_empty_n)
    begin
        if ((not(((ap_const_logic_0 = C_V_offset_empty_n) or (ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            C_V_offset_read <= ap_const_logic_1;
        else 
            C_V_offset_read <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(2);
    ap_CS_fsm_pp0_stage1 <= ap_CS_fsm(3);
    ap_CS_fsm_pp0_stage2 <= ap_CS_fsm(4);
    ap_CS_fsm_pp0_stage3 <= ap_CS_fsm(5);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state13 <= ap_CS_fsm(10);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159)
    begin
                ap_block_pp0_stage0_11001 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159)
    begin
                ap_block_pp0_stage0_subdone <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1));
    end process;

        ap_block_pp0_stage1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage1_01001_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage1_01001 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage1_11001_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0, ap_block_state8_io)
    begin
                ap_block_pp0_stage1_11001 <= (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1)) or ((ap_const_boolean_1 = ap_block_state8_io) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1)));
    end process;


    ap_block_pp0_stage1_subdone_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0, ap_block_state8_io)
    begin
                ap_block_pp0_stage1_subdone <= (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1)) or ((ap_const_boolean_1 = ap_block_state8_io) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1)));
    end process;

        ap_block_pp0_stage2 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage2_11001_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage2_11001 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage2_subdone_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage2_subdone <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;

        ap_block_pp0_stage3 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage3_11001_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage3_11001 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage3_subdone_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage3_subdone <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_block_state1_assign_proc : process(ap_start, ap_done_reg, C_V_offset_empty_n)
    begin
                ap_block_state1 <= ((ap_const_logic_0 = C_V_offset_empty_n) or (ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;

        ap_block_state3_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_state4_pp0_stage1_iter0_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159)
    begin
                ap_block_state4_pp0_stage1_iter0 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_block_state5_pp0_stage2_iter0_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159)
    begin
                ap_block_state5_pp0_stage2_iter0 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_block_state6_pp0_stage3_iter0_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159)
    begin
                ap_block_state6_pp0_stage3_iter0 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_block_state7_pp0_stage0_iter1_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, icmp_ln1164_reg_159)
    begin
                ap_block_state7_pp0_stage0_iter1 <= ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (fifo_C_drain_local_in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_block_state8_io_assign_proc : process(m_axi_C_V_WREADY, icmp_ln1164_reg_159_pp0_iter1_reg)
    begin
                ap_block_state8_io <= ((icmp_ln1164_reg_159_pp0_iter1_reg = ap_const_lv1_0) and (m_axi_C_V_WREADY = ap_const_logic_0));
    end process;

        ap_block_state8_pp0_stage1_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state3_assign_proc : process(icmp_ln1164_fu_127_p2)
    begin
        if ((icmp_ln1164_fu_127_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state3 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state3 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_done_reg, m_axi_C_V_BVALID, ap_CS_fsm_state13)
    begin
        if (((m_axi_C_V_BVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state13))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_t_V_phi_fu_100_p4_assign_proc : process(ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, t_V_reg_96, i_V_reg_163)
    begin
        if (((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_t_V_phi_fu_100_p4 <= i_V_reg_163;
        else 
            ap_phi_mux_t_V_phi_fu_100_p4 <= t_V_reg_96;
        end if; 
    end process;


    ap_ready_assign_proc : process(m_axi_C_V_BVALID, ap_CS_fsm_state13)
    begin
        if (((m_axi_C_V_BVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state13))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    fifo_C_drain_local_in_V_V_blk_n_assign_proc : process(fifo_C_drain_local_in_V_V_empty_n, ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter1, ap_block_pp0_stage1, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage2, ap_block_pp0_stage2, ap_CS_fsm_pp0_stage3, ap_block_pp0_stage3, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0)
    begin
        if ((((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage3)) or ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage2)) or ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0)) or ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1)))) then 
            fifo_C_drain_local_in_V_V_blk_n <= fifo_C_drain_local_in_V_V_empty_n;
        else 
            fifo_C_drain_local_in_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    fifo_C_drain_local_in_V_V_read_assign_proc : process(ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage2, ap_CS_fsm_pp0_stage3, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_block_pp0_stage1_11001, ap_block_pp0_stage2_11001, ap_block_pp0_stage3_11001)
    begin
        if ((((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage3_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage3) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1)) or ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1)) or ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001)) or ((icmp_ln1164_reg_159 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1)))) then 
            fifo_C_drain_local_in_V_V_read <= ap_const_logic_1;
        else 
            fifo_C_drain_local_in_V_V_read <= ap_const_logic_0;
        end if; 
    end process;

    i_V_fu_133_p2 <= std_logic_vector(unsigned(ap_phi_mux_t_V_phi_fu_100_p4) + unsigned(ap_const_lv9_1));
    icmp_ln1164_fu_127_p2 <= "1" when (ap_phi_mux_t_V_phi_fu_100_p4 = ap_const_lv9_100) else "0";
    m_axi_C_V_ARADDR <= ap_const_lv32_0;
    m_axi_C_V_ARBURST <= ap_const_lv2_0;
    m_axi_C_V_ARCACHE <= ap_const_lv4_0;
    m_axi_C_V_ARID <= ap_const_lv1_0;
    m_axi_C_V_ARLEN <= ap_const_lv32_0;
    m_axi_C_V_ARLOCK <= ap_const_lv2_0;
    m_axi_C_V_ARPROT <= ap_const_lv3_0;
    m_axi_C_V_ARQOS <= ap_const_lv4_0;
    m_axi_C_V_ARREGION <= ap_const_lv4_0;
    m_axi_C_V_ARSIZE <= ap_const_lv3_0;
    m_axi_C_V_ARUSER <= ap_const_lv1_0;
    m_axi_C_V_ARVALID <= ap_const_logic_0;
    m_axi_C_V_AWADDR <= zext_ln1159_fu_117_p1(32 - 1 downto 0);
    m_axi_C_V_AWBURST <= ap_const_lv2_0;
    m_axi_C_V_AWCACHE <= ap_const_lv4_0;
    m_axi_C_V_AWID <= ap_const_lv1_0;
    m_axi_C_V_AWLEN <= ap_const_lv32_100;
    m_axi_C_V_AWLOCK <= ap_const_lv2_0;
    m_axi_C_V_AWPROT <= ap_const_lv3_0;
    m_axi_C_V_AWQOS <= ap_const_lv4_0;
    m_axi_C_V_AWREGION <= ap_const_lv4_0;
    m_axi_C_V_AWSIZE <= ap_const_lv3_0;
    m_axi_C_V_AWUSER <= ap_const_lv1_0;

    m_axi_C_V_AWVALID_assign_proc : process(m_axi_C_V_AWREADY, ap_CS_fsm_state2)
    begin
        if (((m_axi_C_V_AWREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            m_axi_C_V_AWVALID <= ap_const_logic_1;
        else 
            m_axi_C_V_AWVALID <= ap_const_logic_0;
        end if; 
    end process;


    m_axi_C_V_BREADY_assign_proc : process(m_axi_C_V_BVALID, ap_CS_fsm_state13)
    begin
        if (((m_axi_C_V_BVALID = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state13))) then 
            m_axi_C_V_BREADY <= ap_const_logic_1;
        else 
            m_axi_C_V_BREADY <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_C_V_RREADY <= ap_const_logic_0;
    m_axi_C_V_WDATA <= (((tmp_V_4_reg_183 & tmp_V_3_reg_178) & tmp_V_2_reg_173) & tmp_V_reg_168);
    m_axi_C_V_WID <= ap_const_lv1_0;
    m_axi_C_V_WLAST <= ap_const_logic_0;
    m_axi_C_V_WSTRB <= ap_const_lv64_FFFFFFFFFFFFFFFF;
    m_axi_C_V_WUSER <= ap_const_lv1_0;

    m_axi_C_V_WVALID_assign_proc : process(ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter1, icmp_ln1164_reg_159_pp0_iter1_reg, ap_block_pp0_stage1_11001)
    begin
        if (((icmp_ln1164_reg_159_pp0_iter1_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            m_axi_C_V_WVALID <= ap_const_logic_1;
        else 
            m_axi_C_V_WVALID <= ap_const_logic_0;
        end if; 
    end process;

    zext_ln1159_fu_117_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(C_V_offset1_i_reg_148),64));
end behav;
