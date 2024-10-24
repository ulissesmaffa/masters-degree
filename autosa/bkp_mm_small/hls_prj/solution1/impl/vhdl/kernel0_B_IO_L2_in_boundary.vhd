-- ==============================================================
-- Generated by Vitis HLS v2023.1.1
-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity kernel0_B_IO_L2_in_boundary is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    start_full_n : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    start_out : OUT STD_LOGIC;
    start_write : OUT STD_LOGIC;
    fifo_B_B_IO_L2_in_1_dout : IN STD_LOGIC_VECTOR (511 downto 0);
    fifo_B_B_IO_L2_in_1_num_data_valid : IN STD_LOGIC_VECTOR (1 downto 0);
    fifo_B_B_IO_L2_in_1_fifo_cap : IN STD_LOGIC_VECTOR (1 downto 0);
    fifo_B_B_IO_L2_in_1_empty_n : IN STD_LOGIC;
    fifo_B_B_IO_L2_in_1_read : OUT STD_LOGIC;
    fifo_B_PE_0_1_din : OUT STD_LOGIC_VECTOR (63 downto 0);
    fifo_B_PE_0_1_num_data_valid : IN STD_LOGIC_VECTOR (1 downto 0);
    fifo_B_PE_0_1_fifo_cap : IN STD_LOGIC_VECTOR (1 downto 0);
    fifo_B_PE_0_1_full_n : IN STD_LOGIC;
    fifo_B_PE_0_1_write : OUT STD_LOGIC );
end;


architecture behav of kernel0_B_IO_L2_in_boundary is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (5 downto 0) := "000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (5 downto 0) := "000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (5 downto 0) := "010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";

attribute shreg_extract : string;
    signal real_start : STD_LOGIC;
    signal start_once_reg : STD_LOGIC := '0';
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal internal_ap_ready : STD_LOGIC;
    signal c0_2_fu_171_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal c0_2_reg_221 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal c1_1_fu_183_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal c1_1_reg_229 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal c2_4_fu_199_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal c2_4_reg_237 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal arb_fu_205_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_done : STD_LOGIC;
    signal arb_1_reg_104 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_B_IO_L2_in_intra_trans_fu_140_ap_done : STD_LOGIC;
    signal ap_block_state5_on_subcall_done : BOOLEAN;
    signal local_B_ping_ce0 : STD_LOGIC;
    signal local_B_ping_q0 : STD_LOGIC_VECTOR (511 downto 0);
    signal local_B_ping_ce1 : STD_LOGIC;
    signal local_B_ping_we1 : STD_LOGIC;
    signal local_B_pong_ce0 : STD_LOGIC;
    signal local_B_pong_q0 : STD_LOGIC_VECTOR (511 downto 0);
    signal local_B_pong_ce1 : STD_LOGIC;
    signal local_B_pong_we1 : STD_LOGIC;
    signal grp_B_IO_L2_in_intra_trans_fu_140_ap_start : STD_LOGIC;
    signal grp_B_IO_L2_in_intra_trans_fu_140_ap_idle : STD_LOGIC;
    signal grp_B_IO_L2_in_intra_trans_fu_140_ap_ready : STD_LOGIC;
    signal grp_B_IO_L2_in_intra_trans_fu_140_local_B_address0 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_B_IO_L2_in_intra_trans_fu_140_local_B_ce0 : STD_LOGIC;
    signal grp_B_IO_L2_in_intra_trans_fu_140_local_B_q0 : STD_LOGIC_VECTOR (511 downto 0);
    signal grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_din : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_write : STD_LOGIC;
    signal grp_B_IO_L2_in_intra_trans_fu_140_intra_trans_en : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start : STD_LOGIC;
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_idle : STD_LOGIC;
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_ready : STD_LOGIC;
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_fifo_B_B_IO_L2_in_1_read : STD_LOGIC;
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_address1 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_ce1 : STD_LOGIC;
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_we1 : STD_LOGIC;
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_d1 : STD_LOGIC_VECTOR (511 downto 0);
    signal intra_trans_en_reg_66 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal icmp_ln616_fu_177_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal intra_trans_en_1_reg_80 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln615_fu_165_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln617_fu_193_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal c1_reg_93 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_phi_mux_arb_1_phi_fu_108_p4 : STD_LOGIC_VECTOR (0 downto 0);
    signal intra_trans_en_2_reg_116 : STD_LOGIC_VECTOR (0 downto 0);
    signal c2_reg_129 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_B_IO_L2_in_intra_trans_fu_140_ap_start_reg : STD_LOGIC := '0';
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start_reg : STD_LOGIC := '0';
    signal c0_fu_54 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_ST_fsm_state1_blk : STD_LOGIC;
    signal ap_ST_fsm_state2_blk : STD_LOGIC;
    signal ap_ST_fsm_state3_blk : STD_LOGIC;
    signal ap_ST_fsm_state4_blk : STD_LOGIC;
    signal ap_ST_fsm_state5_blk : STD_LOGIC;
    signal ap_ST_fsm_state6_blk : STD_LOGIC;
    signal ap_ce_reg : STD_LOGIC;

    component kernel0_B_IO_L2_in_intra_trans IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        local_B_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
        local_B_ce0 : OUT STD_LOGIC;
        local_B_q0 : IN STD_LOGIC_VECTOR (511 downto 0);
        fifo_B_PE_0_1_din : OUT STD_LOGIC_VECTOR (63 downto 0);
        fifo_B_PE_0_1_num_data_valid : IN STD_LOGIC_VECTOR (1 downto 0);
        fifo_B_PE_0_1_fifo_cap : IN STD_LOGIC_VECTOR (1 downto 0);
        fifo_B_PE_0_1_full_n : IN STD_LOGIC;
        fifo_B_PE_0_1_write : OUT STD_LOGIC;
        intra_trans_en : IN STD_LOGIC_VECTOR (0 downto 0) );
    end component;


    component kernel0_B_IO_L2_in_inter_trans_boundary IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        fifo_B_B_IO_L2_in_1_dout : IN STD_LOGIC_VECTOR (511 downto 0);
        fifo_B_B_IO_L2_in_1_num_data_valid : IN STD_LOGIC_VECTOR (1 downto 0);
        fifo_B_B_IO_L2_in_1_fifo_cap : IN STD_LOGIC_VECTOR (1 downto 0);
        fifo_B_B_IO_L2_in_1_empty_n : IN STD_LOGIC;
        fifo_B_B_IO_L2_in_1_read : OUT STD_LOGIC;
        local_B_address1 : OUT STD_LOGIC_VECTOR (2 downto 0);
        local_B_ce1 : OUT STD_LOGIC;
        local_B_we1 : OUT STD_LOGIC;
        local_B_d1 : OUT STD_LOGIC_VECTOR (511 downto 0) );
    end component;


    component kernel0_A_IO_L2_in_local_A_ping_RAM_2P_BRAM_1R1W IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (2 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (511 downto 0);
        address1 : IN STD_LOGIC_VECTOR (2 downto 0);
        ce1 : IN STD_LOGIC;
        we1 : IN STD_LOGIC;
        d1 : IN STD_LOGIC_VECTOR (511 downto 0) );
    end component;



