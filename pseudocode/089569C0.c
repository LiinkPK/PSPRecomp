/* Entry 0x089569C0 | file offset 0x00153998 | FUN_089569c0 | bytes 272 */

undefined4 FUN_089569c0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  *param_4 = 0;
  local_1c = param_4;
  local_18 = param_3;
  local_14 = param_2;
  iVar3 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),
                       (uint)*(ushort *)(param_3 + 0xf0) * 0xa0 + 0x30,&local_20,1);
  uVar4 = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = local_14 + (uint)*(ushort *)(*(int *)(*(int *)(local_14 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_20;
    uVar2 = *(undefined2 *)(local_18 + 0xf0);
    *(undefined2 *)(iVar3 + 0x1e) = 0;
    *(undefined2 *)(iVar3 + 0x1c) = uVar2;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *local_1c = iVar3;
    local_1c[1] = 0;
    local_1c[2] = 0;
    *(undefined2 *)(local_1c + 3) = 0;
    iVar5 = *(int *)(local_14 + 0x8c);
    *(undefined1 *)(iVar3 + 0x22) = 0;
    cVar1 = *(char *)(iVar5 + 0x58);
    if (cVar1 < '\x03') {
      if (cVar1 != '\0') {
        return 1;
      }
    }
    else if ('\x04' < cVar1) {
      return 1;
    }
    if (*(char *)(local_18 + 0xfb) == '\a') {
      *(undefined1 *)(iVar3 + 0x22) = 1;
    }
  }
  return uVar4;
}

