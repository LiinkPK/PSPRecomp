/* Entry 0x0888795C | file offset 0x00084934 | FUN_0888795c | bytes 212 */

uint FUN_0888795c(int *param_1)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0xffffffff;
  uVar5 = uVar4;
  if (*param_1 == 7) {
    iVar3 = 0;
    if (0 < *(int *)(DAT_089d7350 + 0xc)) {
      psVar2 = DAT_089d7358;
      do {
        if (param_1[3] == (int)*psVar2) {
          return (int)psVar2[param_1[1]];
        }
        iVar3 = iVar3 + 1;
        psVar2 = psVar2 + 4;
      } while (iVar3 < *(int *)(DAT_089d7350 + 0xc));
    }
  }
  else {
    uVar5 = param_1[3];
    if (param_1[3] == 0xffffffff) {
      uVar1 = FUN_08887928();
      iVar3 = FUN_088bbd8c(uVar1);
      uVar5 = uVar4;
      if (iVar3 != 0) {
        uVar5 = (uint)*(byte *)(iVar3 + 4);
      }
    }
  }
  return uVar5;
}

