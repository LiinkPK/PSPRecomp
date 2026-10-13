/* Entry 0x0881F1C0 | file offset 0x0001C198 | FUN_0881f1c0 | bytes 200 */

undefined4 FUN_0881f1c0(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    if (((*(uint *)(*(int *)(param_2 + 4) + 0x380) & 1) == 1) &&
       ((*(uint *)(*(int *)(param_2 + 4) + 0x388) & 2) == 0)) {
      iVar1 = FUN_0881f70c(param_1,param_2 + 8);
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      iVar1 = FUN_08820420(param_1,param_2 + 0x24);
      if (iVar1 != 0) {
        return 0xfffffffd;
      }
      return 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

