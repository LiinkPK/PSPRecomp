/* Entry 0x0882130C | file offset 0x0001E2E4 | FUN_0882130c | bytes 420 */

undefined4 FUN_0882130c(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (int)param_1[1];
    iVar3 = 0;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        *(byte *)(*(int *)(param_1 + 0xc) + iVar4) =
             *(byte *)(*(int *)(param_1 + 0xc) + iVar4) & 0xfc;
        *(byte *)(*(int *)(param_1 + 0xc) + iVar4) =
             *(byte *)(*(int *)(param_1 + 0xc) + iVar4) & 0xf3;
        *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar4 + 1) = 100;
        *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar4 + 2) = 100;
        iVar3 = iVar3 + 1;
        *(byte *)(*(int *)(param_1 + 0xc) + iVar4) =
             *(byte *)(*(int *)(param_1 + 0xc) + iVar4) & 0xef;
        iVar2 = (int)param_1[1];
        iVar4 = iVar4 + 3;
      } while (iVar3 < iVar2);
    }
    param_1[0x10] = param_1[0x10] & 0xfc;
    param_1[0x10] = param_1[0x10] & 0xf3;
    param_1[0x11] = 'd';
    param_1[0x12] = 'd';
    param_1[0x10] = param_1[0x10] & 0xef;
    psVar5 = *(short **)(*(int *)(param_1 + 8) + 0x20);
    if (psVar5 == (short *)0x0) {
      uVar1 = 0;
    }
    else {
      iVar3 = 0;
      uVar1 = *(undefined4 *)(param_1 + 4);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          uVar6 = (*(char *)(*(int *)(param_1 + 0xc) + iVar2 + 1) * 0xff) / 100;
          FUN_088372f0(uVar1,(int)*psVar5,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 3;
          psVar5 = psVar5 + 0x10;
          uVar1 = *(undefined4 *)(param_1 + 4);
        } while (iVar3 < param_1[1]);
      }
      FUN_08834dd8();
      uVar1 = 0;
    }
  }
  return uVar1;
}

