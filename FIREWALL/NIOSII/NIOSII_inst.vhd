	component NIOSII is
		port (
			clk_clk                               : in    std_logic                     := 'X';             -- clk
			greenleds_export                      : out   std_logic_vector(8 downto 0);                     -- export
			push_buttons_export                   : in    std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			redleds_export                        : out   std_logic_vector(17 downto 0);                    -- export
			reset_reset                           : in    std_logic                     := 'X';             -- reset
			sdram_clk_clk                         : out   std_logic;                                        -- clk
			sdram_wire_addr                       : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_wire_ba                         : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_wire_cas_n                      : out   std_logic;                                        -- cas_n
			sdram_wire_cke                        : out   std_logic;                                        -- cke
			sdram_wire_cs_n                       : out   std_logic;                                        -- cs_n
			sdram_wire_dq                         : inout std_logic_vector(31 downto 0) := (others => 'X'); -- dq
			sdram_wire_dqm                        : out   std_logic_vector(3 downto 0);                     -- dqm
			sdram_wire_ras_n                      : out   std_logic;                                        -- ras_n
			sdram_wire_we_n                       : out   std_logic;                                        -- we_n
			seg7_0_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_1_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_2_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_3_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_4_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_5_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_6_export                         : out   std_logic_vector(6 downto 0);                     -- export
			seg7_7_export                         : out   std_logic_vector(6 downto 0);                     -- export
			switches_export                       : in    std_logic_vector(17 downto 0) := (others => 'X'); -- export
			tse_mac_mdio_connection_mdc           : out   std_logic;                                        -- mdc
			tse_mac_mdio_connection_mdio_in       : in    std_logic                     := 'X';             -- mdio_in
			tse_mac_mdio_connection_mdio_out      : out   std_logic;                                        -- mdio_out
			tse_mac_mdio_connection_mdio_oen      : out   std_logic;                                        -- mdio_oen
			tse_mac_misc_connection_magic_wakeup  : out   std_logic;                                        -- magic_wakeup
			tse_mac_misc_connection_magic_sleep_n : in    std_logic                     := 'X';             -- magic_sleep_n
			tse_mac_misc_connection_ff_tx_crc_fwd : in    std_logic                     := 'X';             -- ff_tx_crc_fwd
			tse_mac_misc_connection_ff_tx_septy   : out   std_logic;                                        -- ff_tx_septy
			tse_mac_misc_connection_tx_ff_uflow   : out   std_logic;                                        -- tx_ff_uflow
			tse_mac_misc_connection_ff_tx_a_full  : out   std_logic;                                        -- ff_tx_a_full
			tse_mac_misc_connection_ff_tx_a_empty : out   std_logic;                                        -- ff_tx_a_empty
			tse_mac_misc_connection_rx_err_stat   : out   std_logic_vector(17 downto 0);                    -- rx_err_stat
			tse_mac_misc_connection_rx_frm_type   : out   std_logic_vector(3 downto 0);                     -- rx_frm_type
			tse_mac_misc_connection_ff_rx_dsav    : out   std_logic;                                        -- ff_rx_dsav
			tse_mac_misc_connection_ff_rx_a_full  : out   std_logic;                                        -- ff_rx_a_full
			tse_mac_misc_connection_ff_rx_a_empty : out   std_logic;                                        -- ff_rx_a_empty
			tse_mac_rgmii_connection_rgmii_in     : in    std_logic_vector(3 downto 0)  := (others => 'X'); -- rgmii_in
			tse_mac_rgmii_connection_rgmii_out    : out   std_logic_vector(3 downto 0);                     -- rgmii_out
			tse_mac_rgmii_connection_rx_control   : in    std_logic                     := 'X';             -- rx_control
			tse_mac_rgmii_connection_tx_control   : out   std_logic;                                        -- tx_control
			tse_mac_status_connection_set_10      : in    std_logic                     := 'X';             -- set_10
			tse_mac_status_connection_set_1000    : in    std_logic                     := 'X';             -- set_1000
			tse_mac_status_connection_eth_mode    : out   std_logic;                                        -- eth_mode
			tse_mac_status_connection_ena_10      : out   std_logic;                                        -- ena_10
			tse_pcs_mac_rx_clock_connection_clk   : in    std_logic                     := 'X';             -- clk
			tse_pcs_mac_tx_clock_connection_clk   : in    std_logic                     := 'X'              -- clk
		);
	end component NIOSII;

	u0 : component NIOSII
		port map (
			clk_clk                               => CONNECTED_TO_clk_clk,                               --                             clk.clk
			greenleds_export                      => CONNECTED_TO_greenleds_export,                      --                       greenleds.export
			push_buttons_export                   => CONNECTED_TO_push_buttons_export,                   --                    push_buttons.export
			redleds_export                        => CONNECTED_TO_redleds_export,                        --                         redleds.export
			reset_reset                           => CONNECTED_TO_reset_reset,                           --                           reset.reset
			sdram_clk_clk                         => CONNECTED_TO_sdram_clk_clk,                         --                       sdram_clk.clk
			sdram_wire_addr                       => CONNECTED_TO_sdram_wire_addr,                       --                      sdram_wire.addr
			sdram_wire_ba                         => CONNECTED_TO_sdram_wire_ba,                         --                                .ba
			sdram_wire_cas_n                      => CONNECTED_TO_sdram_wire_cas_n,                      --                                .cas_n
			sdram_wire_cke                        => CONNECTED_TO_sdram_wire_cke,                        --                                .cke
			sdram_wire_cs_n                       => CONNECTED_TO_sdram_wire_cs_n,                       --                                .cs_n
			sdram_wire_dq                         => CONNECTED_TO_sdram_wire_dq,                         --                                .dq
			sdram_wire_dqm                        => CONNECTED_TO_sdram_wire_dqm,                        --                                .dqm
			sdram_wire_ras_n                      => CONNECTED_TO_sdram_wire_ras_n,                      --                                .ras_n
			sdram_wire_we_n                       => CONNECTED_TO_sdram_wire_we_n,                       --                                .we_n
			seg7_0_export                         => CONNECTED_TO_seg7_0_export,                         --                          seg7_0.export
			seg7_1_export                         => CONNECTED_TO_seg7_1_export,                         --                          seg7_1.export
			seg7_2_export                         => CONNECTED_TO_seg7_2_export,                         --                          seg7_2.export
			seg7_3_export                         => CONNECTED_TO_seg7_3_export,                         --                          seg7_3.export
			seg7_4_export                         => CONNECTED_TO_seg7_4_export,                         --                          seg7_4.export
			seg7_5_export                         => CONNECTED_TO_seg7_5_export,                         --                          seg7_5.export
			seg7_6_export                         => CONNECTED_TO_seg7_6_export,                         --                          seg7_6.export
			seg7_7_export                         => CONNECTED_TO_seg7_7_export,                         --                          seg7_7.export
			switches_export                       => CONNECTED_TO_switches_export,                       --                        switches.export
			tse_mac_mdio_connection_mdc           => CONNECTED_TO_tse_mac_mdio_connection_mdc,           --         tse_mac_mdio_connection.mdc
			tse_mac_mdio_connection_mdio_in       => CONNECTED_TO_tse_mac_mdio_connection_mdio_in,       --                                .mdio_in
			tse_mac_mdio_connection_mdio_out      => CONNECTED_TO_tse_mac_mdio_connection_mdio_out,      --                                .mdio_out
			tse_mac_mdio_connection_mdio_oen      => CONNECTED_TO_tse_mac_mdio_connection_mdio_oen,      --                                .mdio_oen
			tse_mac_misc_connection_magic_wakeup  => CONNECTED_TO_tse_mac_misc_connection_magic_wakeup,  --         tse_mac_misc_connection.magic_wakeup
			tse_mac_misc_connection_magic_sleep_n => CONNECTED_TO_tse_mac_misc_connection_magic_sleep_n, --                                .magic_sleep_n
			tse_mac_misc_connection_ff_tx_crc_fwd => CONNECTED_TO_tse_mac_misc_connection_ff_tx_crc_fwd, --                                .ff_tx_crc_fwd
			tse_mac_misc_connection_ff_tx_septy   => CONNECTED_TO_tse_mac_misc_connection_ff_tx_septy,   --                                .ff_tx_septy
			tse_mac_misc_connection_tx_ff_uflow   => CONNECTED_TO_tse_mac_misc_connection_tx_ff_uflow,   --                                .tx_ff_uflow
			tse_mac_misc_connection_ff_tx_a_full  => CONNECTED_TO_tse_mac_misc_connection_ff_tx_a_full,  --                                .ff_tx_a_full
			tse_mac_misc_connection_ff_tx_a_empty => CONNECTED_TO_tse_mac_misc_connection_ff_tx_a_empty, --                                .ff_tx_a_empty
			tse_mac_misc_connection_rx_err_stat   => CONNECTED_TO_tse_mac_misc_connection_rx_err_stat,   --                                .rx_err_stat
			tse_mac_misc_connection_rx_frm_type   => CONNECTED_TO_tse_mac_misc_connection_rx_frm_type,   --                                .rx_frm_type
			tse_mac_misc_connection_ff_rx_dsav    => CONNECTED_TO_tse_mac_misc_connection_ff_rx_dsav,    --                                .ff_rx_dsav
			tse_mac_misc_connection_ff_rx_a_full  => CONNECTED_TO_tse_mac_misc_connection_ff_rx_a_full,  --                                .ff_rx_a_full
			tse_mac_misc_connection_ff_rx_a_empty => CONNECTED_TO_tse_mac_misc_connection_ff_rx_a_empty, --                                .ff_rx_a_empty
			tse_mac_rgmii_connection_rgmii_in     => CONNECTED_TO_tse_mac_rgmii_connection_rgmii_in,     --        tse_mac_rgmii_connection.rgmii_in
			tse_mac_rgmii_connection_rgmii_out    => CONNECTED_TO_tse_mac_rgmii_connection_rgmii_out,    --                                .rgmii_out
			tse_mac_rgmii_connection_rx_control   => CONNECTED_TO_tse_mac_rgmii_connection_rx_control,   --                                .rx_control
			tse_mac_rgmii_connection_tx_control   => CONNECTED_TO_tse_mac_rgmii_connection_tx_control,   --                                .tx_control
			tse_mac_status_connection_set_10      => CONNECTED_TO_tse_mac_status_connection_set_10,      --       tse_mac_status_connection.set_10
			tse_mac_status_connection_set_1000    => CONNECTED_TO_tse_mac_status_connection_set_1000,    --                                .set_1000
			tse_mac_status_connection_eth_mode    => CONNECTED_TO_tse_mac_status_connection_eth_mode,    --                                .eth_mode
			tse_mac_status_connection_ena_10      => CONNECTED_TO_tse_mac_status_connection_ena_10,      --                                .ena_10
			tse_pcs_mac_rx_clock_connection_clk   => CONNECTED_TO_tse_pcs_mac_rx_clock_connection_clk,   -- tse_pcs_mac_rx_clock_connection.clk
			tse_pcs_mac_tx_clock_connection_clk   => CONNECTED_TO_tse_pcs_mac_tx_clock_connection_clk    -- tse_pcs_mac_tx_clock_connection.clk
		);

