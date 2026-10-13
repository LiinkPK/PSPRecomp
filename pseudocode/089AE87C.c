/* Entry 0x089AE87C | file offset 0x001AB854 | FUN_089ae87c | bytes 204 */

undefined4 FUN_089ae87c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar1 = FUN_089ad3c4();
    if ((iVar1 != 0) && (FUN_089ad028(param_2,param_4), 0 < param_2)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_089ae760(0,param_1,param_3,param_4);
        param_1 = param_1 + 0xd0;
      } while (param_2 != iVar1);
    }
    return 1;
  }
  return 0;
}

