/* Entry 0x0890A984 | file offset 0x0010795C | FUN_0890a984 | bytes 152 */

undefined4 FUN_0890a984(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1[0x66] != 0) {
      FUN_0885c538(param_1[0x6e],param_1[0x66],0);
      param_1[0x66] = 0;
      param_1[0x67] = 0;
    }
    FUN_08903c58(param_1 + 1);
    iVar1 = FUN_0890314c(*param_1,FUN_0890b6a8);
    if (iVar1 == 1) {
      param_1[100] = 4;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

