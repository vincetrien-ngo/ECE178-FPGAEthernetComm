module NIOS2 (
		input  wire        clk_clk,                               //                             clk.clk
		output wire [8:0]  greenleds_export,                      //                       greenleds.export
		input  wire [3:0]  push_buttons_export,                   //                    push_buttons.export
		output wire [17:0] redleds_export,                        //                         redleds.export
		input  wire        reset_reset,                           //                           reset.reset
		output wire        sdram_clk_clk,                         //                       sdram_clk.clk
		output wire [12:0] sdram_wire_addr,                       //                      sdram_wire.addr
		output wire [1:0]  sdram_wire_ba,                         //                                .ba
		output wire        sdram_wire_cas_n,                      //                                .cas_n
		output wire        sdram_wire_cke,                        //                                .cke
		output wire        sdram_wire_cs_n,                       //                                .cs_n
		inout  wire [31:0] sdram_wire_dq,                         //                                .dq
		output wire [3:0]  sdram_wire_dqm,                        //                                .dqm
		output wire        sdram_wire_ras_n,                      //                                .ras_n
		output wire        sdram_wire_we_n,                       //                                .we_n
		output wire [6:0]  seg7_0_export,                         //                          seg7_0.export
		output wire [6:0]  seg7_1_export,                         //                          seg7_1.export
		output wire [6:0]  seg7_2_export,                         //                          seg7_2.export
		output wire [6:0]  seg7_3_export,                         //                          seg7_3.export
		output wire [6:0]  seg7_4_export,                         //                          seg7_4.export
		output wire [6:0]  seg7_5_export,                         //                          seg7_5.export
		output wire [6:0]  seg7_6_export,                         //                          seg7_6.export
		output wire [6:0]  seg7_7_export,                         //                          seg7_7.export
		input  wire [17:0] switches_export,                       //                        switches.export
		output wire        tse_mac_mdio_connection_mdc,           //         tse_mac_mdio_connection.mdc
		input  wire        tse_mac_mdio_connection_mdio_in,       //                                .mdio_in
		output wire        tse_mac_mdio_connection_mdio_out,      //                                .mdio_out
		output wire        tse_mac_mdio_connection_mdio_oen,      //                                .mdio_oen
		output wire        tse_mac_misc_connection_magic_wakeup,  //         tse_mac_misc_connection.magic_wakeup
		input  wire        tse_mac_misc_connection_magic_sleep_n, //                                .magic_sleep_n
		input  wire        tse_mac_misc_connection_ff_tx_crc_fwd, //                                .ff_tx_crc_fwd
		output wire        tse_mac_misc_connection_ff_tx_septy,   //                                .ff_tx_septy
		output wire        tse_mac_misc_connection_tx_ff_uflow,   //                                .tx_ff_uflow
		output wire        tse_mac_misc_connection_ff_tx_a_full,  //                                .ff_tx_a_full
		output wire        tse_mac_misc_connection_ff_tx_a_empty, //                                .ff_tx_a_empty
		output wire [17:0] tse_mac_misc_connection_rx_err_stat,   //                                .rx_err_stat
		output wire [3:0]  tse_mac_misc_connection_rx_frm_type,   //                                .rx_frm_type
		output wire        tse_mac_misc_connection_ff_rx_dsav,    //                                .ff_rx_dsav
		output wire        tse_mac_misc_connection_ff_rx_a_full,  //                                .ff_rx_a_full
		output wire        tse_mac_misc_connection_ff_rx_a_empty, //                                .ff_rx_a_empty
		input  wire [3:0]  tse_mac_rgmii_connection_rgmii_in,     //        tse_mac_rgmii_connection.rgmii_in
		output wire [3:0]  tse_mac_rgmii_connection_rgmii_out,    //                                .rgmii_out
		input  wire        tse_mac_rgmii_connection_rx_control,   //                                .rx_control
		output wire        tse_mac_rgmii_connection_tx_control,   //                                .tx_control
		input  wire        tse_mac_status_connection_set_10,      //       tse_mac_status_connection.set_10
		input  wire        tse_mac_status_connection_set_1000,    //                                .set_1000
		output wire        tse_mac_status_connection_eth_mode,    //                                .eth_mode
		output wire        tse_mac_status_connection_ena_10,      //                                .ena_10
		input  wire        tse_pcs_mac_rx_clock_connection_clk,   // tse_pcs_mac_rx_clock_connection.clk
		input  wire        tse_pcs_mac_tx_clock_connection_clk    // tse_pcs_mac_tx_clock_connection.clk
	);
		
