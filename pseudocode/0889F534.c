/* Entry 0x0889F534 | file offset 0x0009C50C | FUN_0889f534 | bytes 180 */

undefined4 FUN_0889f534(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_089359e8(param_2 + 0x1c);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      fVar3 = (float)(int)*(char *)(param_2 + 0xd) * 0.01;
      iVar1 = FUN_0889fd38(fVar3,0,param_2 + 0x1c,0,(*(byte *)(param_2 + 0xc) & 4) != 0);
      if (iVar1 == 1) {
        uVar2 = 1;
        DAT_089d6c44 = fVar3;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

