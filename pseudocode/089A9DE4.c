/* Entry 0x089A9DE4 | file offset 0x001A6DBC | FUN_089a9de4 | bytes 528 */

uint FUN_089a9de4(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_50 [32];
  undefined1 *local_30 [4];
  
  local_30[0] = auStack_50;
  uVar2 = sceIoDevctl(&DAT_089d0a1c,0x2425818,local_30,4,0,0);
  if (uVar2 == 0) {
    uVar6 = *(int *)(local_30[0] + 0x10) * *(int *)(local_30[0] + 0xc);
    iVar7 = (int)uVar6 >> 0x1f;
    if (*(uint *)(local_30[0] + 4) < 3) {
      uVar2 = 0;
      iVar3 = 0;
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(local_30[0] + 4) - 2;
      iVar3 = (uVar2 < 0xfffffffe) - 1;
      iVar5 = uVar2 * iVar7;
    }
    uVar4 = (uint)((ulonglong)uVar2 * (ulonglong)uVar6);
    iVar5 = iVar5 + (int)((ulonglong)uVar2 * (ulonglong)uVar6 >> 0x20) + uVar6 * iVar3;
    uVar2 = 0;
    if ((iVar5 < 1) && ((iVar5 != 0 || (uVar2 = 0, -1 < (int)uVar4)))) {
      uVar2 = (uint)((ulonglong)param_2 * (ulonglong)uVar6);
      iVar5 = (iVar5 - (param_2 * iVar7 + (int)((ulonglong)param_2 * (ulonglong)uVar6 >> 0x20) +
                       uVar6 * ((int)param_2 >> 0x1f))) - (uint)(uVar4 < uVar2);
      uVar4 = uVar4 - uVar2;
      if ((iVar5 < 0) || ((uVar2 = 0, iVar5 == 0 && (uVar4 < param_1)))) {
        if (uVar6 == 0) {
          iVar7 = 0;
          uVar6 = 1;
        }
        uVar2 = (param_1 - uVar4) + uVar6;
        iVar3 = uVar2 - 1;
        uVar8 = FUN_08998644(iVar3,(-(uint)(param_1 < uVar4) - iVar5) + iVar7 +
                                   (uint)(uVar2 < uVar6) + -1 + (uint)(iVar3 != -1),uVar6,iVar7);
        lVar1 = (uVar8 & 0xffffffff) * (ulonglong)uVar6;
        iVar7 = (int)uVar8 * iVar7 + (int)((ulonglong)lVar1 >> 0x20) + uVar6 * (int)(uVar8 >> 0x20);
        uVar2 = (uint)(iVar7 >> 0x1f) >> 0x16;
        uVar6 = (int)lVar1 + uVar2;
        uVar2 = uVar6 >> 10 | (iVar7 + (uint)(uVar6 < uVar2)) * 0x400000;
      }
    }
  }
  return uVar2;
}

