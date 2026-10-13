/* Entry 0x088F47E0 | file offset 0x000F17B8 | FUN_088f47e0 | bytes 144 */

uint FUN_088f47e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_089d712c + 0x1de04;
  if ((param_1 < 0) || (0x77 < param_1)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_088f44dc(param_1,1);
    if (iVar1 == 0) {
      iVar3 = FUN_088c5140(param_1);
      uVar2 = (int)(*(byte *)(iVar3 + 2) & 0xf0) >> 4;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + iVar3);
    }
  }
  return uVar2;
}

