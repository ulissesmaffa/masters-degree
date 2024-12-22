set_param project.enableReportConfiguration 0
load_feature core
current_fileset
xsim {addsub} -view {{addsub_dataflow_ana.wcfg}} -tclbatch {addsub.tcl} -protoinst {addsub.protoinst}
