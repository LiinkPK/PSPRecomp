/* Entry 0x088885DC | file offset 0x000855B4 | FUN_088885dc | bytes 284 */

void FUN_088885dc(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + *(int *)(param_1 + 0x54) * 4 + 0x38);
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar4 = 0;
  uVar3 = 0;
  bVar2 = false;
  if ((iVar1 == 2) || (iVar1 == 3)) {
    bVar2 = true;
  }
  if (((bVar2) && ((*(uint *)(iVar5 + 0x388) & 2) == 0)) || (iVar1 == 7)) {
    uVar4 = 1;
  }
  if (((*(char *)(DAT_089d6a00 + 0x18) == '\x01') && (*(int *)(DAT_089d6a00 + 4) < 2)) &&
     ((*(uint *)(iVar5 + 0x388) & 2) == 0)) {
    uVar3 = 1;
    uVar4 = 1;
  }
  if ((bVar2) || (iVar1 == 7)) {
    uVar3 = 1;
  }
  FUN_088356c8(iVar5,uVar4,uVar3);
  return;
}

