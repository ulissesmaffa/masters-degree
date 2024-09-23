<project xmlns="com.autoesl.autopilot.project" name="hls_prj" top="kernel0">
    <files>
        <file name="../../src/kernel_host.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="src/kernel_kernel.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="src/kernel_kernel.h" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags="" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

