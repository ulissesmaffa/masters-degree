1) comando no Docker:

./autosa ./autosa_tests/mm/kernel.c \
--config=./autosa_config/autosa_config.json \
--target=autosa_hls_c \
--output-dir=./autosa.tmp/output \
--sa-sizes="{kernel[]->space_time[3];kernel[]->array_part[16,16,16];kernel[]->latency[8,8];kernel[]->simd[2]}" \
--simd-info=./autosa_tests/mm/simd_info.json \
--host-serialize \
--hls

2) Copiar arquivos do docker para pc 
${AUTOSA_ROOT}/autosa.tmp/output/src
${AUTOSA_ROOT}/autosa_tests/mm/hls_script.tcl 

