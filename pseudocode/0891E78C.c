/* Entry 0x0891E78C | file offset 0x0011B764 | FUN_0891e78c | bytes 200 */

bool FUN_0891e78c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_70 [4];
  undefined1 auStack_60 [64];
  undefined4 local_20;
  
  puVar1 = local_70;
  if (*(int *)(param_1 + 4) != 0) {
    local_70[0] = 0;
    local_70[1] = 1;
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_088da0a8(*(undefined4 *)(param_1 + 4),*puVar1,auStack_60,&local_20);
        FUN_0887b778(*(undefined4 *)(iVar2 + 0x10),auStack_60);
        FUN_0887b820(*(undefined4 *)(iVar2 + 0x10),local_20);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      puVar1 = puVar1 + 1;
    } while (iVar3 < 2);
  }
  return *(int *)(param_1 + 0x18) == 4;
}

