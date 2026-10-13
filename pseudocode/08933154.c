/* Entry 0x08933154 | file offset 0x0013012C | FUN_08933154 | bytes 168 */

void FUN_08933154(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar2 = 0;
  iVar3 = 0;
  puVar4 = param_1;
  if (0 < param_4) {
    do {
      bVar1 = iVar3 < param_2;
      if (0 < (int)uVar2) {
        if ((int)uVar2 < 0) {
          uVar5 = -(-uVar2 & 3);
        }
        else {
          uVar5 = uVar2 & 3;
        }
        if (uVar5 == 0) {
          if (!bVar1) break;
          *puVar4 = 0x2d;
          iVar3 = iVar3 + 1;
          bVar1 = iVar3 < param_2;
          puVar4 = param_1 + iVar3;
        }
      }
      if (!bVar1) break;
      iVar3 = iVar3 + 1;
      *puVar4 = *(undefined1 *)(param_3 + uVar2);
      uVar2 = uVar2 + 1;
      puVar4 = param_1 + iVar3;
    } while ((int)uVar2 < param_4);
  }
  *puVar4 = 0;
  return;
}

