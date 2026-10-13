/* Entry 0x08804040 | file offset 0x00001018 | module_start | bytes 288 */

/* WARNING: Removing unreachable block (ram,0x08804154) */
/* WARNING: Removing unreachable block (ram,0x08804088) */
/* WARNING: Removing unreachable block (ram,0x088040fc) */

bool module_start(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  sceKernelSetCompiledSdkVersion603_605(0x6030010);
  sceKernelSetCompilerVersion(0x30306);
  iVar1 = sceKernelCreateThread
                    (s_ffst_thread_089d8598,Application_MainThread,DAT_089d85a8,DAT_089d85a4 << 10,
                     0x80000000,0);
  if (iVar1 >= 0) {
    sceKernelStartThread(iVar1,param_1,param_2);
  }
  return iVar1 < 0;
}

