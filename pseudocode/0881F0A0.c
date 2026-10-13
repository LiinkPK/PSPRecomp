/* Entry 0x0881F0A0 | file offset 0x0001C078 | FUN_0881f0a0 | bytes 136 */

undefined4 FUN_0881f0a0(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0881f068();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0881f4d8(param_1 + 8,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_0882028c(param_1 + 0x24,param_2);
      if (iVar1 == 0) {
        *(int *)(param_1 + 4) = param_2;
        *param_1 = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

