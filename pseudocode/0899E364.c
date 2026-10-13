/* Entry 0x0899E364 | file offset 0x0019B33C | FUN_0899e364 | bytes 332 */

void FUN_0899e364(ushort *param_1,ushort *param_2,int param_3,int param_4,char param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_5 == '\0') {
    iVar3 = param_4;
  }
  if (param_4 == 2) {
    if (0 < param_3) {
      do {
        uVar2 = *param_2;
        param_3 = param_3 + -1;
        *param_1 = uVar2 & 0x83e0 | (ushort)(((uint)uVar2 << 0x11) >> 0x1b) |
                   (ushort)((uVar2 & 0x1f) << 10) | 0x8000;
        param_2 = (ushort *)((int)param_2 + iVar3);
        param_1 = param_1 + 1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_4 < 3) {
    if (param_4 == 1) {
      if (param_3 < 1) {
        return;
      }
      do {
        uVar2 = *param_2;
        param_3 = param_3 + -1;
        param_2 = (ushort *)((int)param_2 + iVar3);
        *(char *)param_1 = (char)uVar2;
        param_1 = (ushort *)((int)param_1 + 1);
      } while (param_3 != 0);
      return;
    }
  }
  else {
    if (param_4 != 3) {
      if (param_4 != 4) {
        return;
      }
      if (param_3 < 1) {
        return;
      }
      do {
        param_3 = param_3 + -1;
        *(char *)param_1 = (char)param_2[1];
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        *(char *)(param_1 + 1) = (char)*param_2;
        puVar1 = (undefined1 *)((int)param_2 + 3);
        param_2 = (ushort *)((int)param_2 + iVar3);
        *(undefined1 *)((int)param_1 + 3) = *puVar1;
        param_1 = param_1 + 2;
      } while (param_3 != 0);
      return;
    }
    if (0 < param_3) {
      do {
        param_3 = param_3 + -1;
        *(char *)param_1 = (char)param_2[1];
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar2 = *param_2;
        *(undefined1 *)((int)param_1 + 3) = 0xff;
        param_2 = (ushort *)((int)param_2 + iVar3);
        *(char *)(param_1 + 1) = (char)uVar2;
        param_1 = param_1 + 2;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}

