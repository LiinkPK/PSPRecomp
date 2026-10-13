/* Entry 0x089B7B94 | file offset 0x001B4B6C | FUN_089b7b94 | bytes 168 */

undefined4 FUN_089b7b94(int param_1,int param_2)

{
  int iVar1;
  undefined1 *local_d0 [18];
  undefined1 auStack_88 [120];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    local_d0[0] = auStack_88;
    FUN_089ab7a0(auStack_88);
    FUN_089b72f4(local_d0,param_2);
    iVar1 = FUN_089abd28(auStack_88);
    if (iVar1 != 0) {
      FUN_089b54e4(local_d0,param_2,param_1);
      FUN_089abca0(auStack_88);
      sceKernelDcacheWritebackAll();
      return 1;
    }
  }
  return 0;
}

