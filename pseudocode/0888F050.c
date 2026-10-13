/* Entry 0x0888F050 | file offset 0x0008C028 | FUN_0888f050 | bytes 480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0888f050(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  undefined1 local_30;
  
  iVar3 = _DAT_08af2bd4;
  piVar11 = (int *)(param_1 + 4);
  local_30 = 0;
  iVar12 = 0;
  psVar10 = (short *)(_DAT_08af2bd4 + 0x10);
  do {
    bVar2 = true;
    pbVar9 = *(byte **)(*piVar11 + 0x52c);
    uVar4 = FUN_08835778();
    iVar5 = FUN_088bf4cc(uVar4,0x53);
    if ((iVar5 != 0) && (iVar5 = FUN_088bf4cc(uVar4,0x56), iVar5 == 0)) {
      bVar2 = false;
    }
    *(undefined1 *)((int)piVar11 + 5) = 0;
    if ((((char)piVar11[1] == '\0') && ((*(uint *)(pbVar9 + 0x28) & 4) != 0)) && (bVar2)) {
      iVar5 = *(int *)(*piVar11 + 0x544);
      iVar5 = (**(code **)(iVar5 + 0x134))(*piVar11 + (int)*(short *)(iVar5 + 0x130));
      pbVar6 = *(byte **)(iVar5 + 0x52c);
      uVar8 = (uint)pbVar9[1];
      if (pbVar6[1] == 0) {
        bVar1 = *pbVar6;
      }
      else {
        bVar1 = pbVar6[1];
      }
      if (uVar8 == 0) {
        uVar8 = (uint)*pbVar9;
      }
      if ((int)(bVar1 - uVar8) < (int)*psVar10) {
        if ((int)(bVar1 - uVar8) < (int)*(short *)(iVar3 + 0x12)) {
          iVar5 = (int)*(short *)(iVar3 + 0x16);
        }
        else {
          iVar5 = (int)*(short *)(iVar3 + 0x18);
        }
      }
      else {
        iVar5 = (int)*(short *)(iVar3 + 0x14);
      }
      iVar7 = *(int *)(pbVar6 + 0xc) - *(int *)(pbVar6 + 8);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (iVar5 <= (iVar7 * 100) / *(int *)(pbVar6 + 0xc)) {
        *(undefined1 *)((int)piVar11 + 5) = 1;
        *(undefined1 *)(piVar11 + 1) = 1;
        local_30 = 1;
      }
    }
    iVar12 = iVar12 + 1;
    piVar11 = piVar11 + 2;
  } while (iVar12 < 2);
  return local_30;
}

