set_param project.enableReportConfiguration 0
load_feature core
current_fileset
xsim {sa_compute} -view {{sa_compute_dataflow_ana.wcfg}} -tclbatch {sa_compute.tcl} -protoinst {sa_compute.protoinst}
