set_param project.enableReportConfiguration 0
load_feature core
current_fileset
xsim {fir} -view {{fir_dataflow_ana.wcfg}} -tclbatch {fir.tcl} -protoinst {fir.protoinst}
