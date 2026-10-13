/* Entry 0x08816868 | file offset 0x00013840 | FUN_08816868 | bytes 84 */

undefined4 FUN_08816868(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_08816e84(param_1);
    iVar1 = FUN_0881b210(param_1 + 4);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

