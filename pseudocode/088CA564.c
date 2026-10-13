/* Entry 0x088CA564 | file offset 0x000C753C | FUN_088ca564 | bytes 244 */

void FUN_088ca564(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  if (param_2 < 2) {
    iVar1 = param_1 + param_2 * 4;
    if (*(int *)(iVar1 + 0xa178) < 0x1518) {
      if (*(int *)(iVar1 + 0xbdc4) != 0) {
        local_20 = FUN_088ca658(*(undefined4 *)(iVar1 + 0xbdbc));
        iVar2 = *(int *)(iVar1 + 0xa178);
        iVar3 = iVar2 * 3;
        iVar4 = 2;
        do {
          *(undefined1 *)(param_1 + param_2 * 0x3f48 + iVar3 + 0x22e8) =
               *(undefined1 *)((int)&local_20 + iVar4);
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + 1;
        } while (-1 < iVar4);
        *(int *)(iVar1 + 0xa178) = iVar2 + 1;
      }
    }
    else {
      *(uint *)(param_1 + 0xbde8) = *(uint *)(param_1 + 0xbde8) | 1;
    }
  }
  return;
}

