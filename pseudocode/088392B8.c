/* Entry 0x088392B8 | file offset 0x00036290 | FUN_088392b8 | bytes 92 */

undefined4 FUN_088392b8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_08838074();
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_08838160(param_1);
    if (iVar1 == 1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

