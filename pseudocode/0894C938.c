/* Entry 0x0894C938 | file offset 0x00149910 | FUN_0894c938 | bytes 624 */

undefined4 FUN_0894c938(int param_1,int param_2,char *param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  short sVar5;
  ushort *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*param_3 == 'u') {
    if ((param_4 == 0) &&
       (*(ushort *)(param_3 + 2) = *(ushort *)(param_3 + 2) | 8, *(short *)(param_3 + 0x20) != 0)) {
      uVar2 = 0;
    }
    else {
      iVar9 = *(int *)(param_3 + 0x40);
      *param_3 = '\0';
      iVar10 = 0;
      if (*(char *)(iVar9 + 0x16) != '\0') {
        iVar11 = 0;
        do {
          iVar12 = (uint)*(ushort *)(*(int *)(*(int *)(param_3 + 0x40) + 0x30) + iVar11) * 4;
          if (*(int *)(*(int *)(param_3 + 0x48) + iVar12) != 0) {
            puVar6 = *(ushort **)(*(int *)(iVar9 + 0x1c) + iVar12);
            iVar8 = **(int **)(&DAT_089d95d0 + (uint)*puVar6 * 4);
            (**(code **)(iVar8 + 0x2c))
                      ((int)*(int **)(&DAT_089d95d0 + (uint)*puVar6 * 4) +
                       (int)*(short *)(iVar8 + 0x28),param_1,
                       *(int *)(*(int *)(param_3 + 0x48) + iVar12),
                       *(int *)(param_3 + 0x44) + (uint)puVar6[1]);
            *(undefined4 *)(*(int *)(param_3 + 0x48) + iVar12) = 0;
          }
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 2;
        } while (iVar10 < (int)(uint)*(byte *)(iVar9 + 0x16));
      }
      pcVar3 = *(char **)(param_3 + 0x18);
      if ((pcVar3 != (char *)0x0) && (*pcVar3 == 'u')) {
        *(short *)(pcVar3 + 0x20) = *(short *)(pcVar3 + 0x20) + -1;
      }
      iVar9 = param_2 + param_3[8] * 4;
      piVar4 = (int *)(iVar9 + 0x1b8);
      piVar7 = (int *)(iVar9 + 0x1c0);
      iVar9 = *(int *)(param_3 + 0x14);
      if (param_3 == (char *)*piVar4) {
        if (iVar9 == 0) {
          *piVar7 = 0;
          *piVar4 = 0;
          iVar9 = param_2 + param_3[8] * 2;
          sVar5 = *(short *)(iVar9 + 0x1b2) + -1;
        }
        else {
          *piVar4 = iVar9;
          iVar9 = param_2 + param_3[8] * 2;
          sVar5 = *(short *)(iVar9 + 0x1b2) + -1;
        }
      }
      else {
        iVar10 = *(int *)(param_3 + 0x10);
        if (iVar9 == 0) {
          *(undefined4 *)(iVar10 + 0x14) = 0;
          *piVar7 = iVar10;
          iVar9 = param_2 + param_3[8] * 2;
          sVar5 = *(short *)(iVar9 + 0x1b2) + -1;
        }
        else {
          *(int *)(iVar10 + 0x14) = iVar9;
          *(int *)(iVar9 + 0x10) = iVar10;
          iVar9 = param_2 + param_3[8] * 2;
          sVar5 = *(short *)(iVar9 + 0x1b2) + -1;
        }
      }
      *(short *)(iVar9 + 0x1b2) = sVar5;
      if (*(int *)(param_3 + 0x3c) != 0) {
        FUN_08970264();
      }
      uVar1 = *(ushort *)(*(int *)(param_2 + 0x1c8) + 0x18);
      iVar9 = FUN_08971010(*(undefined4 *)(param_1 + 0x18),param_3);
      param_1 = param_1 + (uint)uVar1 * 4;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) - iVar9;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

