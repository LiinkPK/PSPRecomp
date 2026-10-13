/* Entry 0x088FF1F0 | file offset 0x000FC1C8 | FUN_088ff1f0 | bytes 624 */

int FUN_088ff1f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar1 = DAT_089d8120;
  if (*(uint *)(DAT_089d8120 + 0x2f4) <= *(int *)(DAT_089d8120 + 0x2f8) + 2U) {
    return -0x7fffffde;
  }
  if (param_3 != 0) {
    iVar6 = *(int *)(DAT_089d8120 + 0x2f8);
    iVar8 = DAT_089d8120 + iVar6 * 0x10;
    *(int *)(DAT_089d8120 + 0x2f8) = iVar6 + 1;
    iVar6 = FUN_089a7658(iVar1,iVar8 + 0x400,0x6277,0,param_4,param_3);
    if (iVar6 < 0) {
      return iVar6;
    }
  }
  if (param_1 != 0) {
    iVar6 = *(int *)(iVar1 + 0x2f8);
    *(int *)(iVar1 + 0x2f8) = iVar6 + 1;
    iVar6 = FUN_089a7658(iVar1,iVar1 + iVar6 * 0x10 + 0x400,0x6364,0x10,param_2,param_1);
    if (iVar6 < 0) {
      return iVar6;
    }
    *(int *)(iVar1 + 0x2fc) = *(int *)(iVar1 + 0x2fc) + 1;
    uVar2 = FUN_089a7464(iVar1);
    lVar9 = FUN_089a92c4(uVar2);
    lVar10 = FUN_089a7e24(iVar1);
    iVar8 = (int)((ulonglong)(lVar9 - lVar10) >> 0x20);
    uVar7 = (uint)(lVar9 - lVar10);
    uVar3 = FUN_089a87c0(iVar1,*(undefined4 *)(iVar1 + 0x2f8));
    uVar4 = FUN_089a746c(iVar1);
    uVar5 = (param_5 - uVar4) - uVar3;
    iVar6 = (param_6 - (uint)(param_5 < uVar4)) - (uint)(param_5 - uVar4 < uVar3);
    if (iVar6 == iVar8 && uVar5 < uVar7 || iVar6 < iVar8) {
      return -0x7ffffefe;
    }
    if (*(uint *)(iVar1 + 0x2fc) % *(uint *)(iVar1 + 0x1d0) == 0) {
      FUN_089a7de8(iVar1);
      uVar3 = *(uint *)(iVar1 + 0x2fc) /
              (*(uint *)(*(int *)(iVar1 + 0x2f0) + 0x18) / *(uint *)(*(int *)(iVar1 + 0x2f0) + 0x14)
              );
      *(uint *)(iVar1 + 0x1c8) = uVar3;
      iVar8 = FUN_08998644(uVar7,iVar8,uVar3,(int)uVar3 >> 0x1f);
      uVar2 = FUN_08998644(uVar5,iVar6,iVar8,iVar8 >> 0x1f);
      *(undefined4 *)(iVar1 + 0x1cc) = uVar2;
      FUN_089a7dbc(iVar1);
    }
  }
  return 0;
}