begin
    local_B_ping_U : component kernel0_A_IO_L2_in_local_A_ping_RAM_2P_BRAM_1R1W
    generic map (
        DataWidth => 512,
        AddressRange => 8,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => grp_B_IO_L2_in_intra_trans_fu_140_local_B_address0,
        ce0 => local_B_ping_ce0,
        q0 => local_B_ping_q0,
        address1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_address1,
        ce1 => local_B_ping_ce1,
        we1 => local_B_ping_we1,
        d1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_d1);

    local_B_pong_U : component kernel0_A_IO_L2_in_local_A_ping_RAM_2P_BRAM_1R1W
    generic map (
        DataWidth => 512,
        AddressRange => 8,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => grp_B_IO_L2_in_intra_trans_fu_140_local_B_address0,
        ce0 => local_B_pong_ce0,
        q0 => local_B_pong_q0,
        address1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_address1,
        ce1 => local_B_pong_ce1,
        we1 => local_B_pong_we1,
        d1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_d1);

    grp_B_IO_L2_in_intra_trans_fu_140 : component kernel0_B_IO_L2_in_intra_trans
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_B_IO_L2_in_intra_trans_fu_140_ap_start,
        ap_done => grp_B_IO_L2_in_intra_trans_fu_140_ap_done,
        ap_idle => grp_B_IO_L2_in_intra_trans_fu_140_ap_idle,
        ap_ready => grp_B_IO_L2_in_intra_trans_fu_140_ap_ready,
        local_B_address0 => grp_B_IO_L2_in_intra_trans_fu_140_local_B_address0,
        local_B_ce0 => grp_B_IO_L2_in_intra_trans_fu_140_local_B_ce0,
        local_B_q0 => grp_B_IO_L2_in_intra_trans_fu_140_local_B_q0,
        fifo_B_PE_0_1_din => grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_din,
        fifo_B_PE_0_1_num_data_valid => ap_const_lv2_0,
        fifo_B_PE_0_1_fifo_cap => ap_const_lv2_0,
        fifo_B_PE_0_1_full_n => fifo_B_PE_0_1_full_n,
        fifo_B_PE_0_1_write => grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_write,
        intra_trans_en => grp_B_IO_L2_in_intra_trans_fu_140_intra_trans_en);

    grp_B_IO_L2_in_inter_trans_boundary_fu_150 : component kernel0_B_IO_L2_in_inter_trans_boundary
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start,
        ap_done => grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_done,
        ap_idle => grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_idle,
        ap_ready => grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_ready,
        fifo_B_B_IO_L2_in_1_dout => fifo_B_B_IO_L2_in_1_dout,
        fifo_B_B_IO_L2_in_1_num_data_valid => ap_const_lv2_0,
        fifo_B_B_IO_L2_in_1_fifo_cap => ap_const_lv2_0,
        fifo_B_B_IO_L2_in_1_empty_n => fifo_B_B_IO_L2_in_1_empty_n,
        fifo_B_B_IO_L2_in_1_read => grp_B_IO_L2_in_inter_trans_boundary_fu_150_fifo_B_B_IO_L2_in_1_read,
        local_B_address1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_address1,
        local_B_ce1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_ce1,
        local_B_we1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_we1,
        local_B_d1 => grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_d1);





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
                elsif (((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start_reg <= ap_const_logic_0;
            else
                if ((((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_phi_mux_arb_1_phi_fu_108_p4 = ap_const_lv1_1) and (icmp_ln617_fu_193_p2 = ap_const_lv1_0)) or ((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_phi_mux_arb_1_phi_fu_108_p4 = ap_const_lv1_0) and (icmp_ln617_fu_193_p2 = ap_const_lv1_0)))) then 
                    grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_ready = ap_const_logic_1)) then 
                    grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_B_IO_L2_in_intra_trans_fu_140_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_B_IO_L2_in_intra_trans_fu_140_ap_start_reg <= ap_const_logic_0;
            else
                if ((((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_phi_mux_arb_1_phi_fu_108_p4 = ap_const_lv1_1) and (icmp_ln617_fu_193_p2 = ap_const_lv1_0)) or ((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_phi_mux_arb_1_phi_fu_108_p4 = ap_const_lv1_0) and (icmp_ln617_fu_193_p2 = ap_const_lv1_0)) or ((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln615_fu_165_p2 = ap_const_lv1_1)))) then 
                    grp_B_IO_L2_in_intra_trans_fu_140_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_B_IO_L2_in_intra_trans_fu_140_ap_ready = ap_const_logic_1)) then 
                    grp_B_IO_L2_in_intra_trans_fu_140_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    start_once_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                start_once_reg <= ap_const_logic_0;
            else
                if (((internal_ap_ready = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
                    start_once_reg <= ap_const_logic_1;
                elsif ((internal_ap_ready = ap_const_logic_1)) then 
                    start_once_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    arb_1_reg_104_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_boolean_0 = ap_block_state5_on_subcall_done))) then 
                arb_1_reg_104 <= arb_fu_205_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln616_fu_177_p2 = ap_const_lv1_0))) then 
                arb_1_reg_104 <= ap_const_lv1_0;
            end if; 
        end if;
    end process;

    c0_fu_54_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_done_reg = ap_const_logic_1) or (real_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                c0_fu_54 <= ap_const_lv3_0;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln616_fu_177_p2 = ap_const_lv1_1))) then 
                c0_fu_54 <= c0_2_reg_221;
            end if; 
        end if;
    end process;

    c1_reg_93_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln617_fu_193_p2 = ap_const_lv1_1))) then 
                c1_reg_93 <= c1_1_reg_229;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln615_fu_165_p2 = ap_const_lv1_0))) then 
                c1_reg_93 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    c2_reg_129_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_boolean_0 = ap_block_state5_on_subcall_done))) then 
                c2_reg_129 <= c2_4_reg_237;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln616_fu_177_p2 = ap_const_lv1_0))) then 
                c2_reg_129 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    intra_trans_en_1_reg_80_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln617_fu_193_p2 = ap_const_lv1_1))) then 
                intra_trans_en_1_reg_80 <= ap_const_lv1_1;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln615_fu_165_p2 = ap_const_lv1_0))) then 
                intra_trans_en_1_reg_80 <= intra_trans_en_reg_66;
            end if; 
        end if;
    end process;

    intra_trans_en_2_reg_116_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_boolean_0 = ap_block_state5_on_subcall_done))) then 
                intra_trans_en_2_reg_116 <= ap_const_lv1_1;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln616_fu_177_p2 = ap_const_lv1_0))) then 
                intra_trans_en_2_reg_116 <= intra_trans_en_1_reg_80;
            end if; 
        end if;
    end process;

    intra_trans_en_reg_66_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln616_fu_177_p2 = ap_const_lv1_1))) then 
                intra_trans_en_reg_66 <= ap_const_lv1_1;
            elsif ((not(((ap_done_reg = ap_const_logic_1) or (real_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                intra_trans_en_reg_66 <= ap_const_lv1_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                c0_2_reg_221 <= c0_2_fu_171_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                c1_1_reg_229 <= c1_1_fu_183_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                c2_4_reg_237 <= c2_4_fu_199_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (real_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, grp_B_IO_L2_in_intra_trans_fu_140_ap_done, ap_block_state5_on_subcall_done, icmp_ln616_fu_177_p2, icmp_ln615_fu_165_p2, icmp_ln617_fu_193_p2, ap_CS_fsm_state6)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_done_reg = ap_const_logic_1) or (real_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln615_fu_165_p2 = ap_const_lv1_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln616_fu_177_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln617_fu_193_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_boolean_0 = ap_block_state5_on_subcall_done))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state6 => 
                if (((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);

    ap_ST_fsm_state1_blk_assign_proc : process(real_start, ap_done_reg)
    begin
        if (((ap_done_reg = ap_const_logic_1) or (real_start = ap_const_logic_0))) then 
            ap_ST_fsm_state1_blk <= ap_const_logic_1;
        else 
            ap_ST_fsm_state1_blk <= ap_const_logic_0;
        end if; 
    end process;

    ap_ST_fsm_state2_blk <= ap_const_logic_0;
    ap_ST_fsm_state3_blk <= ap_const_logic_0;
    ap_ST_fsm_state4_blk <= ap_const_logic_0;

    ap_ST_fsm_state5_blk_assign_proc : process(ap_block_state5_on_subcall_done)
    begin
        if ((ap_const_boolean_1 = ap_block_state5_on_subcall_done)) then 
            ap_ST_fsm_state5_blk <= ap_const_logic_1;
        else 
            ap_ST_fsm_state5_blk <= ap_const_logic_0;
        end if; 
    end process;


    ap_ST_fsm_state6_blk_assign_proc : process(grp_B_IO_L2_in_intra_trans_fu_140_ap_done)
    begin
        if ((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_0)) then 
            ap_ST_fsm_state6_blk <= ap_const_logic_1;
        else 
            ap_ST_fsm_state6_blk <= ap_const_logic_0;
        end if; 
    end process;


    ap_block_state1_assign_proc : process(real_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_done_reg = ap_const_logic_1) or (real_start = ap_const_logic_0));
    end process;


    ap_block_state5_on_subcall_done_assign_proc : process(grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_done, arb_1_reg_104, grp_B_IO_L2_in_intra_trans_fu_140_ap_done)
    begin
                ap_block_state5_on_subcall_done <= (((arb_1_reg_104 = ap_const_lv1_1) and (grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_done = ap_const_logic_0)) or ((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_0) and (arb_1_reg_104 = ap_const_lv1_1)) or ((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_0) and (arb_1_reg_104 = ap_const_lv1_0)) or ((arb_1_reg_104 = ap_const_lv1_0) and (grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_done = ap_const_logic_0)));
    end process;


    ap_done_assign_proc : process(ap_done_reg, grp_B_IO_L2_in_intra_trans_fu_140_ap_done, ap_CS_fsm_state6)
    begin
        if (((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(real_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state1) and (real_start = ap_const_logic_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;

    ap_phi_mux_arb_1_phi_fu_108_p4 <= arb_1_reg_104;
    ap_ready <= internal_ap_ready;
    arb_fu_205_p2 <= (arb_1_reg_104 xor ap_const_lv1_1);
    c0_2_fu_171_p2 <= std_logic_vector(unsigned(c0_fu_54) + unsigned(ap_const_lv3_1));
    c1_1_fu_183_p2 <= std_logic_vector(unsigned(c1_reg_93) + unsigned(ap_const_lv3_1));
    c2_4_fu_199_p2 <= std_logic_vector(unsigned(c2_reg_129) + unsigned(ap_const_lv3_1));

    fifo_B_B_IO_L2_in_1_read_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_inter_trans_boundary_fu_150_fifo_B_B_IO_L2_in_1_read)
    begin
        if ((((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5)) or ((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            fifo_B_B_IO_L2_in_1_read <= grp_B_IO_L2_in_inter_trans_boundary_fu_150_fifo_B_B_IO_L2_in_1_read;
        else 
            fifo_B_B_IO_L2_in_1_read <= ap_const_logic_0;
        end if; 
    end process;

    fifo_B_PE_0_1_din <= grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_din;

    fifo_B_PE_0_1_write_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_write, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or ((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5)) or ((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            fifo_B_PE_0_1_write <= grp_B_IO_L2_in_intra_trans_fu_140_fifo_B_PE_0_1_write;
        else 
            fifo_B_PE_0_1_write <= ap_const_logic_0;
        end if; 
    end process;

    grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start <= grp_B_IO_L2_in_inter_trans_boundary_fu_150_ap_start_reg;
    grp_B_IO_L2_in_intra_trans_fu_140_ap_start <= grp_B_IO_L2_in_intra_trans_fu_140_ap_start_reg;

    grp_B_IO_L2_in_intra_trans_fu_140_intra_trans_en_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, intra_trans_en_2_reg_116, ap_CS_fsm_state6)
    begin
        if ((((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5)) or ((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            grp_B_IO_L2_in_intra_trans_fu_140_intra_trans_en <= intra_trans_en_2_reg_116;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            grp_B_IO_L2_in_intra_trans_fu_140_intra_trans_en <= ap_const_lv1_1;
        else 
            grp_B_IO_L2_in_intra_trans_fu_140_intra_trans_en <= "X";
        end if; 
    end process;


    grp_B_IO_L2_in_intra_trans_fu_140_local_B_q0_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, local_B_ping_q0, local_B_pong_q0, ap_CS_fsm_state6)
    begin
        if (((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            grp_B_IO_L2_in_intra_trans_fu_140_local_B_q0 <= local_B_pong_q0;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state6) or ((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            grp_B_IO_L2_in_intra_trans_fu_140_local_B_q0 <= local_B_ping_q0;
        else 
            grp_B_IO_L2_in_intra_trans_fu_140_local_B_q0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    icmp_ln615_fu_165_p2 <= "1" when (c0_fu_54 = ap_const_lv3_4) else "0";
    icmp_ln616_fu_177_p2 <= "1" when (c1_reg_93 = ap_const_lv3_4) else "0";
    icmp_ln617_fu_193_p2 <= "1" when (c2_reg_129 = ap_const_lv3_4) else "0";

    internal_ap_ready_assign_proc : process(grp_B_IO_L2_in_intra_trans_fu_140_ap_done, ap_CS_fsm_state6)
    begin
        if (((grp_B_IO_L2_in_intra_trans_fu_140_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            internal_ap_ready <= ap_const_logic_1;
        else 
            internal_ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    local_B_ping_ce0_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_intra_trans_fu_140_local_B_ce0, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or ((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            local_B_ping_ce0 <= grp_B_IO_L2_in_intra_trans_fu_140_local_B_ce0;
        else 
            local_B_ping_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    local_B_ping_ce1_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_ce1)
    begin
        if (((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            local_B_ping_ce1 <= grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_ce1;
        else 
            local_B_ping_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    local_B_ping_we1_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_we1)
    begin
        if (((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            local_B_ping_we1 <= grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_we1;
        else 
            local_B_ping_we1 <= ap_const_logic_0;
        end if; 
    end process;


    local_B_pong_ce0_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_intra_trans_fu_140_local_B_ce0)
    begin
        if (((arb_1_reg_104 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            local_B_pong_ce0 <= grp_B_IO_L2_in_intra_trans_fu_140_local_B_ce0;
        else 
            local_B_pong_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    local_B_pong_ce1_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_ce1)
    begin
        if (((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            local_B_pong_ce1 <= grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_ce1;
        else 
            local_B_pong_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    local_B_pong_we1_assign_proc : process(ap_CS_fsm_state5, arb_1_reg_104, grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_we1)
    begin
        if (((arb_1_reg_104 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            local_B_pong_we1 <= grp_B_IO_L2_in_inter_trans_boundary_fu_150_local_B_we1;
        else 
            local_B_pong_we1 <= ap_const_logic_0;
        end if; 
    end process;


    real_start_assign_proc : process(ap_start, start_full_n, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (start_full_n = ap_const_logic_0))) then 
            real_start <= ap_const_logic_0;
        else 
            real_start <= ap_start;
        end if; 
    end process;

    start_out <= real_start;

    start_write_assign_proc : process(real_start, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
            start_write <= ap_const_logic_1;
        else 
            start_write <= ap_const_logic_0;
        end if; 
    end process;

end behav;
