/* Entry 0x088FFB3C | file offset 0x000FCB14 | FUN_088ffb3c | bytes 460 */

int FUN_088ffb3c(int param_1,int param_2,short *param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (int)*(short *)(DAT_089d8128 + 0x3e08);
  if (iVar10 < 1) {
    iVar6 = -0x7fffffff;
  }
  else {
    iVar6 = sceKernelWaitSema(*(undefined4 *)(DAT_089d8128 + 0x3e04),iVar10,0);
    if (-1 < iVar6) {
      sceKernelWaitSema(*(undefined4 *)(DAT_089d8128 + 0x3dfc),1,0);
      iVar9 = (int)*(short *)(DAT_089d8128 + 0x3e0a);
      iVar7 = iVar10 + iVar9 + -0xf7f;
      if (0 < iVar7) {
        FUN_088ffd08(iVar7);
        iVar9 = 0xf7f - iVar10;
      }
      iVar7 = 0;
      if (iVar10 < 1) {
        *(short *)(DAT_089d8128 + 0x3e0a) = (short)iVar9;
      }
      else {
        iVar8 = iVar9 << 2;
        do {
          sVar2 = param_3[1];
          sVar3 = ((short *)(DAT_089d8128 + iVar8))[1];
          uVar4 = FUN_088ff78c((int)*(short *)(DAT_089d8128 + iVar8) + (*param_3 * param_1 >> 0xf));
          uVar5 = FUN_088ff78c((int)sVar3 + (sVar2 * param_2 >> 0xf));
          iVar7 = iVar7 + 1;
          *(undefined2 *)(DAT_089d8128 + iVar8) = uVar4;
          iVar9 = iVar9 + 1;
          *(undefined2 *)(DAT_089d8128 + iVar8 + 2) = uVar5;
          iVar8 = iVar8 + 4;
          param_3 = param_3 + 2;
        } while (iVar7 < iVar10);
        *(short *)(DAT_089d8128 + 0x3e0a) = (short)iVar9;
      }
      iVar10 = DAT_089d8128;
      psVar1 = (short *)(DAT_089d8128 + 0x3e0a);
      *(int *)(DAT_089d8128 + 0x3e10) = (int)*psVar1;
      *(int *)(iVar10 + 0x3e0c) = (int)*psVar1;
      sceKernelSignalSema(*(undefined4 *)(DAT_089d8128 + 0x3dfc),1);
      sceKernelSetEventFlag(*(undefined4 *)(DAT_089d8128 + 0x3e00),1);
    }
  }
  return iVar6;
}

