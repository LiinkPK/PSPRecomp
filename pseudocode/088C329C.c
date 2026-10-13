/* Entry 0x088C329C | file offset 0x000C0274 | FUN_088c329c | bytes 168 */

bool FUN_088c329c(uint *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 100;
  iVar3 = 0;
  do {
    iVar1 = FUN_088cb164(param_2,(int)(char)(&DAT_089cbb7a)[iVar3]);
    if (*(byte *)(iVar1 + 1) < uVar4) {
      uVar4 = (uint)*(byte *)(iVar1 + 1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1f);
  *param_1 = uVar4;
  uVar2 = *param_3;
  param_1[1] = uVar2;
  return (int)uVar2 <= (int)uVar4;
}

