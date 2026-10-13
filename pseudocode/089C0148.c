/* Entry 0x089C0148 | file offset 0x001BD120 | FUN_089c0148 | bytes 384 */

void FUN_089c0148(ushort *param_1,ushort *param_2,int param_3,int param_4,char param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_4;
  if (param_5 != '\0') {
    iVar4 = 0;
  }
  if (param_4 == 2) {
    if (0 < param_3) {
      iVar3 = 0;
      do {
        uVar1 = *param_2;
        iVar3 = iVar3 + 1;
        *param_1 = uVar1 & 0x83e0 | (ushort)(((uint)uVar1 << 0x11) >> 0x1b) |
                   (ushort)((uVar1 & 0x1f) << 10) | 0x8000;
        param_2 = (ushort *)((int)param_2 + iVar4);
        param_1 = param_1 + 1;
      } while (param_3 != iVar3);
      return;
    }
  }
  else if (param_4 < 3) {
    if (param_4 != 1) {
      return;
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        uVar1 = *param_2;
        iVar3 = iVar3 + 1;
        param_2 = (ushort *)((int)param_2 + iVar4);
        *(char *)param_1 = (char)uVar1;
        param_1 = (ushort *)((int)param_1 + 1);
      } while (param_3 != iVar3);
      return;
    }
  }
  else if (param_4 == 3) {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        iVar3 = iVar3 + 1;
        *(char *)param_1 = (char)param_2[1];
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = *param_2;
        *(undefined1 *)((int)param_1 + 3) = 0xff;
        param_2 = (ushort *)((int)param_2 + iVar4);
        *(char *)(param_1 + 1) = (char)uVar1;
        param_1 = param_1 + 2;
      } while (param_3 != iVar3);
      return;
    }
  }
  else if ((param_4 == 4) && (iVar3 = 0, 0 < param_3)) {
    do {
      *(char *)param_1 = (char)param_2[1];
      *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
      *(char *)(param_1 + 1) = (char)*param_2;
      puVar2 = (undefined1 *)((int)param_2 + iVar4);
      *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
      if (param_3 == iVar3 + 1) {
        return;
      }
      iVar3 = iVar3 + 2;
      *(undefined1 *)(param_1 + 2) = puVar2[2];
      *(undefined1 *)((int)param_1 + 5) = puVar2[1];
      *(undefined1 *)(param_1 + 3) = *puVar2;
      param_2 = (ushort *)(puVar2 + iVar4);
      *(undefined1 *)((int)param_1 + 7) = puVar2[3];
      param_1 = param_1 + 4;
    } while (param_3 != iVar3);
    return;
  }
  return;
}

