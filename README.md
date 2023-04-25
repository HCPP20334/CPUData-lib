# CPUData-lib ver 1.0 
Writtein to C++ (C++11) 
Join Libs :gdi32.lib (libgdi32.a devC++),psapi.lib (libpsapi.a devC++)
EN: Lib To Call Informations on CPU
dDataCPU(int64_t fCode);
 -- Code 1 numaNodeCount
 -- Code 2 processorPackageCount
 -- Code 3 processorCoreCount
 -- Code 4 logicalProcessorCount
 -- Code 5 processorL1CacheCount
 -- Code 6 processorL2CacheCount
 -- Code 7 processorL3CacheCount
  -- VRAMBufferTest.exe  - test lib. Project on DevC++ 
 RUS: Библиотека которая получает информацию о процессоре 
 Для работы нужно подключить к проекту gdi32.lib (libgdi32.a devC++),psapi.lib (libpsapi.a devC++)
 Функция:
 int64_t dDataCPU(int64_t fCode);
  -- Code 1 numaNodeCount        - Количество NUMA узлов (участок памяти который распределяется неравномрно)
 -- Code 2 processorPackageCount - Количество тепловых пакетов ЦП
 -- Code 3 processorCoreCount    - Количество Ядер
 -- Code 4 logicalProcessorCount - Количество потоков
 -- Code 5 processorL1CacheCount - Буфер L1
 -- Code 6 processorL2CacheCount - Буфер L2
 -- Code 7 processorL3CacheCount - Буфер L3
 -- VRAMBufferTest.exe  - это тест библиотеки с исходным кодом но это проект DevC++
 -- by HCPP Studio -- 
