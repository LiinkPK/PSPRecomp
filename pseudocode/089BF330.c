/* Entry 0x089BF330 | file offset 0x001BC308 | FUN_089bf330 | bytes 216 */

undefined4
FUN_089bf330(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_30 [4];
  
  if ((((param_1 != 0) && (param_5 != 0)) && (iVar1 = FUN_089beb74(param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_089bf300(param_2,param_3,param_4), iVar1 != 0)) {
    FUN_089bb460(param_1);
    local_30[0] = param_5;
    FUN_089bef84(local_30,iVar1,param_1);
    sceKernelDcacheWritebackAll();
    return 1;
  }
  return 0;
}

