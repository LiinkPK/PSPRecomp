/* Entry 0x0881F128 | file offset 0x0001C100 | FUN_0881f128 | bytes 152 */

undefined4 FUN_0881f128(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0881f688(param_1 + 8);
    if (iVar1 == 0) {
      iVar1 = FUN_0882039c(param_1 + 0x24);
      if (iVar1 == 0) {
        if (((*(ushort *)(*(int *)(*(int *)(param_1 + 4) + 0x564) + 10) & 4) == 0) ||
           (iVar1 = FUN_0881f288(param_1,1), iVar1 == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xfffffffb;
        }
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

