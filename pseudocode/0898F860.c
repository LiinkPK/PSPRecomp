/* Entry 0x0898F860 | file offset 0x0018C838 | FUN_0898f860 | bytes 132 */

void FUN_0898f860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0898f654();
  if (iVar1 != 0) {
    FUN_0898ee14(param_2,param_4,param_1 + 0xaa,0,1);
    FUN_0898ee94(0,0,param_2,param_3,(int)*(short *)(param_1 + 0x9e),1);
  }
  return;
}

