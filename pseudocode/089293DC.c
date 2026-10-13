/* Entry 0x089293DC | file offset 0x001263B4 | FUN_089293dc | bytes 84 */

undefined4 FUN_089293dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 1) || (0x22 < param_1)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_088cb1ec(DAT_089d712c + 0xf58,param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