NIOSII mysys (
			.clk_clk(clk_clk),                             //                             clk.clk
			.greenleds_export(greenleds_export),                      //                       greenleds.export
			.push_buttons_export(push_buttons_export),                   //                    push_buttons.export
			.redleds_export(redleds_export),                        //                         redleds.export
			.reset_reset(reset_reset),                           //                           reset.reset
			.sdram_clk_clk(sdram_clk_clk),                         //                       sdram_clk.clk
			.sdram_wire_addr(sdram_wire_addr),                       //                      sdram_wire.addr
			.sdram_wire_ba(sdram_wire_ba),                         //                                .ba
			.sdram_wire_cas_n(sdram_wire_cas_n),                      //                                .cas_n
			.sdram_wire_cke(sdram_wire_cke),                        //                                .cke
			.sdram_wire_cs_n(sdram_wire_cs_n),                       //                                .cs_n
			.sdram_wire_dq(sdram_wire_dq),                         //                                .dq
			.sdram_wire_dqm(sdram_wire_dqm),                        //                                .dqm
			.sdram_wire_ras_n(sdram_wire_ras_n),                      //                                .ras_n
			.sdram_wire_we_n(sdram_wire_we_n),                       //                                .we_n
			.seg7_0_export(seg7_0_export),                         //                          seg7_0.export
			.seg7_1_export(seg7_1_export),                         //                          seg7_1.export
			.seg7_2_export(seg7_2_export),                         //                          seg7_2.export
			.seg7_3_export(seg7_3_export),                         //                          seg7_3.export
			.seg7_4_export(seg7_4_export),                         //                          seg7_4.export
			.seg7_5_export(seg7_5_export),                         //                          seg7_5.export
			.seg7_6_export(seg7_6_export),                         //                          seg7_6.export
			.seg7_7_export(seg7_7_export),                         //                          seg7_7.export
			.switches_export(switches_export),                       //                        switches.export
			.tse_mac_mdio_connection_mdc(tse_mac_mdio_connection_mdc),           //         tse_mac_mdio_connection.mdc
			.tse_mac_mdio_connection_mdio_in(tse_mac_mdio_connection_mdio_in),       //                                .mdio_in
			.tse_mac_mdio_connection_mdio_out(tse_mac_mdio_connection_mdio_out),      //                                .mdio_out
			.tse_mac_mdio_connection_mdio_oen(tse_mac_mdio_connection_mdio_oen),      //                                .mdio_oen
			.tse_mac_misc_connection_magic_wakeup(tse_mac_misc_connection_magic_wakeup),  //         tse_mac_misc_connection.magic_wakeup
			.tse_mac_misc_connection_magic_sleep_n(tse_mac_misc_connection_magic_sleep_n), //                                .magic_sleep_n
			.tse_mac_misc_connection_ff_tx_crc_fwd(tse_mac_misc_connection_ff_tx_crc_fwd), //                                .ff_tx_crc_fwd
			.tse_mac_misc_connection_ff_tx_septy(tse_mac_misc_connection_ff_tx_septy),   //                                .ff_tx_septy
			.tse_mac_misc_connection_tx_ff_uflow(tse_mac_misc_connection_tx_ff_uflow),   //                                .tx_ff_uflow
			.tse_mac_misc_connection_ff_tx_a_full(tse_mac_misc_connection_ff_tx_a_full),  //                                .ff_tx_a_full
			.tse_mac_misc_connection_ff_tx_a_empty(tse_mac_misc_connection_ff_tx_a_empty), //                                .ff_tx_a_empty
			.tse_mac_misc_connection_rx_err_stat(tse_mac_misc_connection_rx_err_stat),   //                                .rx_err_stat
			.tse_mac_misc_connection_rx_frm_type(tse_mac_misc_connection_rx_frm_type),   //                                .rx_frm_type
			.tse_mac_misc_connection_ff_rx_dsav(tse_mac_misc_connection_ff_rx_dsav),    //                                .ff_rx_dsav
			.tse_mac_misc_connection_ff_rx_a_full(tse_mac_misc_connection_ff_rx_a_full),  //                                .ff_rx_a_full
			.tse_mac_misc_connection_ff_rx_a_empty(tse_mac_misc_connection_ff_rx_a_empty), //                                .ff_rx_a_empty
			.tse_mac_rgmii_connection_rgmii_in(tse_mac_rgmii_connection_rgmii_in),     //        tse_mac_rgmii_connection.rgmii_in
			.tse_mac_rgmii_connection_rgmii_out(tse_mac_rgmii_connection_rgmii_out),    //                                .rgmii_out
			.tse_mac_rgmii_connection_rx_control(tse_mac_rgmii_connection_rx_control),   //                                .rx_control
			.tse_mac_rgmii_connection_tx_control(tse_mac_rgmii_connection_tx_control),   //                                .tx_control
			.tse_mac_status_connection_set_10(tse_mac_status_connection_set_10),      //       tse_mac_status_connection.set_10
			.tse_mac_status_connection_set_1000(tse_mac_status_connection_set_1000),    //                                .set_1000
			.tse_mac_status_connection_eth_mode(tse_mac_status_connection_eth_mode),    //                                .eth_mode
			.tse_mac_status_connection_ena_10(tse_mac_status_connection_ena_10),      //                                .ena_10
			.tse_pcs_mac_rx_clock_connection_clk(tse_pcs_mac_rx_clock_connection_clk),   // tse_pcs_mac_rx_clock_connection.clk
			.tse_pcs_mac_tx_clock_connection_clk(tse_pcs_mac_tx_clock_connection_clk)    // tse_pcs_mac_tx_clock_connection.clk
	
);

endmodule 