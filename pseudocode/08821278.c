/* Entry 0x08821278 | file offset 0x0001E250 | FUN_08821278 | bytes 148 */

undefined4 FUN_08821278(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_08822d80(*(int *)(param_1 + 4) + 0x570);
    if (iVar1 == 1) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_0881baa8();
      if (*(int *)(iVar1 + 0x70) == 0) {
        uVar2 = 0xfffffffe;
      }
      else {
        FUN_08821518(param_1);
        FUN_088217f8(param_1);
        FUN_088216e0(param_1);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

