/* Entry 0x08927AA0 | file offset 0x00124A78 | FUN_08927aa0 | bytes 156 */

undefined4 FUN_08927aa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = FUN_08927340(param_1,0,param_2);
  iVar2 = FUN_08925c90(DAT_089d8530,0,uVar1);
  uVar3 = 0xffffffff;
  if ((iVar2 != 0) &&
     ((uVar4 = (uint)*(short *)(iVar2 + 0xc), uVar4 == 0xffffffff ||
      ((*(uint *)(DAT_089d726c + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0)))) {
    uVar3 = uVar1;
  }
  return uVar3;
}

